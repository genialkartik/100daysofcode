// leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ar;
        for(int i=0; i<n; i++){
            ar.push_back(nums[i]);
            ar.push_back(nums[n+i]);
        }
        return ar;
    }
};
