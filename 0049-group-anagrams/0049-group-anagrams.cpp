class Solution {
public:
    vector<int> getCharacterFrequency(const string &str) {
        vector<int> freq(26, 0);  // Initialize an array of size 26 to store frequencies of 'a' to 'z'
        
        // Count frequency of each character
        for (char ch : str) {
            freq[ch - 'a']++;
        }
        
        return freq;
    } 
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
  
        unordered_map<string, vector<string>> groupedStrings;
        for (const string &str : strs) {
            
            vector<int> freq = getCharacterFrequency(str);

        
            string freqKey = "";
            for (int count : freq) {
                freqKey += to_string(count) + "#";  
            }

            
            groupedStrings[freqKey].push_back(str);
        }
        vector<vector<string>> result;
        for (const auto &entry : groupedStrings){
            result.push_back(entry.second);
        }
        return result;
        
    }
};
