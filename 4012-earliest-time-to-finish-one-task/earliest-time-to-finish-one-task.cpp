class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = 200;

        for (auto &t : tasks) {
            ans = min(ans, t[0] + t[1]);
        }

        return ans;
    }
};