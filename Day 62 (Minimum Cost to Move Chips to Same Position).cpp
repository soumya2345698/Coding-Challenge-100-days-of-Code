class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd=0,even=0;
        int n = position.size();
        for(int i=0;i<n;i++){
            if(position[i]%2)
                even++;
            else
                odd++;
        }
        return min(even,odd);
    }
};