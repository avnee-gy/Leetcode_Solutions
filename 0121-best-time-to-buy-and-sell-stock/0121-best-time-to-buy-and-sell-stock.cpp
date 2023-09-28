class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP =0;
        int low=INT_MAX;
        int n = prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<low){
                low = prices[i];
            }
            else{
                maxP = max(maxP, prices[i]-low);
            }
            // cout<<maxP<<" ";
        }

        return maxP;
    }
};