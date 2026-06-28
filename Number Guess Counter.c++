#include <iostream>
using namespace std;

int main() {
    int target = 50;
    int guess;
    int tries = 0;

    do {
        cin >> guess;
        tries++;
    } while(guess != target);

    cout << tries;

    return 0;
}
