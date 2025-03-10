#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n;
    cin >> n;

    set<string> s;
    for(int i = 0; i < n; i++) {
        string name, action;
        cin >> name >> action;

        if(action == "enter") {
            s.insert(name);
        }
        else if(action == "leave") {
            s.erase(name);
        }
    }


    vector<string> v(s.begin(), s.end());
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    
    for(int i = 0; i <v.size(); i++) {
        cout << v[i] << "\n";
    }

    return 0;
}
