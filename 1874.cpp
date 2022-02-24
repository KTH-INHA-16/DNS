#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    vector<string> v;
    int num = 1, n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;

        while(num <= x) {
            s.push(num++);
            v.push_back("+");
        }

        if(s.top() == x) {
            s.pop();
            v.push_back("-");
        } else {
            cout<<"NO\n";
            return 0;
        }
    }

    for (auto p: v)
        cout<<p<<'\n';

}
