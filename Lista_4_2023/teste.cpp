#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> X;

    int largestPower = 0;

    for (int b = 1; b <= X; b++) {
        for (int p = 2; pow(b, p) <= X; p++) {
            largestPower = std::max(largestPower, static_cast<int>(pow(b, p)));
        }
    }

    std::cout << "A maior potência perfeita menor ou igual a " << X << " é: " << largestPower << std::endl;

    return 0;
}
