#include<iostream>
using namespace std;

int maxSum(int *arr,int k,int n){
    int i=0;
    int j=0;
    int sum=0;
    int mx=INT16_MIN;
    while(j<n){
        sum=sum+arr[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            mx=max(mx,sum);
            sum=sum-arr[i];
            i++;j++;
        }
    }
    return mx;
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

    cout<<maxSum(arr,windowSize,n);
    return 0;

}