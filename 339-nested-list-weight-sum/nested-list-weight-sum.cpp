/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:

    int helperdepth(vector<NestedInteger>& nestedList, int depth) {
        int ans = 0;

        for(auto item: nestedList) {
            if(item.isInteger()) {
                ans += item.getInteger()*depth;
            } else {
                ans += helperdepth(item.getList(), depth+1);
            }
        }

        return ans;

    }
    int depthSum(vector<NestedInteger>& nestedList) {
        
        // int depth = 1;
        // int ans = 0;

        // for(int i=0;i<nestedList.size();i++)
        // {
        //     if(nestedList[i].isInteger()) {
        //     cout<<nestedList[i].getInteger()<<" integer i "<<i<<endl;
        //     ans = ans + depth*nestedList[i].getInteger();
        // } else {
        //     // cout<<nestedList[i].getList()<<" integer list"<<endl;
        // //     auto list = nestedList[i].getList();
        // //     for(int j=0;j<list.size();j++)
        // //     {
        // //         if(list[j].isInteger()) {
        // //     cout<<list[j].getInteger()<<" integer j "<<j<<endl;
        // // }
        // //     }

        //     utildepthsum(nestedList[i], depth+1, ans);
        // }
        // }
        return helperdepth(nestedList, 1);
        
    }
};