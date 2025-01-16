#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, remainder,temp, sum =0;


    cin >> n;

    temp = n;

    while (temp !=0){

        remainder = temp % 10;
        sum = sum  + remainder * remainder * remainder;
        temp = temp / 10;

    }

    if (sum == n){
        cout << "Armstrong Number" << endl;
    }
    else if (sum != n){
        cout << "Not Armstrong Number" << endl;
    }


    return 0;
}
