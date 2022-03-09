#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 100000
int n;
long long ans;

bool cmp(const int &a, const int &b) {
    return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    sort(v.begin(), v.end(), cmp);

    for(int i=0;i<n;i++) {
        if(v[i] - i >= 0)
            ans += v[i] - i;
    }

    cout<<ans<<'\n';

    return 0;
}
