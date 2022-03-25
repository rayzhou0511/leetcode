class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> mindiff;
        int sum = 0;
        for(int i = 0;i < costs.size(); i++){
            sum += costs[i][0];
            mindiff.push_back(costs[i][1] - costs[i][0]);
        }
        sort(mindiff.begin(), mindiff.end());
        for(int i = 0; i < costs.size()/2; i++){
            sum += mindiff[i];
        }
        return sum;
    }
};
