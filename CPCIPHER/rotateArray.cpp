class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      if ((nums.size()== 0) || (k <= 0))
            {
                return;
            }
      vector<int>ar(nums.size());
      int m = 0;
      if(nums[0]<0){
        for(int i=k; i<nums.size(); i++){
        ar[m] = nums[i];
        m++;
      }
      for(int i=0; i<k; i++){
        ar[m] = nums[i];
        m++;
      }
      }
        else{
          for(int i=k+1; i<nums.size(); i++){
        ar[m] = nums[i];
        m++;
      }
      for(int i=0; i<=k; i++){
        ar[m] = nums[i];
        m++;
      
        }
      }
      nums = ar;
    }
};
