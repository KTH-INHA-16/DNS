#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v[i] = {i+1, x};
    }

    int idx = 0, val = n;
    for(int i=0;i<val;i++) {
        cout<<v[idx].first<<" ";

        int move = v[idx].second;
        if(move > 0)
            move--;
        v.erase(v.begin()+idx);
        idx += move;
        if(--n==0)
            break;

        idx = (idx >= 0 ? idx : n + idx % n);
        idx %= n;
    }
    cout<<"\n";
}
