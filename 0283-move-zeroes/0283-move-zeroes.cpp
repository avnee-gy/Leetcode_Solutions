class Solution {
public:

    void movetoLast(vector<int>& nums, int start){
        for(int i=start; i<nums.size()-1;i++){
            int temp = nums[i];
            nums[i]= nums[i+1];
            nums[i+1] = temp;
        }
    }
    void moveZeroes(vector<int>& nums) {
        int l = nums.size();
        // movetoLast(nums, 0);
        for(int i=l-1;i>=0;i--){
            if(nums[i]==0){
                movetoLast(nums,i);
            }
        }
    }
};