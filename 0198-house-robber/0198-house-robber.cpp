class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        int prev = nums[0];
        int prev2 = 0;
        for(int i = 1; i<n;i++){
            int pick = nums[i];
            pick+=prev2;
            int nonpick = prev;
            int maxi = max(pick, nonpick);
            prev2 = prev;
            prev = maxi;
        }
        return prev;
    }
};