class Solution {
public:
    int xorOperation(int n, int start) {
        int a[n];
         for(int i=0;i<n;i++){
            a[i]=start+2*i;
        }
        int ans=start;
        for(int i=1;i<n;i++){
            ans=ans^a[i];
        }
        return ans;

    }
};