#include<bits/stdc++.h>
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        if(s.length() != t.length()) return false;
        for(int i=0; i<s.length();i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }

        unordered_map<char, int>::iterator it = mp.begin();
        while(it!=mp.end()){
            // cout<<i.first<<" "<<i.second<<endl;
            if(it->second!=0) return false;
            ++it;

        }
        return true;
        
    }
};