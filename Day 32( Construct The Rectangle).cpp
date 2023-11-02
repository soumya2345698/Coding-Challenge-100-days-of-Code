class Solution {
public:
    vector<int> constructRectangle(int area) {
        int W = sqrt(area);
        while( W > 0 ){
            int div = area / W;
            if(div * W == area) return {max(div,W), min(div,W)}; 
            W--;
        }
        return {};
    }
};