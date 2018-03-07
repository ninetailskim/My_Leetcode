class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        int i, j;
        vector<int>::iterator iter;
        map<int,int> res;
        int temp[1050] = {0};
        vector<int> ret;
        int fir, bac;
        
        for(iter = nums.begin(), i = 0; iter != nums.end(); iter ++, i ++){
            temp[i] = (*iter);
        }
        res[temp[nums.size()]] = -1;
        for(i = nums.size(); i > 0; i --){
            fir = temp[i - 1];
            bac = temp[i];
            while(fir > bac){
                bac = res[bac];
                if(bac == -1)
                    break;
            }
            res[temp[i - 1]] = bac;  
        }
        for(iter = findNums.begin(); iter != findNums.end(); iter ++){
            ret.push_back(res[*iter]);
        }
        return ret;
    }
};