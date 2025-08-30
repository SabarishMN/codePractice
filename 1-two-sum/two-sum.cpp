class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;

        // for(int i=0;i<nums.size();i++)
        // {
        //     map[nums[i]] = i;
        // }

        vector<int> ans;
        
        for(int i=0;i<nums.size();i++) {
            int k = target - nums[i];

            if(map.find(k) != map.end() ) {
                ans.push_back(map[k]);
                ans.push_back(i);
                break;
            }
            map[nums[i]] = i;
        }


        return ans;
    }
};