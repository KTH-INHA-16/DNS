#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n,k,cnt=1;
    queue<int> q;
    
    cin>>n>>k;
    
    for(int i=1;i<=n;i++) 
        q.push(i);
    
    cout << "<";
    
    while(1) {
        for(int i=1;i<k;i++) {
            q.push(q.front());
            q.pop();
        }
        
        cout<<q.front();
        q.pop();
        
        if(!q.empty()) 
            cout<<", ";
        else 
            break;
    }
    
    cout << ">";

    return 0;
}
