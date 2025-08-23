/*
- Uses recursion to continue the process with the new result until it reaches 1 or loops infinitely

- To detect cycles, it stores previously seen results in a vector (nums) and returns false if a result repeats

- This prevents infinite recursion and ensures the function terminates correctly

- The approach is based on the mathematical property that non-happy numbers eventually fall into a cycle
*/
vector<int> nums;
    bool isHappy(int n) {
        if(n==1) return true;
        if(n==0) return false;
        int res=0;
        while(n!=0){
            res+=pow(n%10,2);
            n/=10;
        }
        for(int& x : nums){
            if(res == x) return false;
        }
        nums.push_back(res);
        return isHappy(res);
    }