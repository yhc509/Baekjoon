#include <iostream>
#include <set>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int A, B;
    cin >> A >> B;

    set<int> a;
    set<int> b;

    for(int i = 0; i < A; i++) {
        int input;
        cin >> input;
        a.insert(input);
    }

    for(int i = 0; i < B; i++) {
        int input;
        cin >> input;
        b.insert(input);
    }

    set<int> c;
    for(auto x : a) {
        if(b.find(x) == b.end()) {
            c.insert(x);
        }
    }
    for(auto x : b) {
        if(a.find(x) == a.end()) {
            c.insert(x);
        }
    }
    cout << c.size() << "\n";

    return 0;
}
