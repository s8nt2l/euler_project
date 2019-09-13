#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int i = 0; i < 1000; i++)
        sum += i * (!(i % 3) || !(i % 5));
    cout << sum;
    return 0;
}