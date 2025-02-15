#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int count;

    cin >> count;

    int b=0;
    char cstr[50];
    for(int i = 0; i < count; i++)
    {   
        b = 0;
        string input;
        cin >> input;

        strcpy(cstr, input.c_str());
        int len = strlen(cstr);
        for(int j = 0; j < len; j++) {
            if(cstr[j] == '(') b++;
            else if(cstr[j] == ')') b--; 

            if(b < 0) break;
        }
        if(b == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}