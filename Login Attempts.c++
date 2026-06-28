#include <iostream>
using namespace std;

int main() {

    string p;

    for(int i=0;i<3;i++){

        cin>>p;

        if(p=="1234"){
            cout<<"Success";
            return 0;
        }
    }

    cout<<"Blocked";

    return 0;
}
