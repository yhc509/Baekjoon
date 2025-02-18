#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct compare {
    bool operator() (int a, int b) {
        return a > b;
    }
};

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);


    vector<int> v;
    int input;

    for(int i = 0; i < 9; i++) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    
    do {
        int sum = 0;
        for(int i = 0; i < 7; i++) {
            sum += v[i];
        }
        if(sum == 100) {
            for(int i = 0; i < 7; i++) { 
                cout << v[i] << "\n";
            }
            break;
        }
    } while(next_permutation(v.begin(), v.end()));

    return 0;
}