class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> differences;
        vector<int> result;
        int i = 0;
        for (auto &x : nums) {
            if (differences.find(x) != differences.end()) {
                result = { i, differences[x] };
                break;
            }
            differences[target - x] = i;
            i++;
        }

        return result;
    }
};