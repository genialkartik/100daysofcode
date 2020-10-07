// leetcode.com/problems/combination-sum-iii/

class Solution {
public:
    void combination(vector<vector<int> >& result, vector<int> res, int k, int sum)
    {
        if (res.size() == k && sum == 0) // base case
        {
            result.push_back(res);
            return;
        }
        if (res.size() < k)
        {
            for (int i = res.empty() ? 1 : res.back() + 1; i <= 9; i++)
            {
                if (sum - i < 0)
                    break;
                res.push_back(i);
                combination(result, res, k, sum - i);
                res.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int> > result;
        vector<int> res;

        combination(result, res, k, n);

        return result;
    }
};
