#include <iostream>
#include <string>
using namespace std;

string make(int a, int b, bool end) {
    string tmp = "";
    for(int i=0;i<a;i++)
        tmp += "AAAA";
    for(int i=0;i<b;i++)
        tmp += "BB";
    if (!end)
        tmp+=".";
    return tmp;
}

int main() {
    string s;
    cin>>s;

    int cnt = 0;
    string ans = "";

    for(auto p: s) {
        if(p == '.') {
            if((cnt % 4) % 2 != 0) {
                cout<<"-1\n";
                return 0;
            } else {
                ans += make(cnt / 4, (cnt % 4) / 2, false);
                cnt = 0;
            }
        } else {
            cnt += 1;
        }
    }

    if((cnt % 4) % 2 != 0) {
        cout<<"-1\n";
        return 0;
    } else {
        ans += make(cnt / 4, (cnt % 4) / 2, true);
        cnt = 0;
    }
    cout << ans<<'\n';
}
