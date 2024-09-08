#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n;
    std::vector<int> array1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> array1[i];
    }

    std::cin >> m;
    std::vector<int> array2(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> array2[i];
    }

    // Calculate the difference between corresponding elements and print the result
    for (int i = 0; i < std::max(n, m); ++i) {
        int value1 = (i < n) ? array1[i] : 0;
        int value2 = (i < m) ? array2[i] : 0;
        std::cout << value1 - value2;
        if (i < std::max(n, m) - 1) {
            std::cout << " ";
        }
    }

    return 0;
}
