class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int> temp(n+m);
        int k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                temp[k]=nums1[i];
                i++;
                k++;
            }
            else{
                temp[k]=nums2[j];
                j++;
                k++;
            }
        }
        while(i<m)
            temp[k++]=nums1[i++];
        while(j<n)
            temp[k++]=nums2[j++];
        for(int l=0;l<m+n;l++){
            nums1[l]=temp[l];
        }
    }
};