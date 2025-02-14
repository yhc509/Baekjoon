#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    string input;
    int k;
    cin >> input;
    
    cin >> k;
    
    char cstr[255];
    strcpy(cstr, input.c_str());

    int size = strlen(cstr);
    int d = 0;
    int sum = 0;
    for(int i = size - 1; i >= 0; i--) {
        int x = 0;
        if(cstr[i] >= 'A') {
            x = cstr[i] - 'A' + 10;
            x = 10 * (x / k) + (x % k);
        }
        else {
            x = cstr[i] - '0';
        }
        x = x * pow(k, d);
        d++;
        sum += x;
    }
    cout << sum << endl;
    return 0;
}