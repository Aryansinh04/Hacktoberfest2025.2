#include <iostream>

void hanoi(int n, char from, char to, char aux, int &moves) {
    if (n == 0) return;
    hanoi(n - 1, from, aux, to, moves);
    std::cout << "Move disk " << n << " from " << from << " to " << to << '\n';
    ++moves;
    hanoi(n - 1, aux, to, from, moves);
}

int main() {
    int n, moves = 0;
    std::cout << "Disks: ";
    std::cin >> n;
    if (n > 0) {
        hanoi(n, 'A', 'C', 'B', moves);
        std::cout << "Total moves: " << moves << '\n';
    } else {
        std::cout << "Invalid number of disks.\n";
    }
}
