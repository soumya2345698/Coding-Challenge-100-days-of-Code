class Solution {
public:
    int calculate(string s) {
        int sum=0, prev=0;
        char sign='+';
        for(int i=0 ; i<s.size() ; i++){
            if(isdigit(s[i])){
                int num=0;
                while(i<s.size() && isdigit(s[i])){
                    num = num*10 + (s[i]-'0');
                    i++;
                }
                i--;
                if(sign == '-') num = -1*num;
                if(sign == '*') sum = sum - prev + (prev*num);
                else if(sign == '/') sum = sum - prev +  (prev/num);
                else sum = sum + num;

                if(sign=='*') prev = prev*num;
                else if(sign=='/') prev = prev/num;
                else prev = num;
            }
           else if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/') sign=s[i];
        }
        return sum;
    }
};