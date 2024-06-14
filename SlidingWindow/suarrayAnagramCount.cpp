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
    while(j<str.size()){

        if(mp.find(ptr[j])!=mp.end()){
            mp[ptr[j]]--;

                if(mp[ptr[j]]==0){
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

            if(mp.find(ptr[i])!=mp.end()){
                    if(mp[ptr[i]]==1){
                    count++;
                }
                mp[ptr[i]]++;
            }
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    string str="aabaaabaaaba";
    string ptr="aaba";

    cout<<anagramCount(str,ptr);

return 0;
}