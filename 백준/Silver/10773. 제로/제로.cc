#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int k;
    cin >> k;

    stack<int> st;

    for(int i = 0; i < k; i++) {
        int v;
        cin >> v;

        if(v == 0) {
            st.pop();
        }
        else {
            st.push(v);
        }
    }

    int sum = 0;
    while(st.empty() == false) {
        sum += st.top();
        st.pop();
    }

    cout << sum;
    return 0;
}