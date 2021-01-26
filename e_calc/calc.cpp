#include<iostream>
#include <iomanip>
using namespace std;
#define ll unsigned long long

ll fac(int num){
    ll prod = 1;
    for(int i = 1; i <= num; i++){prod*=i;}
    return prod;
}

double calc_e(int n){
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += (double)1/fac(i);
        // cout << sum << endl;
    }
    return sum += 1/(n*fac(n));
}

int main(){
    int n = 27;
    // cout << setprecision(27) << calc_e(n);
    // cout.setf(ios::fixed);
    // cout << setw(15) << setprecision(100) << calc_e(n) << endl;
    cout << fac(27) << endl;
    return 0;
}