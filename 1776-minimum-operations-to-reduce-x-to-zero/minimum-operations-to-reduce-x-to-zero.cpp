class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
                int total = 0;

        for (int n : nums)
            total += n;

        int target = total - x;

        if (target < 0)
            return -1;

        if (target == 0)
            return nums.size();

        int start = 0;
        int sum = 0;
        int longest = -1;

        for (int end = 0; end < nums.size(); end++) {
            sum += nums[end];

            while (start <= end && sum > target) {
                sum -= nums[start];
                start++;
            }

            if (sum == target) {
                longest = max(longest, end - start + 1);
            }
        }

        if (longest == -1)
            return -1;

        return nums.size() - longest;
    }
};