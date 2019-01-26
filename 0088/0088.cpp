class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        if(n==0) {
            return;
        }
        if(m==0) {
            while(j<n) {
                nums1[i]=nums2[j];
                i++;
                j++;
            }
        }
        while(j<n) {
            if(nums1[i]>nums2[j]) {
                int temp=nums1[i];
                nums1[i]=nums2[j];
                for(int k=m+n-1;k>i+1;k--) {
                    nums1[k]=nums1[k-1];
                }
                nums1[i+1]=temp;
                i++;
                j++;
            }
            else if(nums1[i+1]==0&&i==(m+j-1)) {
                while(j<n) {
                    nums1[i+1]=nums2[j];
                    i++;
                    j++;
                }
            }
            else {
                i++;
            }
        }
    }
};
