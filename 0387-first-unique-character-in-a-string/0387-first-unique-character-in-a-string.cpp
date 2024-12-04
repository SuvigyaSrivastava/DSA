#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        
        // Step 1: Count frequency of each character
        for (char c : s) {
            mp[c]++;
        }
        
        // Step 2: Find the first unique character
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 1) {
                return i; // Return index of the first unique character
            }
        }
        
        // Step 3: No unique character found
        return -1;
    }
};
