class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<32; i++){     //0(32*N)
            int t=0;
            for(int j=0; j<nums.size(); j++){
                t+=(nums[j]&1);
                nums[j]>>=1;
            }
            ans+=((t%3)<<i);
        }
        return ans;
    }
};