class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int z=0; 
       int prod = 1;
       for(int i= 0; i<nums.size(); i++)
       {
            if(nums[i]==0)
            {
                z++;
                continue;
            }
            prod *= nums[i];
       }
       vector<int>v;
       for(int i=0 ; i<nums.size(); i++)
       {
            if(z==1)
            {
                v.push_back(nums[i]==0? prod : 0);
            }
            else if(z>1)
            {
                v.push_back(0);
            }
            else v.push_back(prod/nums[i]);
       }
       return v;
    }
};
