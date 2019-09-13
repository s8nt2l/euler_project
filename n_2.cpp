#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int a = 0;
    int b = 1;
    for(; (a < 4000000) && (b < 4000000); ) {
        a += b;
        sum += a * !(a % 2);
        sum += b * !(b % 2);
        b += a;
    }
    cout << sum;//
    return 0;
}