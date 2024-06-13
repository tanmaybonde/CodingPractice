#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> firstNegativeNumber(int *arr,vector<int> &v,int n,int k){
    int i=0;
    int j=0;
    list<int> l;

    while(j<n){
        if(arr[j]<0){
            l.push_back(arr[j]);
        }

        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(!l.empty()){
                v.push_back(l.front());
            }else{
                v.push_back(0);
            }
            if(!l.empty() && arr[i] == l.front()){
                l.pop_front();    
            }
            
            i++;
            j++;
        }
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int windowSize;
    cin>>windowSize;

    vector<int> v;
    firstNegativeNumber(arr,v,n,windowSize);

   for(int i=0;i<v.size();i++){
    cout<<v[i];
   }
    return 0;
}