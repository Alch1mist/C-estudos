//


#include <iostream>
using namespace std;

int main(){
    int x;
    cout<< "Digite um valor inteiro" <<endl;
    cin>>x;

    if(x == 7){
        cout<<"voce digitou 7";
    }else{
    cout<<"voce digitou diferente de 7";
    }
    cout<<endl;
    system("pause");

    //com swtich
    cout<<"-----------------------------"<<endl<<endl;
    switch(x){
    case 7:
        cout<<"digitou 7";
    default:
    }
}
