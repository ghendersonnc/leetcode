class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int length = nums.size();

        int x = nums[length - 1] * nums[length - 2] * nums[length - 3];
        int y = nums[0] * nums[1] * nums[length - 1];

        return max(x, y);
    }
};