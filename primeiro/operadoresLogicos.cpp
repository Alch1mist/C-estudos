//Operadores logicos
// >, <, >=, <=, ==, !=
// && -> e , || -> ou

#include <iostream>
using namespace std;

int main(){
    bool a;//retorna verdadeirou(1) ou falso(0)
    a = 15 > 7;
    cout << a << endl;
    a = 7 < 3;
    cout << a << endl;
    a = (7 > 3) && (15 == 15);
    cout << a << endl;
    a = (7 < 3) || (15 != 15);
    cout << a << endl<< endl;
    system("pause");
}
