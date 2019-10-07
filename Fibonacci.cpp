#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main(){
 
    int i, n, cont = 0;
 
    long long int a[100];
 
    a[0] = 0;
    a[1] = 1;
 
    cout << "Ingrese el numero de elementos de la serie: ";
 
    cin >> n;
 
    cout << "\n";
 
    for(i=1; i < n; i++){
 
        a[i+1] = a[i-1] + a[i];
 
    }
 
 
    for(i=0; i < n; i++){
 
        if (cont == 10){ 
 
            cout << "\n";
 
            cont = 0;           
 
        }
 
        cout << a[i] << " ";
 
        cont += 1;  
 
    }
       
    cout << "\n";
 
}