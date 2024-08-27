class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int, double>>> graph(n);
        for (int i = 0; i < edges.size(); i++) {
            graph[edges[i][0]].push_back({edges[i][1], succProb[i]});
            graph[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }

        priority_queue<pair<double, int>> pq;
        pq.push({1.0, start_node});

        vector<double> visited(n, 0);
        visited[start_node] = 1.0;

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();

            if (curr.second == end_node) {
                return curr.first;
            }

            for (auto adj : graph[curr.second]) {
                double new_prob = curr.first * adj.second;
                if (visited[adj.first] < new_prob) {
                    visited[adj.first] = new_prob;
                    pq.push({new_prob, adj.first});
                }
            }
        }

        return 0.0;
    }
};
