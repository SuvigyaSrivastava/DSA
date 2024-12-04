class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    unordered_map<int, int>mp;
    vector<int> result;
    for(int i =0; i<nums.size(); i++){
        mp[nums[i]]++;
    }  
      for (auto it = mp.begin(); it != mp.end(); ++it) {
    if (it->second > 1) { // Check if the frequency is greater than 1
        result.push_back(it->first); // Add the duplicate element to the result
    }
}
        return result;
    }
};