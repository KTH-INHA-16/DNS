#include<iostream>
using namespace std;

int main() {

    int n, result;
    cin >> n;
    int o = n % 5;
    if (n == 1 || n == 3) {
        result = -1;
    }
    else if (o % 2 == 0) {
        result = n / 5 + o / 2;
    }
    else {
        result = ((n / 5) - 1) + ((o + 5) / 2);
    }

    cout << result;
    return 0;
}
