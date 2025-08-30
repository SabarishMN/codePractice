class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        int n = intervals.size();

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        int min = intervals[0][0];
        int max = intervals[0][1];

        for(int i=0;i<n;i++)
        {
            vector<int> inter = intervals[i];

            if(max >= inter[0]) {
                if(max < inter[1]) max = inter[1];
            } else {
                ans.push_back(vector<int>{min, max});
                min = inter[0]; max = inter[1];
            }
        }

        ans.push_back(vector<int>{min, max});

        return ans;
        
    }
};