#include<bits/stdc++.h>
using namespace std;

template<typename t1, typename t2> double calculate(t1 num1, t2 num2, char op){
    switch(op){
    case '+':
        return num1 + num2;
        break;
    case '-':
        return calculate(num1, -num2, '+');
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        return calculate(num1, 1/num2, '*');
        break;
    default:
        cout << "Unknow operation"; return 0.22;
        break;
    }
}

int main(){
    cout << calculate(1.2, 2, '/');
    return 0;
}