// leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      int n = nums.size();
      vector<int>a(101);
      vector<int>b(101);
      vector<int>res(n);
      for(int i=0; i<n; ++i){
        a[nums[i]]++;
      }
      for(int i=1; i<101; ++i){
        b[i] = a[i-1]+b[i-1];
      }
      for(int i=0; i<n; ++i){
        res[i] = b[nums[i]];
      }
      return res;
    }
};


