class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>::iterator iter;
        int temp = 0, max = 0;
        if(nums.size() == 1){
            if(*(nums.begin()) == 1)
                max = 1;
            else
                max = 0;
        }else{
            if(*(nums.begin()) == 1)
                temp = 1;
            for(iter = nums.begin() + 1; iter != nums.end(); iter ++){
                if(*iter == 1){
                    if(*(iter - 1) == *(iter)){
                        temp ++;
                        continue;
                    }else{
                        temp = 1;
                    }
                }else{
                    max = max>temp?max:temp;
                }
            }
            max = max>temp?max:temp;
        }
        return max;
    }
};