#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int x;
    while(true) {
        cin >> x;
        if(x == 0) break;

        string t = to_string(x);
        int l = t.length();
        bool result = true;
        for(int i =0; i <= l/2; i++) {
            if(i == (l-1)-i) break;
            if(t[i] != t[(l-1)-i]) {
                result = false;
                break;
            }
        }
        if(result) cout << "yes\n";
        else cout << "no\n";
    }
    
    return 0;
}