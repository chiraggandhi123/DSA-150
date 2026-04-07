class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int minV = INT_MAX;
        int minVP = INT_MAX;
        unordered_set<int>mp;
        for(auto x: nums){
            mp.insert(x);           
        }
        int ans = 0;
        for(auto x: mp){
            int temp = 0;
            if(mp.find(x-1) != mp.end())continue;
            else{
                int val = x;
                while(true){
                    if(mp.find(val) != mp.end()){
                        temp += 1;
                        val++;
                    }
                    else{
                        ans = max(ans, temp);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
