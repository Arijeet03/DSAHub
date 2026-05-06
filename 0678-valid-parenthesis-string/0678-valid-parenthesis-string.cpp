class Solution {
public:
    bool checkValidString(string s) {
        int minsum=0, maxsum =0;
        for(char c: s){
            if(c=='('){
                minsum++;
                maxsum++;
            }
            else if(c==')'){
                minsum--;
                maxsum--;
            }
            else{
                minsum--;
                maxsum++;
            }
            if(maxsum <0) return false;
            minsum = max(minsum,0);
        }
        return minsum == 0;
        
    }
};