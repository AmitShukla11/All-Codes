class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        size_t i = 0;
        vector<vector<int>> result;
       
        while (i < size(intervals) && newInterval[0] > intervals[i][1]) {
            result.emplace_back(intervals[i++]);
        }

        while (i < size(intervals) && newInterval[1] >= intervals[i][0]) {
            newInterval = {min(newInterval[0], intervals[i][0]),
                           max(newInterval[1], intervals[i][1])};
            ++i;
        }
        result.emplace_back(newInterval);

        copy(cbegin(intervals) + i, cend(intervals), back_inserter(result));
        return result;
    }
};