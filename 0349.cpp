class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> snum1;
        vector<int>::iterator iter;
        vector<int> res;
        for(iter = nums1.begin(); iter != nums1.end(); iter ++){
            snum1.insert(*iter);
        }
        for(iter = nums2.begin(); iter != nums2.end(); iter ++){
            if(snum1.find(*iter) != snum1.end()){
                res.push_back(*iter);
                snum1.erase(*iter);
            }
        }
        return res;
    }
};