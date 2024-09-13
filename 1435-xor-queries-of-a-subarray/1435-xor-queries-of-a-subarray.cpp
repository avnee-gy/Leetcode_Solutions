class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> ans;
        // pre[0] = arr[0];
        for(int i=1;i<n;i++){
            arr[i] = arr[i]^ arr[i-1];
        }

        for(int i=0;i<queries.size();i++){
            if(queries[i][0]==0){
                ans.push_back(arr[queries[i][1]]);
            }
            else{
                int temp = arr[queries[i][0]-1] ^ arr[queries[i][1]];
                ans.push_back(temp);
            }
                
        }

        return ans;
    }
};