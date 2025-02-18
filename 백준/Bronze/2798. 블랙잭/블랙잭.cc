#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);


    vector<int> v;
    int N, M;

    cin >> N >> M;

    int input;
    for(int i = 0; i < N; i++) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    
    int result = 0;
    int subarr[N];
    fill(subarr, subarr+N, 1);
    for(int i=0; i<3; i++) {
        subarr[i] = 0;
    }
    
    do {
        int sum = 0;
        for(int i = 0; i < N; i++) {
            if(subarr[i] == 0) sum += v[i];
        }
        if(sum == M) {
            result = sum;
            break;
        }
        else if(sum < M) {
            if(sum > result) result = sum;
        }
    } while(next_permutation(subarr, subarr+N));

    cout << result;

    return 0;
}