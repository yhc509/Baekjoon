#include <iostream>
#include <set>
#include <cstring>

using namespace std;


int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N, M;
    cin >> N >> M;

    set<string> s;
    for(int i = 0; i < N; i++) {
        string a;
        cin >> a;
        s.insert(a);
    }

    int r = 0;
    for(int i = 0; i < M; i++) {
        string a;
        cin >> a;
        if(s.find(a) != s.end()) r++;
    }

    cout << r << "\n";

    return 0;
}
