class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<int>> origin = grid;
        vector<vector<int>>::iterator iter;
        vector<int>::iterator iteri;
        int i, j;
        int row = origin.size();
        int col = (*(origin.begin())).size();
        int res[105][105] = {0};
        for(iter = origin.begin(), i = 1; i <= row; i++){
            for(iteri = (*iter).begin(),j = 1; j <= col; j ++, iteri++){
                res[i][j] = (*iteri);
            }
            iter ++;
        }
        int ret = 0;
        for(i = 1;i <= row;i ++){
            for(j = 1;j <= col;j ++){
                if(res[i][j] == 1){
                    if(res[i][j] != res[i - 1][j])
                        ret ++;
                    if(res[i][j] != res[i][j - 1])
                        ret ++;
                    if(res[i][j] != res[i + 1][j])
                        ret ++;
                    if(res[i][j] != res[i][j + 1])
                        ret ++;
                }
            }
        }
        return ret;
    }
};