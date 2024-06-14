#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longestSubstring(string &str,int k){
    int j=0;
    int i=0;
    int mx=INT16_MIN;
    unordered_map<char,int> m;
    while (j<str.length())
    {
        m[str[j]]++;
        if(m.size()<k){
            j++;
        }
        else if(m.size()==k){
            mx=max(j-i+1,mx);
            j++;
        }
        else if(m.size()>k){
            while(m.size()>k){
                m[str[i]]--;
                if(m[str[i]]==0){
                    m.erase(str[i]);
                }
                i++;
            }
            j++;
        }

    }
    return mx;
    
}
int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;

    cout<<longestSubstring(str,k);

return 0;
}