#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long ans = 0;
    int tmp = 1;
    bool flag = false;
    stack<int> st;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++) {
        if(s[i] == '(') {
            tmp *= 2;
            st.push(1);
        } else if(s[i] == '[') {
            tmp *= 3;
            st.push(2);
        } else if(s[i] == ')' && (st.empty() || st.top() != 1)) {
            flag = true;
            break;
        } else if(s[i] == ']' && (st.empty() || st.top() != 2)) {
            flag = true;
            break;
        } else if(s[i] == ')') {
            if(s[i-1] == '(')
                ans += tmp;
            st.pop();
            tmp /= 2;
        } else if(s[i] == ']') {
            if(s[i-1] == '[')
                ans += tmp;
            st.pop();
            tmp /= 3;
        }
    }

    if (flag || !st.empty())
        cout<<0<<'\n';
    else
        cout<<ans<<'\n';
}
