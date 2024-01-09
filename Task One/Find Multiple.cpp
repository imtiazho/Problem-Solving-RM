#include <iostream>

using namespace std;


int findMultiple(int A, int B, int C) {
    for (int i = A; i <= B; ++i) {
        if (i % C == 0) {
            return i; // Return the first number found that is a multiple of C
        }
    }
    return -1; // Return -1 if no multiple is found
}

int main() {
    int A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;

    int result = findMultiple(A, B, C);
    cout << result << endl;

    return 0;
}
