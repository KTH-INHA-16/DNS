#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int c;
    cin>>c;

    while(c--) {
        int n, m, res = 0;
        cin >> n >> m;

        queue <pair<int,int>> q;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            q.push({i, x});
            pq.push(x);
        }
        while(!q.empty()) {
            int nidx = q.front().first;
            int nval = q.front().second;
            q.pop();
            if(pq.top() == nval) {
                pq.pop();
                res++;
                if(nidx == m) {
                    cout<<res<<'\n';
                    break;
                }
            } else
                q.push({nidx, nval});
        }
    }
}
