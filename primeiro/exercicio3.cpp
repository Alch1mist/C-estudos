#include <iostream>
using namespace std;

int main(){
    //imprimindo os valores impares de 0 a 100

    //int x;

    /*for(x=1;x<=100;x=x+2){
        cout<<x<<endl;
    }
    cout<<endl;*/

   /* int x;
    int a,b,c,d,e,f,g,h,i,j;

    for(x=1;x<=1;x++){
        cout<<"digite 10 valores que irao ser somados:"<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        cin>>e;
        cin>>f;
        cin>>g;
        cin>>h;
        cin>>i;
        cin>>j;
        cout<<endl;
        cout<<"o somatorio resultou em ="<<(a+b+c+d+e+f+g+h+i+j)<<endl;
    }*/

    //somaa qualquer valor positivo infinitamente se digitar algo negativo ele encerra.

    int x,y;

    for(x=1;y>0; x++){
         cout<<"digite valores que irao ser somados:"<<endl;
         cin>>y;
         cout<<y+y<<endl;
    }


    system("pause");
}
