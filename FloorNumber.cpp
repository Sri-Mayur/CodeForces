#include <iostream>

int apartment(int n, int x) {
    if (x > n) {
        return -1;  // Invalid input
    }

    if (n < 3) {
        return 1;
    }

    for (int i = 1; i < n; i++) {
        if (i * 3 + 2 >= x) {
            return i + 1;
        }
    }

    return -1;  // Apartment not found
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, x, floor;
        std::cin >> n >> x;

        floor = apartment(n, x);
        std::cout << floor << std::endl;
    }

    return 0;
}

    

