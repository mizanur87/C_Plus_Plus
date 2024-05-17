#include <iostream>

using namespace std;

int main() {


    int Numbers [5] = {3,1,4,6,8};

    int largest = Numbers[0];

    for (int i=0; i<5; i++ ){
        if (Numbers[i]>largest){
            largest = Numbers[i];
        }
    }
    cout << largest << endl;


    return 0;
}
