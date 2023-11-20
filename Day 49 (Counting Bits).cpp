class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);

        for(int i=0;i<=n;i++){
            int cnt=0;
            int it =i;
            while(it>0){
                int dig = it & 1;
                if(dig==1){
                    cnt++;
                }
                it =it>>1;
            }

            ans[i]=cnt;
        }
        return ans;
    }
};