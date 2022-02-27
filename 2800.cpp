#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;

bool visit[201];
bool check[201];
set<string> res;
string s;
vector<pair<int,int>> p;

void dfs(int cnt, int idx) {
    if(cnt >= 1) {
        string tmp = "";
        for(int i=0;i<s.size();i++) {
            if(check[i])
                continue;
            tmp += s[i];
        }
        res.insert(tmp);
    }
    for(int i=idx;i<p.size();i++) {
        if(visit[i])
            continue;
        visit[i] = true;
        check[p[i].first] = true;
        check[p[i].second] = true;
        dfs(cnt+1, idx + 1);
        visit[i] = false;
        check[p[i].first] = false;
        check[p[i].second] = false;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>> s;
    stack<int> st;
    for(int i=0;i< s.size();i++) {
        if(s[i] == '(')
            st.push(i);
        else if(s[i] == ')') {
            p.push_back({st.top(), i});
            st.pop();
        }
    }
    dfs(0, 0);

    for(auto p: res)
        cout<<p<<'\n';
}
