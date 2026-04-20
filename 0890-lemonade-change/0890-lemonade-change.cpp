class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int counter5 = 0;
        int counter10 = 0;

        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                counter5++;
            }
            else if (bills[i] == 10) {
                if (counter5 > 0) {
                    counter5--;
                    counter10++;
                } else {
                    return false;
                }
            }
            else { 
                if (counter10 > 0 && counter5 > 0) {
                    counter10--;
                    counter5--;
                }
                else if (counter5 >= 3) {
                    counter5 -= 3;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};