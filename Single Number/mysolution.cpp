/*                          
                                    ************This is the most optimized algorithm to solve this problem************
    Using bitwise operator "xor" - "^" ( apply on each bit )
    a^0 = a ( Ex: 1010 xor 0000 = 1010 )
    a^a = 0 ( EX: 1010 xor 1010 = 0000 )
*/

int singleNumber(vector<int>& nums) { // main function
        int res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        return res;
    }