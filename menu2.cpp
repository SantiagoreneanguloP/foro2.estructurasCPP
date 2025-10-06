#include<iostream>

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

        switch (opcion)
        {
        case 1:
            cout<<"Tortas: $45 "<<endl;
            break;
        
        case 2:
            cout<<"Palomitas: $10"<<endl;
            break;

        case 3:
            cout<<"Agua: $15"<<endl;
            break;
        }



    } while (opcion != 4);




    return 0;
}