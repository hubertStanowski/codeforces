#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;

vector<int> bfs(int src, int n) {
  vector<int> dist(n + 1, -1);
  queue<int> q;
  dist[src] = 0;
  q.push(src);

  while (!q.empty()) {
    int curr = q.front();
    q.pop();
    for (int neigh : graph[curr]) {
      if (dist[neigh] == -1) {
        dist[neigh] = dist[curr] + 1;
        q.push(neigh);
      }
    }
  }

  return dist;
}

int main() {
  int n, m, d;
  cin >> n >> m >> d;

  vector<int> p(m);

  for (int &x : p)
    cin >> x;

  graph.assign(n + 1, {});
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  auto getFurthest = [&](const vector<int> &dist) {
    int furthest = p[0];
    for (int x : p)
      if (dist[x] > dist[furthest])
        furthest = x;
    return furthest;
  };

  // Random point
  vector<int> d0 = bfs(p[0], n);
  // We get the furthest from the random point
  int furthestA = getFurthest(d0);
  vector<int> dA = bfs(furthestA, n);
  // Then the furthest from the other furthest so we have the highest distance
  // between them possible (if an answer works for them it works for all other
  // pairs)
  int furthestB = getFurthest(dA);
  vector<int> dB = bfs(furthestB, n);

  int result = 0;
  for (int x = 1; x <= n; x++)
    if (dA[x] <= d && dB[x] <= d)
      result++;

  cout << result;
}
