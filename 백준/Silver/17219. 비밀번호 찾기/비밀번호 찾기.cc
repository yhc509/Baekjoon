#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N, M;
    cin >> N >> M;

    map<string, string> m;

    for(int i = 0; i < N; i++) {
        string url;
        string pw;
        cin >> url >> pw;

        m[url] = pw;
    }

    for(int i = 0; i < M; i++) {
        string url;
        cin >> url;

        cout << m[url] << "\n";
    }

    return 0;
}
