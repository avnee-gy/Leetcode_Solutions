class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.length();
        int l2 = s2.length();
        if(l1> l2) return 0;
        sort(s1.begin(), s1.end());
        for(int i=0;i<=l2-l1;i++){
            string s = s2.substr(i, l1);
            sort(s.begin(), s.end());
            if(s==s1) return true;
        }

        return 0;
    }

};