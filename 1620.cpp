#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int n,t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>t;

    unordered_map<string,int> name;
    unordered_map<int,string> num;

    for(int i=1;i<=n;i++) {
        string tmp;
        cin>>tmp;

        name[tmp] = i;
        num[i] = tmp;
    }

    for(int i=0;i<t;i++) {
        string tmp;
        cin>>tmp;
        try {
            int x = stoi(tmp);
            cout<<num[x]<<'\n';
        } catch (exception &ex) {
            cout<<name[tmp]<<'\n';
        }
    }
}1620
