class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> window;
        for(int end=0;end<nums.size();end++){
            if(!window.empty() && window.front() == end-k) window.pop_front();
            while(!window.empty() && nums[window.back()]<nums[end]) window.pop_back();
            window.push_back(end);
            if(end>=k-1) ans.push_back(nums[window.front()]);
            // window.push_back(nums[end]);
            // if(window.size()==k){
            //     int mx=INT_MIN;
            //     deque<int>::iterator it;
            //     for (it = window.begin(); it != window.end(); ++it)
            //         mx = max(mx, *it);
            //     ans.push_back(mx);
            //     window.pop_front();
            // }


        }

        return ans;
    }
};