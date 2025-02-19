#include <iostream>
#include <cstring>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    
    string input;
    int r = 0;
    for(int i = 0; i < 3; i++) {
        cin >> input;

        if(input == "Fizz") {
            if(r == 0) r = 3;
            else r++;
        }
        else if(input == "Buzz") {
            if(r == 0) r = 5;
            else r++;
        }
        else if(input == "FizzBuzz") {
            if(r == 0) r = 15;
            else r++;
        }
        else {
            r = stoi(input);
        }
    }
    r++;

    if(r % 3 == 0 && r % 5 == 0) {
        cout << "FizzBuzz\n";
    }
    else if(r % 3 == 0) {
        cout << "Fizz\n";
    }
    else if(r % 5 == 0) {
        cout << "Buzz\n";
    }
    else {
        cout << r << "\n";
    }

    return 0;
}
