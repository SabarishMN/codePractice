class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p = 0;
        if(nums.size() == 0) return 0;

        int c = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[p] == nums[i] && c<2)
            {
                c++;p++;
                nums[p] = nums[i];
                 
            } else if(nums[p] < nums[i])
            {
                p++;
                nums[p] = nums[i];
                c=1;
            }
        }

        return p+1;
    }
};