class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        
        priority_queue<pair<int,int>> pq;
        
        for(auto i:map){
            pq.push(make_pair(i.second, i.first));
        }
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};