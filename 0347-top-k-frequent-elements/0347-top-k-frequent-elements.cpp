class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>f;
        for(int i: nums){
            f[i]++;
        }
        
        vector<pair<int, int>> v;
        for (const auto& pair : f) {
            v.push_back(pair); 
        }

        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; 
        });
        vector<int>a;
        for(int i=0; i<k; i++)
        {
            a.push_back(v[i].first);
        }
        return a;
    }
};
