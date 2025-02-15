#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int a, b, c;
    bool isStop = false;
    while(isStop == false) {
        cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0) {
            break;
        }

        int as = a*a;
        int bs = b*b;
        int cs = c*c;
        if((as + bs == cs) || (as + cs == bs) || (cs + bs == as))
            cout << "right\n";
        else
            cout << "wrong\n";
    }
    return 0;
}