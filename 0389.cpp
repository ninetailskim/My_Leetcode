class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> res;
        for(int i = 0;i < t.size(); i ++){
            if(res.find(t[i]) == res.end())
                res[t[i]] = 1;
            else
                res[t[i]] ++;
        }
        for(int i = 0;i < s.size(); i ++){
            res[s[i]] --;
            if(res[s[i]] == 0)
                res.erase(s[i]);
        }
        return res.begin()->first;
    }
};