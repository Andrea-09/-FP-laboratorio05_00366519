#include <iostream>
using namespace std;
int main(){
    int m; int i; int a; int cont=0 ; int n1; int n; int n2; int x=0; int y=1; int z=0; int factorial; int resultado; 

        cout<<">>> MENU CALCULADORA <<<";
        cout<<"1. Sumar dos numeros.";
        cout<<"2. Restar dos numeros.";
        cout<<"3. Multiplicar dos numeros.";
        cout<<"4. Dividir dos numeros.";
        cout<<"5. Fibonacci de un numero.";
        cout<<"6. Factorial de un numero.";
        cout<<"7. Salir.";
        
        cin>>m;

        switch(m){
            case '1': cout<<"Introduzca primer sumando: ";
                      cin>>n1;
                      cout<<"Introduzca segundo sumando: ";
                      cin>>n2;
                      resultado = n1 + n2;
                      break;

                    
            case '2': cout<<"Introduzca minuendo: ";
                      cin>>n1;
                      cout<<"Introduzca sustraendo: ";
                      cin>>n2;
                      resultado = n1 - n2;
                      break;

                      
            case '3': cout<<"Introduzca primer operando: ";
                      cin>>n1;
                      cout<<"Introduzca segundo operando: ";
                      cin>>n2;
                      resultado = n1 * n2;
                      break;

                      

            case '4': cout<<"Introduzca dividendo: ";
                      cin>>n1;
                      cout<<"Introduzca divisor: ";
                      cin>>n2;
                      if ( n2 != 0 )
                          resultado = n1 / n2;
                      else
                          cout<<"ERROR: No se puede dividir entre cero.";
                          
            case '5': cout << "Ingrese el numero de elementos de la serie: ";
 
                      cin >> n;
                      for(cont=0; cont<n; cont++){
                      z=x+y;
                      cout<<z<<" , ";
                      x=y;
                      y=z;
                      }
                    break;

            case '6': cout << "Ingrese el número n";
                   cin >> n;
                   factorial=1;
                   for(i=1;i<=n;i++)
                   factorial = factorial * i;
                    break;

             case '7': cout<<"Adios";
                    break;

    return 0;
}