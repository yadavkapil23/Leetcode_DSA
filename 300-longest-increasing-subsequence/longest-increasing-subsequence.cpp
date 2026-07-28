class Solution {
public:

    // ind  -> current index (moving from right to left)
    // next -> index of the last chosen element on the right
    int func(int ind, int next, vector<vector<int>> &dp, vector<int> &nums) {

        // No elements left
        if (ind < 0)
            return 0;

        // If this state is already solved, return its answer
        if (dp[ind][next + 1] != -1)
            return dp[ind][next + 1];

        // Option 1 : Take the current element
        int take = 0;

        // We can take it if:
        // 1. Nothing has been chosen yet (next == -1)
        // 2. Current element is smaller than the chosen element on the right
        if (next == -1 || nums[ind] < nums[next]) {

            // Count this element (+1)
            // Move left (ind-1)
            // Current index now becomes the new 'next'
            take = 1 + func(ind - 1, ind, dp, nums);
        }

        // Option 2 : Don't take the current element
        // Move left, but keep the same chosen element (next)
        int notTake = func(ind - 1, next, dp, nums);

        // Store and return the best of the two choices
        return dp[ind][next + 1] = max(take, notTake);
    }

    int lengthOfLIS(vector<int>& nums) {

        int n = nums.size();

        // dp[ind][next+1]
        // Rows    -> values of ind (0 to n-1)
        // Columns -> values of next (-1 to n-1)
        // next+1 is used because arrays cannot have index -1
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        // Start from the last index
        // next = -1 means no element has been chosen yet
        return func(n - 1, -1, dp, nums);
    }
};