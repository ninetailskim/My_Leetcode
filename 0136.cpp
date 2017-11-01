class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>::iterator iter;
        int res  = 0;
        for(iter = nums.begin(); iter != nums.end(); iter ++){
            res = res ^ (*iter);
        }
        return res;
    }
};