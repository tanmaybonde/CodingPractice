#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> maxElementfromSubarray(int *arr,vector<int> &v,int n,int k){
    int i=0;
    int j=0;
    int mx=INT_MIN;
   
    while(j<n){
        mx=max(mx,arr[j]);
        
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
           
            v.push_back(mx);
            if(arr[i]>mx){
                v.push_back(mx);
            }
            i++;
            j++;
        }
    }
    return v;
}
int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int windowSize=3;
    // cin>>windowSize;

    vector<int> v;
    maxElementfromSubarray(arr,v,n,windowSize);

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
    return 0;
}