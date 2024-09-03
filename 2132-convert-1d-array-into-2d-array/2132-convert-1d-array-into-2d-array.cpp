class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if(m*n != original.size()){
            return ans;
        }

        for (int i = 0; i < m*n; i+=n)
            ans.push_back(vector<int>(original.begin()+i, original.begin()+i+n));


        return ans;
    }
};