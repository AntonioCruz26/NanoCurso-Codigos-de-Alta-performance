#include <iostream>
using namespace std;

const int N = 10;
int vetor[N];

int main(){
    //populando com dados o vetor
    for(int i = 0; i < N; i++){
        cout << "Digite o " << i+1 << "º Numero: ";
        cin >> vetor[i];
    }

    cout << "Ordenando vetor..." << endl;

    int eleito = 0, j;
    for(int i = 0 ; i < N ; i++){
        eleito = vetor[i];
        j = i-1;
        while(j >= 0 && vetor[j] > eleito){
            vetor[j+1] = vetor[j];
            j = j-1;
        }
        vetor[j+1] = eleito;
    }

        //mostrar dados
    for(int i = 0; i<N; i++){
        cout << vetor[i] << " ";   
    }
    
    return 0;
}