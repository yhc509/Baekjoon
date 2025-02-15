#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int count;

    cin >> count;

    map<string, int> m;

    for(int i = 0; i < count; i++) {
        string input;
        cin >> input;
        if(m.find(input) == m.end()) m[input] = 1;
        else m[input]++;
    }

    int maxValue = -1;
    string result;
    for (const auto &entry: m)
    {
        if (maxValue < entry.second)
        {
            maxValue = entry.second;
            result = entry.first;
        }
    }
 
    cout << result << "\n";

    return 0;
}