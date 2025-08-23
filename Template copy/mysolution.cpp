/*
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