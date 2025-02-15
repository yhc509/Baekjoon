#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int m;
    cin >> m;

    set<int> s;

    for(int i = 0; i < m; i++) {
        string command;
        int v;
        cin >> command;

        if(command == "add") {
            cin >> v;
            s.insert(v);
        }
        else if(command == "remove") {
            cin >> v;
            s.erase(v);
        }
        else if(command == "check") {
            cin >> v;
            if(s.find(v) != s.end()) cout << "1\n";
            else cout << "0\n";
        }
        else if(command == "toggle") {
            cin >> v;
            if(s.find(v) != s.end()) s.erase(v);
            else s.insert(v);
        }
        else if(command == "all") {
            for(int j = 1; j <= 20; j++)
            s.insert(j);
        }
        else if(command == "empty") {
            s.clear();
        }
    }
    return 0;
}