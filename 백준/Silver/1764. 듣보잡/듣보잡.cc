#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int N, M;
    cin >> N >> M;

    map<string, int> m;
    map<string, int> m2;
    for(int i = 0; i < N+M; i++) {
        string name;
        cin >> name;
        if(m.find(name) == m.end()) {
            m.insert(make_pair(name, 1));
        }
        else {
            m[name]++;
        }
        if(m[name] > 1) {
            if(m2.find(name) == m2.end()) {
                m2.insert(make_pair(name, 1));
            }
            else {
                m2[name]++;
            }
        }
    }

    cout << m2.size() << "\n";
    for(auto elem : m2) {
        cout << elem.first << "\n";
    }
    
    return 0;
}