#include <iostream>
using namespace std;

int main(){
    int x=0, y=1, z=0, num, cont;
    cout<< "Digite los numeros de la serie: ";
    cin>>num;

    for(cont=0; cont<num; cont++){
        z=x+y;
        cout<<z<<" , ";
        x=y;
        y=z;
    }

    return 0;
}
