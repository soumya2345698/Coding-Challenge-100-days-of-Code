class Solution {
public:
    int fact(int q)
	{
		long a=1;
		int i=1;
		while(i<=q)
		{
			a=(a*i)%m;
			i++;
		}
		return a%m;
	}
	int m=1000000007;
	int prime(int p)
	{
		int ans=0;
		for(int i=2;i<=p;i++)
		{
			int j=2;
			while(j<i)
			{
				if(i%j==0)break;
				j++;
			}
			if(j==i) ans++;
		}
		ans=ans%m;
		return ans;
	}
	int numPrimeArrangements(int n) 
	{
		int x=prime(n);
		long  y=fact(x);
		long  z=fact(n-x);
		long s=(y*z)%m;
		return s;
	}
};