#include <iostream>
#include<stack>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
   
    vector<pair<int,int>>interval= {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    sort(interval.begin(),interval.end());
    vector<pair<int,int>>merge;
    merge.push_back(interval[0]);
    for (int i = 1; i < interval.size(); i++) {
        // If the current interval overlaps with the last merged interval
        if (interval[i].first <= merge.back().second) {
            // Extend the end of the last interval in merged
            merge.back().second = max(merge.back().second, interval[i].second);
        } else {
            // No overlap, add the current interval to merged
            merge.push_back(interval[i]);
        }
    }
    for (const auto& interval : merge) {
        cout << "{" << interval.first << ", " << interval.second << "} ";
    }
}