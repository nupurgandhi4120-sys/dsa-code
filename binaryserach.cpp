#include <iostream>
using namespace std;

int main() {
    int a[5] = {12, 24, 67, 89, 92};
    int low = 0;
    int high = (sizeof(a)/ sizeof(a[0])) - 1;
    int find = 67;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (find == a[mid]) {
            cout << "index number : " << mid << endl;
            break;
        } else if (find > a[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}
