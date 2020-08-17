class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,a=0;
        sort(nums.begin(), nums.end());
        if(nums.size() == 1){
            return nums[0];
        }else{
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i] == nums[i+1]){
                    a = nums[i];
                    count++;
                }
                else if(count >= nums.size()/2){
                    break;
                }
                else{
                    count = 0;
                }
            }
        }
            return a;
    }
};
