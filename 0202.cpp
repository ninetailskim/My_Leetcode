class Solution {
public:
    bool isHappy(int n) {
        int keep = n,temp = 0;
        set<int> tte;
        tte.insert(keep);
        while(keep){
            temp = 0;
            while(keep){
                temp += (keep % 10) * (keep % 10);
                keep /= 10;
            }
            keep = temp;
            if(keep == 1)
                break;
            if(tte.find(keep) != tte.end()){
                break;
            }else{
                tte.insert(keep);
            }
        }
        if(keep == 1)
            return true;
        else
            return false; 
    }
};