#include <iostream>
using namespace std;

int num = 123;

int main(){
    int num = 321;
    {
        double num = 456;
        cout << num << " " << ::num << endl;
    }
    return 0;
}