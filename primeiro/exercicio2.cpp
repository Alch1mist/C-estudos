
#include <iostream>
using namespace std;

int main(){
    string opcao, opcao2 = "";
    float valor1, valor2, valor3 = 0;

    cout<< "Voce deseja 1= formula, 2= limite velocidade, 3= ordem crescente ?";
    cin>> opcao;

    if(opcao == "1"){
        cout<< "Digite o valor da massa" << endl<<endl;
        cin>> valor1;
        cout<< "Digite o valor da aceleracao" << endl<<endl;
        cin>> valor2;

        valor3 = valor1 * valor2;
        cout<< "a forca e:" <<valor3<<endl;
    }
    if(opcao == "2"){
        cout<< "Digite a velocidade do carro: "<<endl;
        cin>> valor1;

        if(valor1 > 80){
            cout<< "Ultrapassou o limite!!!" << endl;
        }else if (valor1 == 80){
            cout<< "Esta na velocidade limite, cuidado!!!!"<< endl;
        }else if(valor1 < 80){
            cout<< "Dentro do limite de velocidade, Parabens!!" << endl;
        }
    }
    if(opcao == "3"){
        cout<< "Digite o valor 1:" << endl;
        cin>> valor1;
        cout<< "Digite o valor 2:" << endl;
        cin>> valor2;
        cout<< "Digite o valor 3:" << endl;
        cin>> valor3;

        if(valor1 < valor2 < valor3){
            cout<< "Crescente" << endl << valor1 << endl << valor2 << endl << valor3 << endl;
        }else if(valor3 > valor2 > valor1){
            cout<< "Decresente";
        }
    }

    system("pause");

}
