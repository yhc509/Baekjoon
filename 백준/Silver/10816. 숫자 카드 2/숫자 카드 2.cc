#include <iostream>
#include <map>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N;
    cin >> N;

    int card[N];

    map<int, int> m;
    for(int i = 0; i < N; i++) {
        cin >> card[i];

        m[card[i]]++;
    }

    int M;
    cin >> M;

    int search;
    for(int i = 0; i < M; i++) {
        cin >> search;
        cout << m[search] << " ";
    }
    cout << "\n";

    return 0;
}
