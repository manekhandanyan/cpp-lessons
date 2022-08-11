#include <iostream>

using namespace std;

int main() {
    int n = 4567;
    int sum;
    for (sum = 0;
         n > 0; sum += n % 10, n /= 10);


    int num = 4567, product = 1;
    while (num != 0) {
        product = product * (num % 10);
        num = num / 10;
    }

    cout << product - sum << "\n";
}