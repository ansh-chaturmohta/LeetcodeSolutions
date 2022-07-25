class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> temp;
        if (intervals.size() == 1)
            return intervals;
        sort(intervals.begin(), intervals.end());
        temp.push_back({intervals[0].front(), intervals[0].back()});

        for (int i = 1; i < intervals.size(); i++)
        {
            int size = temp.size() - 1;
            if (temp[size].back() >= intervals[i].front())
            {
                temp[size].back() = max(intervals[i].back(), temp[size].back());
            }
            else
            {
                temp.push_back({intervals[i].front(), intervals[i].back()});
            }
        }
        return temp;
    }
};