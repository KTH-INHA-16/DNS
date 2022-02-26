#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    stack<double> num;
    string s;
    cin>>n>>s;

    vector<int> v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];

    for(auto p: s) {
        if('A'<= p && p <='Z')
            num.push(v[p-'A']);
        else {
            pair<double, double> tmp;
            tmp.first = num.top();
            num.pop();
            tmp.second = num.top();
            num.pop();
            if (p == '+')
                num.push(tmp.first + tmp.second);
            else if (p == '-')
                num.push(tmp.second - tmp.first);
            else if (p == '*')
                num.push(tmp.second * tmp.first);
            else
                num.push(tmp.second / tmp.first);
        }
    }

    printf("%.2f", num.top());

}
