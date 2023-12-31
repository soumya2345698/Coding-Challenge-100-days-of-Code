class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) 
    {
        double ans=0.0;
        int i=0;
        while(i<points.size())
        {
          int j=i+1;
          while(j<points.size())
          {
            int k=j+1;
            while(k<points.size())
            {

               double a=points[i][0]*(points[j][1]-points[k][1]);

               double b=points[j][0]*(points[k][1]-points[i][1]);

               double c=points[k][0]*(points[i][1]-points[j][1]);
               double x=0.5;
               long double area=(x)*(abs(a+b+c));
               if(area>ans)
               ans=area;

               k++;
            }
            j++;
          }
          i++;
        }

        return ans;
    }
};