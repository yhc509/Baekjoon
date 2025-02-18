#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);


    int a[10000]{0};

    int N;
    cin >> N;

    int M;
    for(int i =0; i<N; i++) {
        cin >> M;
        a[M-1]++;
    }

    for(int i = 0; i < 10000; i++) {
        for(int j = 0; j < a[i]; j++) {
            cout << (i+1) << "\n";
        }
    }
    return 0;
}