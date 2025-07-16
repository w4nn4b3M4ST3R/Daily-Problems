int firstMissingPositive(vector<int>& nums) {
        size_t size = nums.size();
        vector<bool> mark(size+1,false);
        for(int& x : nums){
            if(x>=0 && x<=size) mark[x] = true;
        }
        for(int i = 1;i<size+1;i++){
            if(!mark[i]) return i;
        }
        return size+1;
    }