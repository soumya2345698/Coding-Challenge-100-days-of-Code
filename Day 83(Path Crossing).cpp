class Solution {
public:
    bool isPathCrossing(string path) {
        int n = path.length();
        set<pair<int,int>> st;
        int x = 0, y = 0;
        st.insert({x,y});
        for(int i=0; i<n; i++){
            if(path[i] == 'N')
                y--;
            else if(path[i] == 'S')
                y++;
            else if(path[i] == 'W')
                x--;
            else
                x++;
            
            if(st.find({x,y}) != st.end())
                return true;
            st.insert({x,y});
        }
        return false;
    }
};