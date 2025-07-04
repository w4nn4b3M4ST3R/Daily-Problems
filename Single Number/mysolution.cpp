/*                          
                                    ************This is the most optimized algorithm to solve this problem************
    Using bitwise operator "XOR" - "^" ( apply on each bit )
    Formula:
    a^0 = a ( Ex: 1010 XOR 0000 = 1010 )
    a^a = 0 ( EX: 1010 XOR 1010 = 0000 )
    Every pair of element will result 0 when using XOR, finally res = the single one

    Ex:
    2 4 1 4 2
    Make pair: 2 XOR 2 = 0 and 4 XOR 4 = 0  
    --> we will find the single one : res = 0 XOR 1 = 1
*/

int singleNumber(vector<int>& nums) { // main function
        int res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        return res;
    }