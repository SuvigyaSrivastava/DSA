#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int, int> mp;

        // Populate the map with the banned numbers
        for (int i = 0; i < banned.size(); i++) {
            mp[banned[i]]++;
        }

        int sum = 0, count = 0;

        // Iterate over the range [1, n]
        for (int i = 1; i <= n; i++) {
            // Skip the number if it's banned
            if (mp[i] > 0) continue;

            // Check if adding the current number exceeds maxSum
            if (sum + i > maxSum) break;

            // Add the current number to sum and increment count
            sum += i;
            count++;
        }

        return count; // Return the maximum count of integers
    }
};
