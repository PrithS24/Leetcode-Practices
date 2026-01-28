class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z=0;
      
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                nums[z++]=nums[i];
            }
            
            
        }
        while(z<nums.size())
        {
            nums[z++]=0;
        }
        
    }
};