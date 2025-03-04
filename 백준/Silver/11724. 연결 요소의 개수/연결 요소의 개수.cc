#include <iostream>
#include <vector>

using namespace std;

int** g;
int N, M;
int* c;

bool search(int t) {
    // cout << "search : " << t << "\n";
    if(c[t] == 1) return true;
    c[t] = 1;
    for(int i = 1; i <= N; i++) {
        if(g[t][i] == 1) {
            // cout << "(" << t << "," << i << ")\n";
            search(i);
        }
    }
    return false;
}

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    cin >> N >> M;

    g = new int*[N+1];
    for(int i = 0; i < N+1; i++) g[i] = new int[N+1] {0};

    for(int i = 1; i <= M; i++) {
        int u, v;
        cin >> u >> v;
    
        g[u][v] = 1;
        g[v][u] = 1;
    }

    int s = 0;
    c = new int[N+1] {0};

    for(int i = 1 ; i <= N; i++) {
        if(c[i] == 0) {
            // cout << i << " not checked\n";
            s++;
        }
        search(i);
    }

    cout << s << "\n";

    for(int i = 0; i < N+1; i++) delete[] g[i];
    delete[] g;
    delete[] c;

    return 0;
}