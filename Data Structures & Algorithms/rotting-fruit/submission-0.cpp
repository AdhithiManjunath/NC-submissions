class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        int fresh = 0;

        // Initialize the queue with all rotten oranges and count fresh oranges
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        // If there are no fresh oranges, return 0
        if (fresh == 0) return 0;

        int time = 0;
        vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        // Perform BFS
        while (!q.empty()) {
            int size = q.size();
            bool rotted = false;

            for (int i = 0; i < size; i++) {
                auto [r, c] = q.front();
                q.pop();

                for (auto dir : directions) {
                    int rn = r + dir[0];
                    int cn = c + dir[1];

                    // Check bounds and if the orange is fresh
                    if (rn >= 0 && rn < m && cn >= 0 && cn < n && grid[rn][cn] == 1) {
                        grid[rn][cn] = 2; // Rot the orange
                        q.push({rn, cn});
                        fresh--; // Decrease fresh orange count
                        rotted = true;
                    }
                }
            }

            // Increment time only if any orange rotted in this level
            if (rotted) time++;
        }

        // If there are still fresh oranges left, return -1
        return fresh == 0 ? time : -1;
    }
};
