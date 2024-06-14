#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int anagramCount(string &str,string &ptr){
    int i=0;
    int j=0;
    int k=ptr.size();
    int ans=0;

    // by using this our pattern will store in map
    unordered_map<char, int> mp;
    for(auto i:ptr){
        mp[i]++;
    }

    int count=mp.size();
    // cout<<count;
    while(j<str.size()){

        if(mp.find(str[j])!=mp.end()){
            mp[str[j]]--;

                if(mp[str[j]]==0){
                count--;
            }
        }
        

        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(count==0){
                ans++;
            }

            if(mp.find(str[i])!=mp.end()){
                 mp[str[i]]++;
                    if(mp[str[i]]==1){
                    count++;
                }
               
           
            }
            i++;
            j++; 
        }
    }
    return ans;
}
int main(){
    string str="aabaaaca";
    string ptr="aaba";

    cout<<anagramCount(str,ptr);

return 0;
}