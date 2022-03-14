#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    long long ans;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(), v.end());

    if(v.size() % 2 == 0) {
        for(int i=0;i<n/2;i++)
            ans = max(ans, v[i]+v[n-1-i]);
    } else {
        ans = v[n-1];
        for(int i=0;i<(n-1)/2;i++)
            ans = max(ans, v[i]+v[n-2-i]);
    }

    cout<<ans<<'\n';

    return 0;
}
