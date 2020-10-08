//Operadores aritmeticos
//adicao +
//subtracao -
//multiplicacao *
//divisao /
//mod ou rresto da divisao %

#include <iostream>
using namespace std;

int main(){
    int a, b, quociente, resto;
    cout << "Digite um valor inteiro: " << endl;
    cin >> a;
    cout << "Digite um valor diferentee de 0 inteiro: " << endl;
    cin >> b;
    quociente = a/b;
    resto = a%b;
    cout << "quociente: " << quociente << endl;
    cout << "resto: " << resto << endl;
}

