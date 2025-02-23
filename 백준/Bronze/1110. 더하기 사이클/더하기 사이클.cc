#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int N;
    cin >> N;

    int origin = N;
    int i = 0;
    while(true) {
        if(i > 0 && origin == N) break;
        if(N < 10) {
            N = N * 11;
        }
        else {
            int s = 0;
            int t = N;
            while(t > 0) {
                int a = t % 10;
                t -= a;
                t /= 10;
                s += a;
            }
            N = ((N % 10) * 10) + (s % 10);
        }
        i++;
    }

    cout << i;

    return 0;
}