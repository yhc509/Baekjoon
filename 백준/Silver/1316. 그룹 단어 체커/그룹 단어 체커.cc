#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main() {
    int count;

    cin >> count;

    string input;
    int g = 0;

    set<char> s;
    char c[100];

    for(int i = 0; i < count; i++)
    {
        s.clear();
        cin >> input;

        strcpy(c, input.c_str());
        int len = strlen(c);
        bool isGroup = true;
        for(int j = 1; j < len; j++) {
            if(c[j] != c[j-1]) {
                if(s.find(c[j]) != s.end()) {
                    isGroup = false;
                    break;
                }
                else {
                    s.insert(c[j-1]);
                }
            }
        }
        if(isGroup) {
            g++;
        }
    }
    cout << g << endl;
    return 0;
}