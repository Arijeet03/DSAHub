class Solution {
public:
    long long calc(vector<int>& piles, int speed){
        long long total = 0;
        for(int i = 0; i < piles.size(); i++){
            total += (piles[i] + speed - 1) / speed;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = *max_element(piles.begin(), piles.end());
        int low = 1, high = maxPile, ans = maxPile;
        while(low <= high){
            int mid = (low + high) / 2;
            long long total = calc(piles, mid);

            if(total <= h){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;  
    }
};