    int count_1_in_bits (int n){ //Counting the amount of bit 1 
        int res = 0;
        while(n>0){
            res+=n%2;
            n/=2;
        }
        return res;
    }
    string fix(int h, int m){ //Adjust the result to match the description
        string res;
        res+= to_string(h);
        res+=':';
        if(m<10){
            res+='0';
            res+='0'+m;
        }
        else res+= to_string(m);
        return res;
    }
    vector<string> readBinaryWatch(int turnedOn) {  // main function, create all possible results by check the conditions
        vector<string> res;
        for(int h=0;h<12;h++){
            int count = count_1_in_bits(h);
            for(int m=0;m<60;m++){
                if(count + count_1_in_bits(m) == turnedOn){
                    res.push_back(fix(h,m));
                }
            }
        }
        return res;
    }