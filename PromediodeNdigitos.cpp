#include <iostream>
#include <cstdlib>
using namespace std;

float num, cont=1, i, promedio, dato;

int main()
{
    cout << "Ingrese el numero de datos: ";
    cin >> num;
    cont=0;

    for(i=1; i<=num; i=i+1){
    cout<<"Ingrese un dato: ";
    cin>>dato;
    cont=cont+dato;
    }  
promedio=cont/num;
cout<<"El promedio es: "<<promedio<<endl;
system("pause");

}