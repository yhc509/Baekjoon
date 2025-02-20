#include <iostream>
#include <vector>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N, K;
    cin >> N >> K;

    vector<int> v;
    for(int i = 0; i < N; i++) {
        v.push_back((i+1));
    }

    int idx = -1;
    cout << "<";
    while(v.empty() == false) {
        idx = (idx + K) % v.size();

        cout << v[idx];
        v.erase(v.begin() + idx);
        idx--;
        if(v.empty() == false) cout << ", ";
    }
    cout << ">";

    return 0;
}
