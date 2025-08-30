class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {

        int max = 0;
        vector<int> ans;

        // stack<int> st;

        for(int i=heights.size()-1;i>=0;i--)
        {
            if(max < heights[i]) {
                // st.push(i);
                 ans.push_back(i);
                max = heights[i];
            }
        }

        // sort(ans.begin(), ans.end());

        // while(!st.empty()) {
        //     ans.push_back(st.top());
        //     st.pop();
        // }
        

        return vector<int>(ans.rbegin(), ans.rend());
        
    }
};