#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int A, B;
    cin >> A >> B;

    int m;
    cin >> m;

    int d = 1;
    for(int i = 1; i < m; i++) {
        d *= A;
    }

    int conv_10 = 0;
    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        conv_10 += a * d;
        d /= A;
    }

    // cout << conv_10 << "\n";

    int conv_B = 0;
    vector<int> v;
    while(conv_10 > 0) {
        int a = conv_10 % B;
        v.push_back(a);
        conv_10 -= a;
        conv_10 /= B;
    }

    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }


    return 0;
}
