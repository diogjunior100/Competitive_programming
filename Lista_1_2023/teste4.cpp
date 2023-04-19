#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);

    long long n, k;
    std::cin >> n >> k;

    std::vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    long long x = 0, mask = 0;
    for (int i = 60; i >= 0; --i) {
        mask = (1LL << i);
        int z = 0, o = 0;
        for (const auto& aux : a) {
            if (aux & mask) {
                ++o;
            } else {
                ++z;
            }
        }
        if (z > o && (x | mask) <= k) {
            x |= mask;
            std::cout << x << std::endl;
        }
    }

    long long soma = 0;
    for (const auto& num : a) {
        long long x_result = x ^ num;
        soma += x_result;
    }

    std::cout << soma << '\n';

    return 0;
}