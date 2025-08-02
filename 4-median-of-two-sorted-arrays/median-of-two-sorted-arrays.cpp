class Solution {
public:
    void printArray(vector<int> vec) {
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }

        cout<<endl;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> sorted;
        int mid = (n1 + n2)/2;
        int i = 0, j = 0;
        double ans;
        while(i<n1 && j<n2)
        {
            if(nums1[i] < nums2[j])
            {
                sorted.push_back(nums1[i++]);
            } else {
                sorted.push_back(nums2[j++]);
            }

            if(sorted.size() > mid+1)
            {
                break;
            }
        }

        while(i<n1 && sorted.size()<=mid) sorted.push_back(nums1[i++]);
        while(j<n2 && sorted.size()<=mid) sorted.push_back(nums2[j++]);
        cout<<"n1 : "<<n1<<"  n2:  "<<n2<<endl;
        printArray(sorted);
        if((n1+n2)%2 == 0)
        {
            ans = (sorted[mid-1] + sorted[mid])/2.00000;
            cout<<"1st element "<<sorted[mid-1]<<"  2nd element: "<<sorted[mid]<<endl;
        } else {
            ans = sorted[mid];
            cout<<"1st element "<<sorted[mid]<<endl;
        }

        return ans;
    }
};