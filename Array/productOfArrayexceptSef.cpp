#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4};
    int n = a.size();
    vector<int> left(n, 1), right(n, 1), result(n);

    // Calculate left products
    for (int i = 1; i < n; i++) {
        left[i] = a[i - 1] * left[i - 1];
    }

    // Calculate right products
    for (int i = n - 2; i >= 0; i--) {
        right[i] = a[i + 1] * right[i + 1];
    }

    // Calculate the result by multiplying left and right products
    for (int i = 0; i < n; i++) {
        result[i] = left[i] * right[i];
    }

    // Print the result
    cout << "Product of array except self: ";
    for (int b : result) {
        cout << b << " ";
    }
    cout << endl;

    return 0;
}
