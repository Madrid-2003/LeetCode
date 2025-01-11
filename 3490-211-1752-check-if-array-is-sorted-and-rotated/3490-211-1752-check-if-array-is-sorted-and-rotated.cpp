class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0; // To count the number of "drops" in the array

        for (int i = 0; i < n; i++) {
            // Compare current element with the next (circular)
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        // There should be at most one drop
        return count <= 1;
    }
};
