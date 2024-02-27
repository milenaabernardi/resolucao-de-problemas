#include <iostream>
#include <cmath>
using namespace std;

void imprimirMatriz(float matriz[3][4]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void resolverSistema(float matriz[3][4]){
   
    for (int i = 0; i < 3; i++){
        for (int j = i + 1; j < 3; j++){
            float razao = matriz[j][i] / matriz[i][i];
            for (int k = i; k < 4; k++){
                matriz[j][k] -= razao * matriz[i][k];
            }
        }
    }

    float x[3];
    for (int i = 2; i >= 0; i--){
        x[i] = matriz[i][3];
        for (int j = i + 1; j < 3; j++){
            x[i] -= matriz[i][j] * x[j];
        }
        x[i] /= matriz[i][i];
    }

    cout << "solucao:" << endl;
    for (int i = 0; i < 3; i++){
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }
}

int main(){
    float matriz[3][4] = {
        {2, 1, -1, 8},
        {-3, -1, 2, -11},
        {-2, 1, 2, -3}
    };

    cout << "matriz original:" << endl;
    imprimirMatriz(matriz);

    resolverSistema(matriz);

    return 0;
}