class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int i, j, n, m, ans=0;
        if(nums.size()<=1)
        {
            return ans;
        }
        else
        {
            sort(nums.begin(), nums.end());

            n = nums[0]+k;
            m = nums[nums.size()-1] - k;
            if(n<=m)
            {
                ans = m - n;
            }
            else
            {
                ans = 0;
            }
        }
        return ans;
    }
};
