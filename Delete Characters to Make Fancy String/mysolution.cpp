string makeFancyString(string s) {
        int size= s.size();
        char temp = 0;
        string res;
        res.reserve(size);
        for(int i = 0;i<size-1;i++){
            if(s[i]==s[i+1] && s[i]!=temp){
                temp = s[i];
                res+=temp;
                res+=temp;
                i++;
            }
            else if (s[i]!=temp){
                temp = s[i];
                res += temp;
            }
        }
        if(s[size-1]!=temp) res+= s[size-1];
        return res;
    }