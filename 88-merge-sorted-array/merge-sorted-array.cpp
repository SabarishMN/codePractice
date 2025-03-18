class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums1_temp = nums1;
        int l1 = nums1.size();
        int l2 = nums2.size();
        int i = 0, j = 0, p = 0;


        while(i < m && j < n)
        {
            if(nums1_temp[i] < nums2[j])
            {
                nums1[p++] = nums1_temp[i++];
            } else {
                nums1[p++] = nums2[j++];
            }
        }

        if(i < m)
        {
            for(;i<m;i++)
            {
                nums1[p++] = nums1_temp[i];
            }
        }
        if(j < n)
        {
            for(;j<n;j++)
            {
                nums1[p++] = nums2[j];
            }
        }
    }
};