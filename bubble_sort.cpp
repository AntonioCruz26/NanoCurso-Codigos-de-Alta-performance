#include <iostream>
using namespace std;

const int N = 8;
int vetor[N];

int main(){
    //populando com dados o vetor
    for(int i = 0; i < N; i++){
        cout << "Digite o " << i+1 << "º Numero: ";
        cin >> vetor[i];
    }

    cout << "Ordenando vetor..." << endl;

    //ordenação
    for(int i=0; i < N-1; i++){
        int aux;
        for(int j = 0; j < N-i-1;j++){
            if(vetor[j]>vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    //mostrar dados
    for(int i = 0; i<N; i++){
        cout << vetor[i] << " ";   
    }


    return 0;
}