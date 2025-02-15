#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int count;

    cin >> count;

    set<int> s;

    for(int i = 0; i < count; i++) {
        int input;
        cin >> input;
        s.insert(input);
    }

    cin >> count;
    
    for(int i = 0; i < count; i++) {
        int input;
        cin >> input;
        cout << (s.find(input) == s.end() ? 0 : 1) << "\n";
    }

    return 0;
}