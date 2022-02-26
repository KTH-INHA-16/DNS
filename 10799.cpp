#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;
    string s;
    stack<int> st;
    cin>>s;

    for(int i=0;i<s.size();i++) {
        if (s[i] == '(')
            st.push(i);
        else {
            if(st.top() + 1 == i) {
                st.pop();
                ans += st.size();
            }
            else {
                st.pop();
                ans += 1;
            }
        }
    }

    cout<<ans<<'\n';

}
