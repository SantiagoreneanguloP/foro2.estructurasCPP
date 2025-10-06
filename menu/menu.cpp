//Elabore programas que muestre un menú de productos y retorne el precio del producto seleccionado:
//Programa 1: Utilice if-else


#include <iostream>
using namespace std;

int main(){

    int opcion;
    do{

        cout<<"=========Menu========"<<endl;
        cout<<" 1)Torta"<<endl;
        cout<<" 2)Palomitas"<<endl;
        cout<<" 3)Agua"<<endl;
        cout<<" seleccione una opcion: ";
        cin>>opcion;

        if(opcion==1){
            cout<<"tortas: $45"<<endl;
    
        }

        else if(opcion==2){
            cout<<"palomitas: $10"<<endl;

        }

        else if(opcion==3){
            cout<<"Agua: $12"<<endl;
        }
    } while (opcion !=4);
        
    return 0;
}