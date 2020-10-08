#include <iostream>
using namespace std;

int main(){
    string nome = "";
    string operacao = "";
    int valor1 = 0;
    float valor2 = 0;
    float resultado = 0;

    cout << "digite seu nome: " << endl;
    cin >> nome;
    cout << "seu nome e: " << nome << endl;
    cout << "digite o valor inteiro: " << endl;
    cin >> valor1;
    cout << "digite o valor float: " << endl;
    cin >> valor2;
    cout << "digite a operacao desejada: " << endl;
    cin >> operacao;


    if(operacao == "+"){
        resultado = valor1 + valor2;

        cout << "o resultado e:" << resultado << endl;
    };
    if(operacao == "-"){
        resultado = valor1 - valor2;

        cout << "o resultado e:" << resultado << endl;
    };
    if(operacao == "*"){
        resultado = valor1 * valor2;

        cout << "o resultado e:" << resultado << endl;
    };
    if(operacao == "/"){
        resultado = valor1 / valor2;

        cout << "o resultado e:" << resultado << endl;
    };
    system("pause");
}
