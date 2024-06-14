#include<iostream>
using namespace std;

int maxSum(int *arr,int k,int n){
    int i=0;
    int j=0;
    int sum=0;
    int mx=0;
    while(j<n){

        sum=sum+arr[j];
        if(sum<k){
            j++;
        }
        else if(sum==k){
            mx=max(mx,j-i+1);
            j++;
        }

        else if(sum>k){
            while(sum>k){
                sum=sum-arr[i];
                i++;
            }
            j++;
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
    int sum;
    cin>>sum;

    cout<<maxSum(arr,sum,n);
    return 0;

}