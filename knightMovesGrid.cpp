#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> dist(n, vector<int>(n, INT_MAX));

    priority_queue<
        pair<int, pair<int,int>>,
        vector<pair<int, pair<int,int>>>,
        greater<pair<int, pair<int,int>>>
    > pq;


    vector<pair<int,int>> horse = {
        { 2, 1}, { 2,-1},
        {-2, 1}, {-2,-1},
        { 1, 2}, { 1,-2},
        {-1, 2}, {-1,-2}
    };

    dist[0][0] = 0;
    pq.push({0, {0, 0}});

    while (!pq.empty()) {
        int distance = pq.top().first;
        int row = pq.top().second.first;
        int col = pq.top().second.second;
        pq.pop();

        if (distance > dist[row][col]) continue;

        for (auto it : horse) {
            int x = row + it.first;
            int y = col + it.second;

            if (x >= 0 && x < n && y >= 0 && y < n &&
                dist[x][y] > distance + 1) {

                dist[x][y] = distance + 1;
                pq.push({distance + 1, {x, y}});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INT_MAX)
                cout << -1 << " ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
