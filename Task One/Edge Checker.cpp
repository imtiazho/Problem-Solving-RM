#include <iostream>
#include <cstdlib>  // For abs function

using namespace std;

bool areConnected(int a, int b) {
    return abs(a - b) == 1;
}

int main() {
    int a, b;

    cin >> a;
    cin >> b;

    if (areConnected(a, b)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
