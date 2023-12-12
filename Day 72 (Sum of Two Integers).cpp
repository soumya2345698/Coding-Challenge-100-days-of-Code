class Solution {
public:
    int getSum(int a, int b) {
        int count=0;
        if(a==0 && b==0) return 0;
        if(a==0) return b;
        if(b==0) return a;
        
        int count1=0,count2=0;
        if(a>0 && b>0){
        while(a>0){
            a--;
            count++;
        }
        while(b>0){
            b--;
            count++;
        }
        }
        else if(a<0 && b>0){
            while(a<0){
                a++;
                count1++;
            }
            while(b>0){
                b--;
                count2++;
                
            }
            count=count2-count1;
        }
         else if(b<0 && a>0){
            while(b<0){
                b++;
                count1++;
            }
            while(a>0){
                a--;
                count2++;
            }
            count=count2-count1;
        }
        else{
             while(a<0){
                a++;
                count1++;
            }
             while(b<0){
                b++;
                count2++;
            }
            count=-(count1+count2);
        }

        return count;
        
    }
};