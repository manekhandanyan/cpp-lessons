#include <iostream>

using namespace std;

int main() {
    int numbers[4] = {1, 5, 4, 7};
    int squaresOfNumbers[4] = {};
    for (int i = 0; i < 4; ++i) {
        squaresOfNumbers[i] = numbers[i] * numbers[i];
        cout << squaresOfNumbers[i] << "\n";
    };
    sort(squaresOfNumbers, squaresOfNumbers + 4);
    for (int i = 0; i < 4; ++i) {
        cout << squaresOfNumbers[i] << "\n";
    };
}
