#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 100000

int n;
double ans;

bool cmp(double &a, double &b) {
    return a>b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    vector<double> v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];

    sort(v.begin(),v.end(), cmp);
    ans = v.front();

    for(int i=1;i<n;i++) {
        ans += v[i]/ 2;
    }

    cout<<ans<<'\n';
    return 0;
}
