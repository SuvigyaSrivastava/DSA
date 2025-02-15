class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // Hash map to store the index of visited elements

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Find the required complement

            // Check if the complement exists in the map
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i}; // Return indices if found
            }

            // Store the current number's index in the map
            mp[nums[i]] = i;
        }

        return {}; // Return empty if no solution (shouldn't happen as per problem constraint)
    }
};
