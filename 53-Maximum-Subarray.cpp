class Solution {
public:
    long long maxSubArray(vector<int>& arr) {
        long long maxi = LONG_MIN; // maximum sum
        long long sum = 0;
        long long n=arr.size();

        for (int i = 0; i < n; i++) {

            sum += arr[i];

            if (sum > maxi) {
                maxi = sum;
            }

            // If sum < 0: discard the sum calculated
            if (sum < 0) {
                sum = 0;
            }
        }

        // To consider the sum of the empty subarray
        // uncomment the following check:

        //if (maxi < 0) maxi = 0;

        return maxi;
        
    }
};