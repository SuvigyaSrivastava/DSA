class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int, int> mp1;

        // Populate map with nums1
        for (const auto& pair : nums1) {
            mp1[pair[0]] = pair[1];
        }

        // Merge nums2 into map
        for (const auto& pair : nums2) {
            mp1[pair[0]] += pair[1];
        }

        // Create the result vector
        vector<vector<int>> ans;
        for (const auto& [key, value] : mp1) {
            ans.push_back({key, value});
        }

        // Sort the result by key
        sort(ans.begin(), ans.end());

        return ans;
    }
};
