class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //store target - nums[j] in hashamp along with its index
        unordered_map<int, int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[target - nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++){
            auto it = mp.find(nums[i]);
            if(it != mp.end() && it->second != i){
                int j = it->second;
                return {min(i,j), max(i, j)};
            }
        }
        return {};
    }

};
