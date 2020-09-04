// leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(auto i=0;i<numRows;++i)
        {
          // initialize every array (2d) with 1
            res.push_back(vector<int>(i+1,1));
          // make changes in required (middle) elements
            for(auto j=1; j<i; ++j) {
              res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res;
    }
};
