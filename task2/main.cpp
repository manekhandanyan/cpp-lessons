#include <iostream>

using namespace std;

int main() {
    int n = 4567;
    int sum;
    for ( sum = 0;
            n > 0; sum += n % 10, n /= 10);
    cout << sum << "\n";
}