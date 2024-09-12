class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count= words.size();
        vector<char> vec;
        for(char i: allowed){
            vec.push_back(i);
        }

        
        for (string word: words) {
            for (char c: word) {
                auto it = find(vec.begin(),vec.end(), c);
                if(it == vec.end()){
                    count--;
                    break;
                }
            }
        }

        return count;
    }
};