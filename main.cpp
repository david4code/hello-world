#include<iostream>
#include"add.h"
using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;
}