double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size(), size2 = nums2.size();
        if(size1 > size2) return findMedianSortedArrays(nums2,nums1);
        int head = 0, tail = size1;
        while(head <= tail){
            int A = (head+tail)/2;
            int B = (size1+size2+1)/2 - A;

            int lA = A==0? -1e6-1 : nums1[A-1];
            int rA = A==size1? 1e6+1 : nums1[A];

            int lB = B==0? -1e6-1 : nums2[B-1];
            int rB = B==size2? 1e6+1 : nums2[B];

            if(lA <= rB && lB <= rA){
                if((size1+size2)%2) return max(lA,lB);
                else return (max(lA,lB) + min(rA,rB))/2.0;
            }
            else if(lA > rB){
                tail =  A - 1;
            }
            else head = A + 1;
        }
        return 0;
    }