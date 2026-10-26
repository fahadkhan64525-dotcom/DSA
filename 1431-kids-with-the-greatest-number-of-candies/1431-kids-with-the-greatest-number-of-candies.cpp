class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = 0;
        for(int c : candies){
            mx = max(mx,c);
        }

        vector<bool> result;
        for(int c : candies){
            result.push_back(c+ extraCandies >= mx);
        }
        return result;
    }
};