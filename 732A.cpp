#include <iostream>
using namespace std;
int k, r, a = 1, i = 0;
bool b = true;
int main() {
    cin >> k >> r;
    while (b) {
        i++;
        a = k * i;
        if (a % 10 == 0 || a % 10 == r) {
            b = false;
        }
    }
    cout << i;
}
