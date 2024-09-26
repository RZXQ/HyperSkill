#include <iostream>
using namespace std;

int main() {
    int L = 1;
    int R = 1000000000;
    int mid;

    int target;
    cin >> target;

    int count = 0;

    while (L <= R) {
        count++;
        mid = (L + R) / 2;

        if (mid == target) {
            break;
        } else if (mid < target) {
            L = mid + 1;
        } else if (mid > target) {
            R = mid - 1;
        }
    }

    if (count <= 20) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}