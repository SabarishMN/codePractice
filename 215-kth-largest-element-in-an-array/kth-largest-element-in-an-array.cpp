class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> queue;

        for(int i=0;i<nums.size();i++)
        {
            queue.push(nums[i]);

            if(queue.size() > k)
            queue.pop();
        }

        // for(int i=0;i<k-1;i++)
        // {
        //     queue.pop();
        // }

        return queue.top();
        
    }
};