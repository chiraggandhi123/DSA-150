class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            int l = i+1;
            int r = nums.size()-1;
            
            while(l < r){
                int sum = nums[l] + nums[r] + nums[i];
                if(sum < 0) l++;
                else if(sum > 0) r--;
                else{
                    ans.insert({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                }

            }

        }

        vector<vector<int>>fans;
        for(auto x: ans){
            fans.push_back(x);
        }
        return fans;
    }
};
