#include <iostream>
using namespace std;

int MDC(int n, int m){
    if(n > m){
        return MDC(m, n);
    }
    else{
        if(n==0){
            return m;
        }
        else{
            return(MDC(n, m%n));
        }
    }

}

int num1, num2, mdc;

int main(){

    cout << "Digite 2 numeros para calcular o mdc deles: ";
    cin >> num1;
    cin >> num2;

    mdc = MDC(num1, num2);

    cout << "O MDC de " << num1 << " e " << num2 << " e " << mdc;

}