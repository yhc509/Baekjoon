#include <iostream>
#include <map>

using namespace std;

struct st {
    int val;
    int call_0;
    int call_1;

    st() {
        val = 0;
        call_0 = 0;
        call_1 = 0;
    }
    
    st(int v, int c0, int c1) {
        val = v;
        call_0 = c0;
        call_1 = c1;
    }

    st& operator= (const st& a) {
        val = a.val;
        call_0 = a.call_0;
        call_1 = a.call_1;
        return *this;
    }

    st& operator+(const st &a) {
        val += a.val;
        call_0 += a.call_0;
        call_1 += a.call_1;
        return *this;
    }

};

std::map<int, st> m;

st fibonacci(int n) {
    if(m.find(n) != m.end()) return m[n];
    st ret = fibonacci(n-1) + fibonacci(n-2);
    m[n] = ret;
    return ret;
}


int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int t;
    cin >> t;

    m[0] = st(0,1,0);
    m[1] = st(1,0,1);

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        st r = fibonacci(n);
        cout << r.call_0 << " " << r.call_1 << "\n";
    }
    return 0;
}