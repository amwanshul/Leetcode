#include <vector>
using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        for (const auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(n, false);
        vector<int> stack{source};
        visited[source] = true;

        while (!stack.empty()) {
            int node = stack.back();
            stack.pop_back();
            if (node == destination) return true;
            for (int next : graph[node]) {
                if (!visited[next]) {
                    visited[next] = true;
                    stack.push_back(next);
                }
            }
        }
        return false;
    }
};
