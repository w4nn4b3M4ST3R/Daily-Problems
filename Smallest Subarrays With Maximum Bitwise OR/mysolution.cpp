/*
- Iterate from right to left (we can only add the forward element: the element at index 'i+n' at 'i-loop')
- Store the index of the min-index of each 'bit-1' appear in nums vector
- At each 'i', we return "distance + 1" from 'i' to the biggest 'bit-1' to ensure OR is maximum (plus '1' because subarray include 'nums[i]')
*/
vector<int> smallestSubarrays(vector<int>& nums) {
        int size = nums.size(), b, i, a;
        vector<int> minappear(32,-1), res(size);
        for(i = size -1;i>=0;i--){
            for(b=0;b<32;b++){
                if((nums[i] >> b) & 1) minappear[b] = i;
            }
            a = i;
            for(b=0;b<32;b++){
                if(minappear[b]!=-1 && minappear[b] > a ) a = minappear[b];
            }
            res[i] = a - i + 1; 
        }
        return res;
    }