#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int L;
    cin >> L;

    char input[L];
    cin >> input;
    int H = 0;
    int p = 1;
    for(int i = 0; i < L; i++) {
        H += ((input[i]-'a' + 1) * p) % 1234567891;
        p *= 31;
    }

    cout << H;

    return 0;
}