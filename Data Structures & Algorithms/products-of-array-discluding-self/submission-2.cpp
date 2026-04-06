class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pfr(nums.size(), 0);
        vector<int>pfl;
        int tp = 1;
        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i]*tp;
            tp = temp;
            pfl.push_back(tp);
        }
        tp = 1;
         for(int i = nums.size()-1; i >= 0; i--){
            int temp = nums[i]*tp;
            tp = temp;
            pfr[i] = tp;
        }
        vector<int>res;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                res.push_back(pfr[i+1]);
            }
            else if(i == nums.size()-1){
                res.push_back(pfl[i-1]);
            }
            else{
                res.push_back(pfl[i-1]*pfr[i+1]);
            }
        }
        return res;
    }
};
