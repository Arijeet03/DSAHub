class Solution {
public:
    int sumbyD(vector<int>& nums, int div){
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            sum+= ceil((double)nums[i]/div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size() > threshold) return -1;
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while(low < high){
            int mid = (low + high) / 2;
            if(sumbyD(nums, mid) <= threshold){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};