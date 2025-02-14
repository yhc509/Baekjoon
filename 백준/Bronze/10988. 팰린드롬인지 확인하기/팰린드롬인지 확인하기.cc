#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string input;
    cin >> input;
    
    int l = strlen(input.c_str());
    char t[100];
    strcpy(t, input.c_str());
    bool result = true;
    for(int i =0; i <= l/2; i++) {
        if(i == (l-1)-i) break;
        if(t[i] != t[(l-1)-i]) {
            result = false;
            break;
        }
    }
    cout << (result ? 1 : 0) << endl;
    return 0;
}