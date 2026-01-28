class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z=0;
        vector<int>v;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                v.push_back(nums[i]);
            }
            else z++;
            
        }
        for(int i=0; i<z; i++)
        {
            v.push_back(0);
        }
        nums = v;
    }
};