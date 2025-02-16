#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int L;
    cin >> L;

    char input;
    unsigned long long H = 0;
    unsigned long long p = 1;
    for(int i = 0 ; i < L; i++) {
        cin >> input;
        H += ((input-96) * p) % 1234567891;
        p *= 31;
        p = p % 1234567891;
    }
    H = H % 1234567891;

    cout << H;

    return 0;
}