class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count= words.size();
        // unordered_map<char>
        vector<char> vec;
        for(char i: allowed){
            vec.push_back(i);
        }

        
        for (string word: words) {
            // in case we find an unallowed character, we decrease res and break
            for (char c: word) {
                // cout<<c<<endl;
                auto it = find(vec.begin(),vec.end(), c);
                if(it == vec.end()){
                    // cout<<c<<endl;
                count--;
                break;
                }
            }
        }

        return count;
    }
};