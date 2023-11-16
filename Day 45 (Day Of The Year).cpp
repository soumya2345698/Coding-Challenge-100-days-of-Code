class Solution {
public:
    bool isleap(int year){
        if (year % 400 == 0){
            return true;
        }    
        else if (year % 100 == 0){
            return false;
        }
        else if (year % 4 == 0){
            return true;
        }
        else{
            return false;
        }
        return true;
    }
    int dayOfYear(string date) {
        
        vector<int> v{ 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
        int i;
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));
        int ans = v[m-1] + d;
        if(m <= 2)
        {
            return ans; 
        }
        else
        {
            if(isleap(y))
            {
                return ans+1;
            }
            else
            {
                return ans;
            }
        }
        return 0;

    }
};