class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char , int>mp;
    for(int i =0; i<s.size(); i++){
        mp[s[i]]++;
    } 
    vector<pair<int, char>> freq_vec;

    for(auto itr = mp.begin(); itr != mp.end(); itr++){
        freq_vec.push_back({itr->second, itr->first});
    }
    sort(freq_vec.rbegin(), freq_vec.rend());

        string sorted_str;
        for (auto& p : freq_vec) {
            sorted_str += string(p.first, p.second);
        }
        
        return sorted_str;
    }
};
