#include <iostream>
using namespace std;

int fatorial(int n){
    if(n ==0){
        return 1;
    }
    else{
        return n*fatorial(n-1);
    }
}

int num, fat;

int main(){
    cout << "Digite um numero para calcular o fatorial dele: ";
    cin >> num;

    fat = fatorial(num);

    cout << "O fatorial de " << num << " e " << fat;
}