class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;

        // Step 1: Find the first decreasing element from the end
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // If no such element is found, reverse the entire array
        if (ind == -1) {
            std::reverse(nums.begin(), nums.end());
            return; // No need to return anything
        }

        // Step 2: Find the element just larger than nums[ind] from the end
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                std::swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 3: Reverse the elements after ind
        std::reverse(nums.begin() + ind + 1, nums.end());
    }

        
    
};