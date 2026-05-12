class Solution {
public:
    const int INT_MIN_VAL= -2147483648;
    const int INT_MAX_VAL = 2147483647;
    int myAtoi(string s) {
        long long sum = 0;
        int sign = 1;
        int i = 0;
        while(i < s.size() && s[i] == ' '){
            i++;
        }
        if(i< s.size() && (s[i] == '+' || s[i] == '-')){
             if (s[i] == '-')
                sign = -1;
            i++;
        }
        while (i < s.size() && isdigit(s[i])) {
            sum = sum * 10 + (s[i] - '0');
            if (sign * sum > INT_MAX)
                return INT_MAX_VAL;
            if (sign * sum < INT_MIN)
                return INT_MIN_VAL;
            i++;
        }
        return (sign * sum);
        }
};