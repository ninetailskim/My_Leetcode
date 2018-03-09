class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int index[26] = {2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        int flag;
        vector<string> res;
        vector<string>::const_iterator iter;
        for(iter = words.begin(); iter != words.end(); iter++){
            flag = 1;
            string temps = *iter;
            for(int i = 0;temps[i] != '\0'; i++)
                if(temps[i] >= 'A' && temps[i] <= 'Z')
                    temps[i] = temps[i] + 32; 
            for(int i = 0;temps[i + 1] != '\0';i++){
                if(index[temps[i] - 'a'] != index[temps[i + 1] - 'a']){
                    flag = 0;
                }
            }
            if(flag == 1){
                res.push_back(*iter);
            }
        }
        return res;
    }
};