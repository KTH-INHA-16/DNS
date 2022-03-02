#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

int k;
vector<int> bag;
vector<int> answer[11];

void search(int s, int e, int depth){

    if(s == e) {
        answer[depth].push_back(bag[s]);
        return;
    }

    // 완전 이진 트리이고 중위 순회이므로, 가운데 있는 값은 root가 된다.
    int mid = (e+s)/2;
    answer[depth].push_back(bag[mid]);

    // root를 제외하고 좌우로 나누어서 탐색을 진행한다.
    search(s, mid-1, depth+1);
    search(mid+1, e, depth+1);
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> k;

    for(int i=0; i<pow(2,k)-1; i++){
        int num;
        cin >> num;
        bag.push_back(num);
    }

    search(0, bag.size()-1, 0);

    for(int i=0; i<k; i++){
        for(int j=0; j<answer[i].size(); j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
}
