#include <iostream>
#include <deque>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    deque<int> q;
    cin>>n;
    while(n--) {
        string tmp;
        cin >> tmp;

        if(tmp == "push") {
            int x;
            cin >> x;
            q.push_back(x);
        } else if(tmp == "pop") {
            if (q.empty()) {
                cout<<"-1\n";
            } else {
                cout<<q.front()<<'\n';
                q.pop_front();
            }
        } else if(tmp == "size") {
            cout<<q.size()<<'\n';
        } else if(tmp == "empty") {
            cout<<q.empty()<<'\n';
        } else if(tmp == "front") {
            if(q.empty())
                cout<<"-1\n";
            else
                cout<<q.front()<<'\n';
        } else {
            if(q.empty())
                cout<<"-1\n";
            else
                cout<<q.back()<<'\n';
        }
    }
}
