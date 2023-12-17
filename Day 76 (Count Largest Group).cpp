class Solution {
public:
    int countLargestGroup(int n) {
        int a[37]={0};
        int s=0,d;
        for(int i=1;i<=n;i++){
            int num=i;
            while(num>0){
                d=(num%10);
                s+=d;
                num=num/10;
            }
            a[s]++;
            s=0;
        }
        int c=1;
        sort(a,a+37,greater<int>());
        for(int i=1;i<37;i++){
            if(a[i]==a[i-1]){ c++;}
            else{ break;}
        }
        return c;
    }
};