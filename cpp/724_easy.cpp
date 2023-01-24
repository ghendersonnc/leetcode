class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = reduce(nums.begin(), nums.end());
        int leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (leftSum == sum - leftSum - nums[i]) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};