class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool result = false;
        unordered_set<int> iList;
        for(int i = 0;i<nums.size();i++)
        {
            if(!iList.contains(nums[i]))
            {
                iList.insert(nums[i]);
            }
            else
            {
                result = true;
                break;
            }
        }
        return result;
    }
};