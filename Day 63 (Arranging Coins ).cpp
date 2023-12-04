class Solution {
public:
    int arrangeCoins(int n) {
        int cnt = 0 ;
        if(n == 1){
            return 1 ; 
        }
        for(int i =1 ; i<= n ; i++){
            n = n-i ;
            if(n >= 0){
                cnt++;
            }
        }
        return cnt ;
    }
};