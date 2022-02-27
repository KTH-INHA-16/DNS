#include <iostream>
#include <vector>
using namespace std;

int arr[500002];
int idx[500002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, top = 0, val;
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>val;
        while(top>0) {
            if(arr[top] >= val) {
                cout<<idx[top]<<' ';
                break;
            }
            top--;
        }
        if(top <= 0) {
            cout << 0 <<' ';
        }
        top++;
        idx[top] = i+1;
        arr[top] = val;
    }

}
