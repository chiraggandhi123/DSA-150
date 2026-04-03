class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool>mp;
        for(auto x: nums){
            if(mp[x]) return true;
            mp[x] = true;
        }
        return false;
    }
};