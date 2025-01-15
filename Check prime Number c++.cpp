#include <iostream>

using namespace std;

int main() {


    int n;
    cin >> n;


    for (int i = 2; i <= n-1; i++){

        if (n%i==0){
            cout << "Its not a Prime Number:" << n << endl;
            break;
        }
        else {
            cout << "Its a Prime Number:" << n << endl;
            break;
        }

    }


    return 0;
}
