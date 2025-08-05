/*
- Use a vector named available to track which baskets have been used.
- Iterate through all fruits
- For each fruit, iterate through the available baskets
- When a sufficient basket is found, assign the fruit and break the loop.
*/
int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int size = fruits.size(), fp = 0, count = 0;
        vector<bool> available (size,true);
        while(fp<size){
            bool found = false;
            for(int i = 0;i<size;i++){
                if(baskets[i]>=fruits[fp] && available[i]){
                    count++;
                    fp++;
                    available[i] = false;
                    found = true;
                    break;
                }
            }
            if(!found) fp++;
        }
        return size - count;
    }