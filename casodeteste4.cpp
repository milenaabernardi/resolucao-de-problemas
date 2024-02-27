#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void ordenarNumeros(vector<int>& numeros){
    sort(numeros.begin(), numeros.end());
}

int main(){
    vector<int> numeros;

    // caso de teste 1: lista de números vazia
    numeros = {};
    ordenarNumeros(numeros);
    if (numeros.empty()){
        cout << "caso de teste 1: passou" << endl;
    } else {
        cout << "caso de teste 1: falhou" << endl;
    }

    // caso de teste 2: lista de números com um único elemento
    numeros = {5};
    ordenarNumeros(numeros);
    if (numeros[0] == 5){
        cout << "caso de teste 2: passou" << endl;
    } else {
        cout << "caso de teste 2: falhou" << endl;
    }

    // caso de teste 3: lista de números com dois elementos
    numeros = {3, 5};
    ordenarNumeros(numeros);
    if (numeros[0] == 3 && numeros[1] == 5){
        cout << "caso de teste 3: passou" << endl;
    } else {
        cout << "caso de teste 3: falhou" << endl;
    }

    // caso de teste 4: lista de números com vários elementos
    numeros = {5, 3, 1, 4, 2};
    ordenarNumeros(numeros);
    if (numeros[0] == 1 && numeros[1] == 2 && numeros[2] == 3 && numeros[3] == 4 && numeros[4] == 5){
        cout << "caso de teste 4: passou" << endl;
    } else {
        cout << "caso de teste 4: falhou" << endl;
    }

    // caso de teste 5: lista de números com elementos repetidos
    numeros = {5, 5, 3, 3, 1};
    ordenarNumeros(numeros);
    if (numeros[0] == 1 && numeros[1] == 3 && numeros[2] == 3 && numeros[3] == 5 && numeros[4] == 5){
        cout << "caso de teste 5: passou" << endl;
    } else {
        cout << "caso de teste 5: falhou" << endl;
    }

    return 0;
}