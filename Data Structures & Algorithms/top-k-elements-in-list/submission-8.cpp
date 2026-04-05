class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int>freq;
        for(auto x: nums){
            freq[x]++;
        }

        vector<vector<int>>dp(nums.size() + 1);
        for(auto f: freq){
            dp[f.second].push_back(f.first);
        }
        vector<int>res;
        int i = nums.size();
        while(i > 0 && res.size() < k){
            if(dp[i].size()){
                for(auto x: dp[i]){
                    res.push_back(x);
                }
            }
            i--;
        }
        
        return res;
    }
};