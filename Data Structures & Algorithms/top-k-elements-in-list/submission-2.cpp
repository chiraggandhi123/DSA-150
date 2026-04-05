class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(auto x: nums){
            freq[x]++;
        }
      
        priority_queue<pair<int, int>> pq;

        for(auto p: freq){
            pq.push({p.second, p.first});
        }
      
        vector<int>res;

        while(k--){
            auto v = pq.top();
            pq.pop();
            res.push_back(v.second);
        }
        return res;
    }
};
