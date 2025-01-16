#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, remainder,temp, sum =0;


    cin >> n;

    temp = n;

    while (temp !=0){

        remainder = temp % 10;
        sum = sum * 10 + remainder ;
        temp = temp / 10;

    }

    cout << sum << endl;

    return 0;
}
