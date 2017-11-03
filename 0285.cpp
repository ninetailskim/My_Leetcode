class Solution {
public:
    int addDigits(int num) {
        int res = 0;
        int temp;
        while(1){
            temp = num;
            res = 0;
            while(1){
                res += temp % 10;
                temp = temp / 10;
                if(temp / 10 == 0){
                    res += temp;
                    break;
                }
            }
            num = res;
            if(num / 10 == 0)
                break;
        }
        return res;
    }
};