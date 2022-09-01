#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, next = 0, n;
    cin >> n;
    cout << "Fibonacci Series: " << t1 << " " << t2 << " ";
    next = t1 + t2;

    while(next <= n) {
        cout << next << " ";
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
    return 0;
}
