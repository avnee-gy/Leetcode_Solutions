class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        for(int i=0,j=n-1;i<n, j>=0;){
            if(numbers[i]+numbers[j] == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(numbers[i]+numbers[j] > target){
                j--;
            }
            else if(numbers[i]+numbers[j] < target)
                i++;

            // int num = target - numbers[i];
            // for(int j=i+1;j<numbers.size();j++){
            //     if(num== numbers[j]){
            //         ans.push_back(i+1);
            //         ans.push_back(j+1);
            //     }
            // }
        }

        return ans;
    }
};