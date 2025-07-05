/*Quite simple*/

int findLucky(vector<int>& arr) {
        map <int,int> count;
        for(int x : arr){
            count[x]++;
        }
        vector<int> res;
        for(auto it : count){
            if(it.first==it.second) res.push_back(it.first);
        }
        return res.empty()?-1:res.back();
    }