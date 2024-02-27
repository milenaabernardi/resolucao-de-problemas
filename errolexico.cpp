#include <iostream>
using namespace std;

int calculaFatorial(int numero){
    if (numero == 0){
        return 1;
    } else {
        return numero * calcularFatorial(numero - 1);;
    }
}

int main(){
    int numero;
    cout << "insira um numero inteiro: ";
    cin >> numero;

    int resultado = calculaFatorial(numero);

    cout << "o fatorial de " << numero << " e: " << resultado << endl;

    return 0;
}

// error: 'calcularFatorial' was not declared in this scope //
//         return numero * calcularFatorial(numero - 1);; //
//                                                    ^ //
