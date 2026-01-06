class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>f;
        for(int x: nums){
            f[x]++;
        }
        for(auto i : f)
        {
            if(i.second>1)
            {
                return true;
            }
            
        }
        return false;
    }
};