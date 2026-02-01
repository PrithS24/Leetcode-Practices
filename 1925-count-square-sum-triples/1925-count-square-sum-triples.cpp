class Solution {
public:
    int countTriples(int n) {
        int s=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                int k= int(sqrt(pow(i,2)+pow(j,2)+1));
                if(k<=n && pow(k,2)==(pow(i,2)+pow(j,2)))
                {
                    s++;
                }
            }
        }
        return s;
    }
};