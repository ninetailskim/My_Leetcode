class Solution {
public:
    bool hasAlternatingBits(int n) {
        int temp = n % 2;
        n = n / 2;
        bool res = true;
        while(n){
            if(n % 2 == temp){
                res = false;
                break;
            }
            temp = n % 2;
            n = n / 2;
        }
        return res;
    }
};