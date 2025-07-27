/*
- Make a new array with no closest equal neighbors
- Compare the m(mid) with l(left) and r(right): Detect /\ or /\
*/
int countHillValley(vector<int>& nums) {
        int size = nums.size(), count = 0, pre = nums[0];
        vector<int> newNums = {pre};
        for(int i=1; i<size ;i++){
            int & x = nums[i];
            if(x != pre){
                newNums.push_back(x);
                pre = x;
            }
        }
        size = newNums.size();
        for(int i=1;i<size-1;i++){
            int l = newNums[i-1], m = newNums[i], r= newNums[i+1];
            if(m<l && m<r) count++;
            else if(m>l && m>r) count++;
        }
        return count;
    }