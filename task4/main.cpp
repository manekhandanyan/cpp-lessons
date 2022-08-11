#include <iostream>

using namespace std;

int main() {
    int start;
    int end;
    int i;
    int oddNumber;

    cout << "Enter oddNumber number that begins interval: ";
    cin >> start;
    cout << "Enter oddNumber number that ends interval: ";
    cin >> end;
    oddNumber = 0;

    for (i = start; i <= end; ++i) {
        if (i % 2 == 0)
            ++oddNumber;
    }

    cout << " odd numbers: " << oddNumber << endl;

}