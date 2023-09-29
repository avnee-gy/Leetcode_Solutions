class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int len=0, maxL=0;
        int j=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            len++;
            while(mp[s[i]]>1){
                mp[s[j]]--;
                j++;
                len--;
            }

            maxL = max(maxL, len);
        }

        return maxL;
    }
};