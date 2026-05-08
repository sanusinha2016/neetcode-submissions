class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        if(m>n){
            return findMedianSortedArrays(nums2 , nums1);
        }

        int left = 0 ;
        int right = m ;
        int mid = (m+n+1)/2;

        while(left<=right){
            int mid1 = left+(right - left)/2 ;
            int mid2 = mid - mid1;
            int L1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
            int L2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
            int R1 = (mid1 == m) ? INT_MAX : nums1[mid1];
            int R2 = (mid2 == n) ? INT_MAX : nums2[mid2];
            if(L1 <=R2 && L2<=R1){
                if((m+n)%2 ==1){
                    return max(L1,L2);
                }
                return (max(L1, L2) + min(R1, R2)) / 2.0;
            }
            else if(L1>R2){
                right = mid1 -1 ;
            }
            else{
                left = mid1+1;
            }
        }
        return 0.0 ;



 
    }
};
