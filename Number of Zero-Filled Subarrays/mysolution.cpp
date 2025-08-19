/*
- At first, we go through an example: I have a array [0,0,0], we got:
    -  1 subarray of length 3 [0,0,0]
    -  2 subarray of length 2 [0,0]
    -  3 subarray of length 1 [0]
- Totally we got 6 subarrays filled with '0'
- From this we can realise that the number of subarrays (when we find a streak of n consecutive '0') is:
                 S = n*(n+1)/2 (basic high school math—sum of the first n natural numbers)
- So easily, Loop through the array, count how many '0' are in a row, apply this formula each time end of a streak (dont forget the end of array 'nums')
*/
long long zeroFilledSubarray(vector<int>& nums) {
    long long res = 0;
    long long count = 0;
    for(int& n : nums){
        if(n==0) count++;
        else if (count){
            res+=count*(count+1)/2;
            count=0;
        } 
    }
    if(count) res+=count*(count+1)/2;
    return res;
}