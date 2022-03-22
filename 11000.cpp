#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;

    sort(v.begin(), v.end());
    priority_queue< int, vector<int>, greater<int> > pq;

    pq.push(v.front().second);

    for(int i=1;i<n;i++) {
        pq.push(v[i].second);
        if(pq.top() <= v[i].first)
            pq.pop();
    }

    cout<<pq.size()<<'\n';

    return 0;
}
