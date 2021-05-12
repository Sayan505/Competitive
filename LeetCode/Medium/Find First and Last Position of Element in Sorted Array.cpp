// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> ranges;
    vector<int> searchRange(vector<int>& nums, int target) {
              
        if(nums.empty())
            return {-1, -1};
        
        for(int i = 0; i < nums.size(); ++i) {
            if(target == nums[i])
                ranges.push_back(i);
        }

        if(ranges.empty())
            return {-1, -1};
        
        return { ranges.front(), ranges.back() };
    }
};