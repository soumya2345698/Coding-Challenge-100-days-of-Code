class Solution {
public:
    string baseNeg2(int n) {

        string ans = "";

        while(n) {
            ans = to_string(n & 1) + ans;
            cout << (n & 1) << " " << -(n >> 1) << endl;
            n = -(n >> 1);
        }

        return ans == "" ? "0" : ans;
        
    }
};