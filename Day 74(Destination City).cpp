class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>ans;
        for(int i=0;i<paths.size();i++){
            ans[paths[i][0]]++;
            if(ans.count(paths[i][1])==0) ans[paths[i][1]]=0;
        }
        string out="";
        for(auto it=ans.begin();it!=ans.end();it++){
            if((*it).second==0) {
                out=((*it).first);
                break;
            }
        }
        return out;
    }
};