#include <iostream>
#include <set>

using namespace std;


int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N;
    cin >> N;

    set<int> s;
    for(int i = 0; i < N; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }

    int M;
    cin >> M;
    for(int i = 0; i < M; i++) {
        int a;
        cin >> a;
        if(s.find(a) == s.end()) cout << "0 ";
        else cout << "1 ";
    }

    return 0;
}
