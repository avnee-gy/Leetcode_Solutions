class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()< t.length()) return "";
        unordered_map<char, int> mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
 
        unordered_map<char, int> window;
        int start =0, count = 0, min_len = INT_MAX, min_start=0;
        for(int end=0; end<s.length();end++){
            char c= s[end];
            window[c]++;
            if(mp.find(c)!= mp.end() && window[c]==mp[c]){
                count++;
            }

            while(count== mp.size()){
                if(end-start+1 < min_len){
                    min_len = end-start+1;
                    min_start = start;
                }

                window[s[start]]--;
                if(mp.find(s[start])!= mp.end() && window[s[start]]<mp[s[start]]){
                    count--;
                }
                start++;
            }
            

            
        }

        return min_len!= INT_MAX? s.substr(min_start,min_len): "";
        // return s.substr(min_start,min_len);
    }
};