class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<pair<int, int> > frequency;
        frequency.push_back(make_pair(nums[0], 1));
        for (int i = 1; i < nums.size(); i++)
        {
            bool present = false;
            for (int j = 0; j < frequency.size(); j++)
            {
                if (nums[i] == frequency[j].first)
                {
                    present = true;
                    if (frequency[j]. second == nums.size() / 2)
                        return frequency[j].first;
                    frequency[j].second += 1;
                }
            }
            if (!present)
                frequency.push_back(make_pair(nums[i], 1));
        }
        return nums[0];
    }
};