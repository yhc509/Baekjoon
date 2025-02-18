#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int N, K;
    cin >> N >> K;

    int P[N];

    for(int i = 0; i < N; i++) {
        cin >> P[i];
    }

    int count = 0;
    int i = N - 1;
    while(K > 0) {
        int c = K / P[i];
        if(c > 0) {
            K = K % P[i];
            count += c;
        }
        i--;
        if(i < 0) break;
    }

    cout << count;

    return 0;
}