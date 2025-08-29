
#include <iostream>
#include <vector>
#include "Entidad.h"
#include "Recipiente.h"
#include "arana.h"
#include "mantis.h"

using namespace std;

vector<Recipiente>lista_recipientes;
vector<Arana>lista_aranas;
vector<Mantis>lista_mantis;



void agregar_entidad(){
    bool salida_agregar=false;
    int opc_agg;
    do {
        cout<<"--- agregar entidad al vector---"<<endl;
        cout<<"elija el tipo de entidad que quiere agregar: "<<endl<<endl;
        cout<<"1. Recipiente"<<endl;
        cout<<"2. Arana"<<endl;
        cout<<"3. Mantis"<<endl;
        cout<<"4. volver al menu principal"<<endl;
        cin>>opc_agg;
        switch (opc_agg) {
            case 1:
                {
                    int vida;
                    int poder_abismal;
                    int tipo_arma;
                    cout<<"ingrese la vida: "<<endl;
                    cin>>vida;
                    cout<<"ingrese el poder abismal: ";
                    cin>>poder_abismal;
                    cout<<"ingrese el tipo de arma: (0=Aguja, 1=Clavo, 2=Abismo) ";
                    cin>>tipo_arma;
                    
                    lista_recipientes.push_back(Recipiente(vida, poder_abismal, TipoArma(tipo_arma)));
                    cout<<" se ha creado un recipiente "<<endl;
                    
                    
                }
                break;
            case 2:
                int vida;
                int numero_patas;
                bool esVenenosa;
                int opc_bool;
                {
                    cout<<"ingrese la vida: "<<endl;
                    cin>>vida;
                    cout<<"ingrese el numero de patas: "<<endl;
                    cin>>vida;
                    cout<<"ingrese si es venenosa [0.(si)\1.(no)]"<<endl;
                    cin>>opc_bool;
                    if (opc_bool==0) {
                        esVenenosa=true;
                    }else if(opc_agg==1){
                        esVenenosa=false;
                    }else{
                        cout<<"opcion ingresada es invalida"<<endl;
                        
                    }
                    cout<<"se ha creado una arana"<<endl;
                }
                break;
            case 3:
            {
                int vida;
                int precision;
                int filo;
                int honor;
                cout<<"ingrese la vida: "<<endl;
                cin>>vida;
                cout<<"ingrese la precision: "<<endl;
                cin>> precision;
                cout<<"ingrese el filo: "<<endl;
                cin>> filo;
                cout<<"ingrese el honor: "<<endl;
                cin>> honor;
                
                cout<<"se ha creado una mantis "<<endl;

                
                
            }
            break;
            case 4:
            {
                cout<<"se volvera al menu principal"<<endl;
                salida_agregar=true;
                
            }
            break;
            default:
                cout<<"opcion ingresada es invalida"<<endl<<endl;
                break;
        }
        
        
    } while (salida_agregar!=true);
}//fin agregar entidad

void listar_entidades(){
    cout<<"lista de entidades "<<endl;
    for (int i=0; i<lista_recipientes.size(); i++) {
        
        cout<<i<<")"<<"vida de la entidad:  "<<lista_recipientes[i].getVida()<<endl
        <<"poder abismal:  "<<lista_recipientes[i].getPoderAbismal()<<endl
        <<"tipo de arma:  "<<lista_recipientes[i].getArma()<<endl;
    }
    
}//fin listar entidades

void eliminar_entidades(){
    
}//fin eliminar entidades

void desafio(){
    
    
}//fin desafio

int main(int argc, const char * argv[]) {
   
    bool salida_menu=false;
    int opc_menu;
    do {
        cout<<"Coliseo de los insensatos"<<endl<<endl;
        cout<<"opcion 1. Agregar entidad"<<endl;
        cout<<"opcion 2. Listar entidades"<<endl;
        cout<<"opcion 3. Eliminar entidades"<<endl;
        cout<<"opcion 4. Desafio de hornet"<<endl;
        cout<<"opcion 5. salir"<<endl;
        cin>>opc_menu;
        switch (opc_menu) {
            case 1:{
                
                agregar_entidad();
                
            }
                break;
            case 2:{
                listar_entidades();
                
            }
                break;
            case 3:{
                eliminar_entidades();
                
            }
                break;
            case 4:{
                desafio();
                
            }
                break;
            case 5:{
                cout<<"se abandonara el programa"<<endl;
                salida_menu=true;
                
            }
                break;
            default:
                cout<<"opcion ingresada es invalida"<<endl<<endl;
                break;
        }

        
        
        
    } while (salida_menu!=true);
    
    return 0;
}
