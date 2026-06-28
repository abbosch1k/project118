#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    cout << "R: " << rand()%256 << endl;
    cout << "G: " << rand()%256 << endl;
    cout << "B: " << rand()%256 << endl;

    return 0;
}
