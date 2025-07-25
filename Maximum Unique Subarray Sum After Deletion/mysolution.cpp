/* 
- Delete all non-positive numbers so that we can have a subarray containing only positive ones.
- Then, it's easy to find the sum of that subarray
--> We can simply skip all non-positive numbers and sum up all positive ones
(Notes: if the array doesn't contain any positive numbers, we have to return the maximum (least negative) one)
Time Complexity: < O(n)
*/
int maxSum(vector<int>& nums) {
        int sum = 0,max = -101;
        vector<bool> mark (101,false);
        for(int & x : nums){
            if( x>0 && !mark[x] ){
                sum += x;
                mark[x] = true;
            }
            else if (x>max) max = x; 
        }
        return sum==0? max: sum;
    }