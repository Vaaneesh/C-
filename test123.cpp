#include <iostream>
using namespace std;
void doubleValue(int a) {
    a = a * 2;
    cout<<a;
}
int main() {
    int a = 8;
    doubleValue(a);
    cout << a;
}