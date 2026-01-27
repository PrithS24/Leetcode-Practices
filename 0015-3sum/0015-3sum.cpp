class Solution {
public:
    
    bool binary_search(const vector<int>& arr, int target, int start, int end) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                return true;
            }
            if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
      
        sort(nums.begin(), nums.end());

        
        for (int i = 0; i < n - 2; i++) {
           
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            
            for (int j = i + 1; j < n - 1; j++) {
               
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                
                
                int target = -(nums[i] + nums[j]);
                
                
                if (binary_search(nums, target, j + 1, n - 1)) {
                    result.push_back({nums[i], nums[j], target});
                }
            }
        }
        
        
        return result;
    }
};