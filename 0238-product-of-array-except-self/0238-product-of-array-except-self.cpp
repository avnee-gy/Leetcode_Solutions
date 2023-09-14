class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefix_sum[n];
        int suffix_sum[n];
        vector<int> ans;
        prefix_sum[0]=1;
        suffix_sum[n-1]=1;
        for(int i=0;i<n-1;i++){
            prefix_sum[i+1] = prefix_sum[i]*nums[i];
        }
        for(int i=n-2;i>=0;i--){
            suffix_sum[i] = suffix_sum[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans.push_back(prefix_sum[i]*suffix_sum[i]);
        }


        return ans;
    }
};