class Solution {
public:
    int reverse(int x) {
        int lol = 0;
        while(x!=0){
            int digit = x % 10;
          if (lol > INT_MAX / 10 || 
               (lol == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            
            if (lol < INT_MIN / 10 || 
               (lol == INT_MIN / 10 && digit < -8)) {
                return 0;
            }
        lol = lol * 10 + digit;
        x = x/10;

    }
    return lol;
    }
};