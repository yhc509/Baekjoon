#include <iostream>

using namespace std;

int main() {
    int a, b, v;

    cin >> a >> b >> v;

    int d = 0;
    if((v - b) % (a - b) == 0)
        d = (v-b) / (a-b);
    else
        d = (v-b) / (a-b) + 1;
 
    cout << d << endl;
    return 0;
}