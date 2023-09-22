#include <bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;

int main() {
    int n, m, temp1, temp2;

    cin >> n >> m;

    vector<vector<int>> adj(n + 1); // Lista de adjacência
    for (int i = 0; i < m; ++i) {
        cin >> temp1 >> temp2;
        adj[temp1].push_back(temp2);
        adj[temp2].push_back(temp1); // Se for um grafo não direcionado, adicione também no sentido oposto
    }

    // Vetor para marcar os vértices visitados
    vector<bool> visited(n + 1, false);

    // Função BFS
    function<void(int)> bfs = [&](int start) {
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            cout << u << " "; // Imprimir o vértice visitado

            for (int v : adj[u]) {
                if (!visited[v]) {
                    q.push(v);
                    visited[v] = true;
                }
            }
        }
    };

    cout << "Nós visitados durante a BFS:" << endl;
    
    // Iniciar a BFS a partir de todos os vértices não visitados
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            bfs(i);
        }
    }

    return 0;
}
