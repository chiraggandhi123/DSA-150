class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(auto x: nums){
            freq[x]++;
        }
        vector<pair<int, int>> vec;
        for(auto p: freq){
            vec.push_back({p.second, p.first});
        }
        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b){
            if(a.first != b.first) return a.first > b.first;
        });
        vector<int>res;

        while(k--){
            res.push_back(vec[k].second);
        }
        return res;
    }
};
