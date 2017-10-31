class Solution {
public:    
    int hammingDistance(int x, int y) {
        int tempx = x;
        int tempy = y;
        int bx[50];
        int by[50];
        int i, j, k;
        for(k = 0;k < 50;k ++){
            bx[k] = 0;
            by[k] = 0;
        }
        for(i = 0;;i ++){
            bx[i] = tempx % 2;
            tempx = tempx / 2;
            if(tempx == 0)
                break;
        }
        for(j = 0;;j ++){
            by[j] = tempy % 2;
            tempy = tempy / 2;
            if(tempy == 0)
                break;
        }
        int maxlen = i > j ? i : j;
        int count = 0;
        for(k = 0;k <= maxlen;k ++){
            if(bx[k] != by[k]){
                count ++;
            }
        }
        return count;
    }
};