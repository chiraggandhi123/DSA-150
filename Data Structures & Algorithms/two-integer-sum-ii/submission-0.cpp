class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        vector<int>ans;
        while(l < r){
            while(l < r && nums[l] + nums[r] < target){
                l++;
            }
            while(l < r && nums[l] + nums[r] > target){
                r--;
            }
            if(nums[l] + nums[r] == target){
                ans = {l+1, r+1};
                break;
            }
        }
        return ans;

    }
};
