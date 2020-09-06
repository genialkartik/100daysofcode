// leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2, INT_MAX);
        for(int i = 0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(target == nums[i] + nums[j] && i!=j){
                    res[0] = i;
                    res[1] = j;
                    break;
                }
            }
        }
        return res;
    }
};

class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i=0; i<nums.length; i++){
            for(int j=i+1; j<nums.length; j++){
                if(nums[j]+nums[i]==target){
                    return new int[] {i,j};
                }
            }
        }
        return new int[]{};
    }
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> indices;
        for (int i = 0; i < nums.size(); i++)
        {
            int number2find = target - nums[i];
            if (hash.find(number2find) != hash.end())
            {
                indices.push_back(hash[number2find]); // index of previous number
                indices.push_back(i); // index of current number
                return indices;
            }
            hash[nums[i]] = i;
        }
        return indices;
    }
};
