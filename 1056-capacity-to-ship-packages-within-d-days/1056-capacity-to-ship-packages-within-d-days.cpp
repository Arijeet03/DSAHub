class Solution {
public:
    int daysNeeded(vector<int>&weights , int capacity){
        int days = 1;
        int currentLoad = 0;
        for(int i = 0 ; i < weights.size(); i++){
            if(currentLoad + weights[i] > capacity){
                days++;
                currentLoad = weights[i];
            }else{
                currentLoad += weights[i];
            }

        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
           int left = *max_element(weights.begin(), weights.end());
           int right = accumulate(weights.begin(), weights.end(), 0);
           while(left < right){
            int mid = left + (right-left) / 2;
            int needed = daysNeeded(weights, mid);
             if (needed <= days) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};