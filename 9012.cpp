#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        string tmp;
        cin >> tmp;

        stack<int> st;
        bool flag = true;

        for(auto p: tmp) {
            if(p == '(')
                st.push(1);
            else {
                if(st.empty()) {
                    flag = false;
                    break;
                } else {
                    st.pop();
                }
            }
        }

        if (!st.empty())
            flag = false;

        if (flag)
            cout<< "YES\n";
        else
            cout<<"NO\n";
    }
}
