class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int,int> num_index;
        multimap<int,int>::iterator iter;
        typedef multimap<int,int>::const_iterator piter;
        typedef pair<piter, piter> Range;
        
        vector<int> ans;
        int cou = -1;
        for(int i = 0;i<nums.size();i++){
            num_index.insert(pair<int,int>(nums.at(i),i));
        }
        for(int i = 0;i<nums.size();i++){
            int diff = target - nums.at(i);
            cou = num_index.count(diff);
            if(diff != nums.at(i) && cou == 1){
                ans.push_back(i);
                iter = num_index.lower_bound(diff);
                ans.push_back(iter->second);
                return ans;
            }
            if(cou >= 2){
                Range range = num_index.equal_range(nums.at(i));
                ans.push_back(range.first->second);
                ans.push_back((++(range.first))->second);
                return ans;
            }
            
        }
    }
};