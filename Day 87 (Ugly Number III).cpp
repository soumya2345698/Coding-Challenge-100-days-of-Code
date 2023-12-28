class Solution {
public:
    int nthUglyNumber(int n, int A, int B, int C) {
 
        
        long long s = 1;
        long long e = 2 * 1e9;
        long long ans;
        
        long a = long(A);
        long b = long(B);
        long c = long(C);

        while(s <= e){
            long long mid = s + (e - s) / 2;
            long long count = 0;

            count += mid / a;
            count += mid / b;
            count += mid / c;
            count -= mid / lcm(a,b);
            count -= mid / lcm(b,c);
            count -= mid / lcm(c,a);
            count += mid / lcm(a,lcm(b,c));

            if(count >= n){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }

        return ans;
    }
};