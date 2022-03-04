#include<iostream>
#include <vector>
#include <set>
using namespace std;

int a, b, idx = 1;
vector<pair<int,int>> edge;
set<int> s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (1) {
        cin>>a>>b;
        if(a == -1 && b == -1) break;
        if(a == 0 && b == 0) {
            if (edge.size() + 1 == s.size() || edge.size() == 0) {
                cout << "Case " << idx << " is a tree.\n";
            } else {
                cout << "Case " << idx << " is not a tree.\n";
            }
            idx++;
            edge.clear();
            s.clear();
        } else {
            s.insert(a);
            s.insert(b);
            edge.push_back({a,b});
        }
    }
}
