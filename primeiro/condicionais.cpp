//o if tem direito a um else

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Digite o valor a: ";
    cin>>a;
    cout<<"Digite o valor b: ";
    cin>>b;

    //condições entre valores
    if( a > b){
        cout<< " A e maior";
    }
    if(a < b){
        cout<< "A e menor";
    }
    if(a==b){
        cout<< "A e igual";
    }
    cout<< endl<<endl;
    system("pause");
}
