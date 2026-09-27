
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Nums1
        for (int j = 0; j <= i; j++) {
            cout << j;
        }
        // Nums2
        for (int j = i - 1; j >= 0; j--) {
            cout << j;
        }
        // Newline for each row
        cout << endl;
    }
    return 0;
}
