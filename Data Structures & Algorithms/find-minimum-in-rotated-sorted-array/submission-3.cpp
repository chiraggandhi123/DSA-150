class Solution {
public:
    int check(int mid, vector<int> &nums, int lo, int hi){
        // [1,2,3,4,5,6] lo < hi && m > lo ? hi = mid
        // [6,1,2,3,4,5] lo > hi && m < lo ? hi = mid
        // [5,6,1,2,3,4] lo > hi && m < lo ? hi = mid
        // [4,5,6,1,2,3] lo > hi
        // [3,4,5,6,1,2]
        // [2,3,4,5,6,1]
      

        if(nums[lo] <= nums[hi]) return 0;
        else{
            if(nums[mid] >= nums[lo]) return 1;
            else{
                return -1;
            }
        }
    }
    // lo < hi don't check mid hi = mid
    // lo > hi
    //         m > lo ? lo = mid+1 : hi = mid
    
    int findMin(vector<int> &nums) {
        int lo = 0;
        int hi = nums.size()-1;
        while(lo < hi){
            int mid = lo + (hi - lo)/2;
            cout<<lo<<" "<<hi<<" "<<check(mid, nums, lo, hi)<<endl;
            if(check(mid, nums, lo, hi) <= 0){
                hi = mid;
            }
            else {
                lo = mid+1;
            }
        }
        return nums[lo];
    }
};
