class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        int temp, last, flag;
        for(int i=left; i<=right; i++)
        {
            flag=0;
            if(i<10)
            {
                res.push_back(i);
            }
            else
            {
                temp=i;
                while(temp>0)
                {
                    last=temp%10;
                    if(last==0)
                    {
                        flag=1;
                        break;
                    }
                    if(i%last!=0)
                    {
                        flag=1;
                        break;
                    }
                    temp/=10;
                }
                if(flag==0)
                {
                    res.push_back(i);
                }
            }            
        }
        return res;
    }
};