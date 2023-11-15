class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int candy = 1;
        int index = 0;

        while (candies > 0) {
            ans[index] += min(candy, candies);
            candies -= candy;
            candy++;
            index = (index + 1) % num_people;
        }

        return ans;
    }
};