/*
- Iterate from left to right
- At each index 'i', change the sign of nums[idx] (where idx = abs(nums[i]) - 1) to mark the existence of this integer. For example, if 6 exists, nums[5] will be negative)
Note: You can also use a vector to mark them, but this is not recommended because it increases space complexity
*/
vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> res;    
        for(int i = 0;i<size;i++){
            int idx = abs(nums[i]) - 1;
            if(nums[idx]>0) nums[idx]*=-1;
        }
        for(int i = 0;i<size;i++){
            if(nums[i]>0)  res.push_back(i+1);
        }
        return res;
    }