class Solution {
public:
    vector<int>dp;
    bool c(int i){
        if(i==1)return false;
        if(dp[i]!=-1)return dp[i];
        bool a=false;
        for(int j=1;j<i;j++){
            if(i%j==0){
                a |= !c(i-j);
            }
        }
      return dp[i]=a;
    }
    bool divisorGame(int n) {
        dp.resize(n+1,-1);
         return c(n);
    }
};