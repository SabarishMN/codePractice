class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {

        int max = 0;
        vector<int> ans;

        for(int i=heights.size()-1;i>=0;i--)
        {
            if(max < heights[i]) {
                 ans.push_back(i);
                max = heights[i];
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
        
    }
};