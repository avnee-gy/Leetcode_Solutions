class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l= cardPoints.size();
        int totalSum=0;
        int min_ans=0;
        for(int i=0, currSum=0 ;i<l;i++){
            totalSum+= cardPoints[i];
            currSum += cardPoints[i];
            if(i< l-k){
                min_ans += cardPoints[i];
            }
            else {
                currSum -= cardPoints[i - (l-k)];
                min_ans = min(min_ans, currSum);
            }
            // cout<<ans;
        }
        return totalSum-min_ans;
    }
};