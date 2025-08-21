/*
- Set l as the starting index of a potential range. Loop through the array with r from 1 to nums.size() to check for consecutive numbers.

- If the current number is not consecutive to the previous one (or if we've reached the end of the array), it means the current range has ended.

- If the range contains only one number, add that number as a string. If it contains multiple numbers, format it as "start->end" and add it to the result list.

- Move l to the current index r to begin tracking the next range.
*/
vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res={};
        if(nums.size()==0) return res;
        int l=0;
        for (int r = 1; r <= nums.size(); ++r) {
        if (r == nums.size() || nums[r] != nums[r - 1] + 1) {
            if (l == r - 1)
                res.push_back(std::to_string(nums[l]));
            else
                res.push_back(std::to_string(nums[l]) + "->" + std::to_string(nums[r - 1]));
            l = r;
        }
    }
    return res;
    }