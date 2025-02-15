#include <iostream>

using namespace std;

bool isPrime(int x) {
    if(x < 2) return false;
    for(int i = 2; i*i <= x; i++) {
        if(x % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int c;
    cin >> c;
    
    int s = 0;
    for(int i = 0; i < c; i++) {
        int x;
        cin >> x;

        if(isPrime(x)) s++;
    }
    cout << s;
    return 0;
}