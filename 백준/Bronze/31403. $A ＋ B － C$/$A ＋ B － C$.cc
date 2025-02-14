#include <iostream>

using namespace std;

int main() {
    int a,b,c;

    cin >> a >> b >> c;

    cout << a + b - c << endl;

    int d = 10;
    int t = b;
    while(t >= 10) {
        t /= 10;
        d*=10;
    }
    cout << a * d + b - c << endl;
    return 0;
}