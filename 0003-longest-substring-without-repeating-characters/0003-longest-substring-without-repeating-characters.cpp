class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        int res =0;
        for(int i=0; i<s.size(); i++){
             unordered_set<char>str;
             for(int j=i; j<s.size(); j++)
             {
                if(str.find(s[j])!=str.end()){
                    break;
                }
                str.insert(s[j]);
             }

             res = max(res, (int)str.size());
        }
        return res;
    }
};
