#include <iostream>
#include <cmath>
using namespace std;

double calcularAreaDoCirculo(double raio){
    return M_PI * pow(raio, 2);
}

int main(){
    double raio;
    cout << "insira o raio do circulo: ";
    cin >> raio;

    double area = calcularAreaDoCirculo(raio);

    cout << "a area do circulo e: " << area << endl;

    if (area == M_PI * pow(raio, 2)) {
        cout << "a formula para a area do circulo esta correta." << endl;
    } else {
        cout << "a formula para a area do circulo esta incorreta." << endl;
    }

    return 0;
}