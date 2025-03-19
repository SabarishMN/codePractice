class Solution {
public:
    void reverse(vector<int>& nums, int start, int end)
    {
        while(start<end)
        {
            swap(nums[start], nums[end]);
            start++;end--;
        }
    }
    void print(vector<int> nums)
    {
        for(int i = 0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        if(k<=n){
        reverse(nums, 0, n-1);
        // print(nums);
        reverse(nums, 0, k-1);
        // print(nums);
        reverse(nums, k, n-1);
        // print(nums);
        }
    }
};