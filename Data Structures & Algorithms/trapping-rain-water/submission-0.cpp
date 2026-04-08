class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size()-1;
        int leftMax = INT_MIN;
        int rightMax = INT_MIN;
        int ans = 0;
        vector<int>leftMaxAtI;
        vector<int>rightMaxAtI;


        for(int i = 0; i < height.size();i++){
            leftMax = max(leftMax, height[i]);
            leftMaxAtI.push_back(leftMax);
        }
        for(int i = 0; i < height.size();i++){
            rightMax = max(rightMax, height[n-i]);
            rightMaxAtI.push_back(rightMax);
        }
        reverse(rightMaxAtI.begin(), rightMaxAtI.end());
        for(int i = 0; i < height.size(); i++){
            ans += min(leftMaxAtI[i], rightMaxAtI[i]) - height[i];
        }
        return ans;
    }
};
