// leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        vector<bool>res(candies.size());
        for(auto x: candies){
            if(max<x)
                max = x;
        }
        int i = 0;
        for(auto j: candies){
            if(j+extraCandies >= max)
                res[i] = true;
            else
                res[i] = false;
            i++;
        }
        return res;
    }
};
