#include <bits/stdc++.h>
using namespace std;

int intersectionSizeTwo(vector<pair<int,int>>& intervals) {
    // sort by end ascending; if equal end, sort start descending
    sort(intervals.begin(), intervals.end(), [](const pair<int,int>& A, const pair<int,int>& B){
        if (A.second == B.second) return A.first > B.first;
        return A.second < B.second;
    });

    int r1 = INT_MIN, r2 = INT_MIN; // r1 < r2 : the last two chosen points (largest)
    int count = 0;
    // Optional: store the actual chosen points if you want to inspect them
    // vector<int> chosen;

    for (auto &iv : intervals) {
        int a = iv.first;
        int b = iv.second;

        if (a > r2) {
            // No existing chosen points lie in [a,b] -> add two points: b-1 and b
            // (Greedy: choose points as far right as possible)
            // Note: for typical LeetCode inputs this is valid.
            r1 = b - 1;
            r2 = b;
            count += 2;
            // chosen.push_back(r1); chosen.push_back(r2);
        } else if (a > r1) {
            // Exactly one of the last two points is inside this interval -> add b
            r1 = r2;
            r2 = b;
            count += 1;
            // chosen.push_back(r2);
        } else {
            // Already have at least two chosen points inside [a,b], do nothing
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Example from the explanation:
    vector<pair<int,int>> intervals = {
        {1,3}, {2,6}, {3,7}, {10,12}
    };
    cout << "Minimum points required = " << intersectionSizeTwo(intervals) << "\n";
    return 0;
}
