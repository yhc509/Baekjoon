#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>

using namespace std;


bool isNumeric(const string& str) {
    return all_of(str.begin(), str.end(), ::isdigit);
}

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N, M;
    cin >> N >> M;

    map<int, string> m1;
    map<string, int> m2;
    for(int i = 1; i <= N; i++) {
        string a;
        cin >> a;
        m1.insert(make_pair(i, a));
        m2.insert(make_pair(a, i));
    }

    for(int i = 0; i < M; i++) {
        string a;
        cin >> a;
        if(isNumeric(a)) {
            int k = stoi(a);
            cout << m1[k] << "\n";
        }
        else {
            cout << m2[a] << "\n";
        }
    }

    return 0;
}
