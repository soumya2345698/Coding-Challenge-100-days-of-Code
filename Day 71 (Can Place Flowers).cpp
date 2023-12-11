class Solution {
public:
    bool canPlaceFlowers(vector<int>& s, int n) {
        int a=s.size(),c=0;
        if(a==1 )
        {
            if(s[0]==0 && n<2) {
                return 1;
            }
            else if(s[0]==1 && n<2) {
                return n==0;
            }
            else {
                false;
            }
        }
        if(s[0]==0 && s[1]==0)
        {
            s[0]=1;
            c++;
        }
        for(int i=1;i<a-1;i++)
        {
            if(s[i]==0 && s[i+1]==0 && s[i-1]==0) {
                s[i]=1;
                c++;
            }
        }
        if(s[a-1]==0 && s[a-2]==0)
        {
            s[a-1]=1;
            c++;
        }
        return c>=n;
    }
};