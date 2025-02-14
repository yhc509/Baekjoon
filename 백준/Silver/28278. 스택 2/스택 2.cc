#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int count;

    cin >> count;

    stack<int> st;

    for(int i = 0; i < count; i++) {
        int command, command2;
        cin >> command;

        switch(command){
            case 1:
            cin >> command2;
            st.push(command2);
            break;
            case 2:
            if(st.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << st.top() << "\n";
                st.pop();
            }
            break;
            case 3:
            cout << st.size() << "\n";
            break;
            case 4:
            if(st.empty()) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
            break;
            case 5:
            if(st.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << st.top() << "\n";
            }
            break;
        }
    }

    return 0;
}