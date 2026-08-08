class Solution {
public:
    int linearrob(vector<int> &nums){
        int n = nums.size();
        if (n==1) return nums[0];
        int prev = nums[0];
        int prev2 = 0;
        for(int i = 1; i < n; i++){
            int pick = nums[i];
            if (n>1){
                pick += prev2;
            }
            int nonpick = prev;
            int maxi = max(pick,nonpick);
            prev2 = prev;
            prev = maxi;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n==0) return 0;
        if (n==1) return nums[0];
        vector<int> arr1,arr2;
        for(int i = 0; i<n; i++){
            if (i != 0) arr1.push_back(nums[i]);
            if (i!= n-1) arr2.push_back(nums[i]);
        }
            int ans1 = linearrob(arr1);
            int ans2 = linearrob(arr2);
            return max(ans1, ans2);
    }
};