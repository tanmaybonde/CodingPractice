#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longestSubstring(string &str){
    int j=0;
    int i=0;
    int mx=0;
    unordered_map<char,int> m;
    while (j<str.length())
    {
        m[str[j]]++;
       if(m.size()==j-i+1){
            mx=max(j-i+1,mx);
            j++;
        }
        else if(m.size()<j-i+1){
            while(m.size()<j-i+1){
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
 

    cout<<longestSubstring(str);

return 0;
}