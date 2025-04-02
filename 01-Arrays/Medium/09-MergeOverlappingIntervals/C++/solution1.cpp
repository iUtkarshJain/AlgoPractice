#include <vector>
using namespace std;
// O(n log n) time | O(n) space
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> intervals) {
    sort(intervals.begin(), intervals.end(), [](const vector<int> &a, vector<int> &b){
        return a[0] < b[0];
    });
    vector<vector<int>> mergedIntervals{{intervals[0]}};

    for(vector<int> &interval : intervals)
        if(mergedIntervals.back()[1] >= interval[0])
            mergedIntervals.back()[1] = max(mergedIntervals.back()[1], interval[1]);
        else 
            mergedIntervals.push_back(interval);
        
    return mergedIntervals;
}
