#include <iostream>
#include <string>

using namespace std;

struct Data {
    int dia, mes, ano;
};

bool ehAnterior(Data data1, Data data2) {
    if (data1.ano < data2.ano) {
        return true;
    } else if (data1.ano > data2.ano) {
        return false;
    } else {
        if (data1.mes < data2.mes) {
            return true;
        } else if (data1.mes > data2.mes) {
            return false;
        } else {
            if (data1.dia < data2.dia) {
                return true;
            } else {
                return false;
            }
        }
    }
}

int main() {
    Data data1, data2;

    cout << "Insira a primeira data (dd mm aaaa): ";
    cin >> data1.dia >> data1.mes >> data1.ano;

    cout << "Insira a segunda data (dd mm aaaa): ";
    cin >> data2.dia >> data2.mes >> data2.ano;

    if (ehAnterior(data1, data2)) {
        cout << "A primeira data eh anterior a segunda." << endl;
    } else {
        cout << "A primeira data nao eh anterior a segunda." << endl;
    }

    return 0;
}