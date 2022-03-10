#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 100000

int n, ans;

bool cmp(int &a, int &b) {
    return a>b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];

    sort(v.begin(),v.end(), cmp);

    for(int i=0;i<n;i++) {
        if(i % 3 == 2)
            continue;
        ans += v[i];
    }

    cout<<ans<<'\n';

    return 0;
}
