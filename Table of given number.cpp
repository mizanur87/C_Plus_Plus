#include <iostream>
using namespace std;

int main() {

    int Tableof;

    cin >> Tableof;


    for (int i=1; i<=10; i++){
        cout << Tableof << "x" << i << "=" << i*Tableof << endl;
    }

    return 0;
}
