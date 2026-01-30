class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int mx=0, area=0;
        while(l<r){
           int h= min(heights[l], heights[r]);
           int w = r - l;
           area = h*w;
           mx = max(mx, area);

           if(heights[l] < heights[r]){
            l++;
           }else
           {
            r--;
           }


        }
        return mx;
    }
};
