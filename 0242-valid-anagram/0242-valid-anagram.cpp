class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s.length()!= t.length())
        {
            return false;
        }
        else
        {
            map<char, int> f1;
            map<char, int> f2;

            for(char i: s)
            {
                f1[i]++;
            }
            for(char i: t)
            {
                f2[i]++;
            }
            if(f1 == f2)
            {
                return true;
            }
            else return false;
        }

        
    }
};