class Solution {
public:
    int findComplement(int num) {
        int x = num;
        int i, j;
        int in[50] = {0};
        for(i = 0;;i ++){
            in[i] = x % 2;
            x = x / 2;
            if(x == 0)
                break;
        }
        int res = 0;
        for(;i >= 0;i --){
            res = res * 2 + (in[i] ? 0:1);
        }
        return res;
    }
};