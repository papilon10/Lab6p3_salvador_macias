
#include <iostream>
#include <vector>
#include "Entidad.h"
#include "Recipiente.h"
#include "arana.h"
#include "mantis.h"

using namespace std;

vector<Recipiente> lista_recipientes;
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
                if (vida<3000
                    ) {
                    if (poder_abismal>=1&&poder_abismal<4) {
                        if (tipo_arma>=0&&tipo_arma<3) {
                            lista_recipientes.push_back( Recipiente(vida, poder_abismal, TipoArma(tipo_arma)));
                            cout<<" se ha creado un recipiente "<<endl<<endl;
                        }
                    }
                    
                }else{
                    cout<<"se ingreso un valor invalido"<<endl;
                }
                
                /*lista_recipientes.push_back(Recipiente(vida, poder_abismal, TipoArma(tipo_arma)));
                 cout<<" se ha creado un recipiente "<<endl<<endl;*/
                
                
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
                cin>>numero_patas;
                cout<<"ingrese si es venenosa [0.(si)/1.(no)]"<<endl;
                cin>>opc_bool;
                if (opc_bool==0) {
                    esVenenosa=true;
                }else if(opc_agg==1){
                    esVenenosa=false;
                }else{
                    cout<<"opcion ingresada es invalida"<<endl;
                    
                }
                if (vida<3000) {
                    lista_aranas.push_back(Arana( vida, numero_patas, esVenenosa));
                    cout<<"se ha creado una arana"<<endl<<endl;
                }else{
                    cout<<"se ingreso un valor invalido"<<endl;
                }
                
                
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
                
                if (vida<3000) {
                    if (precision>=1&&precision<4) {
                        if (filo>=1&&filo<9) {
                            if (honor>=1&&honor<4) {
                                lista_mantis.push_back(Mantis(vida, precision, filo, honor));
                                cout<<"se ha creado una mantis "<<endl<<endl;
                                
                            }
                        }
                    }
                }else{
                    cout<<"se ingreso un valor invalido"<<endl;
                }
                
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
    cout<<"--lista de recipientes--"<<endl;
    for (int i=0; i<lista_recipientes.size(); i++) {
        
        cout<<i<<")"<<"vida del recipient:  "<<lista_recipientes[i].getVida()<<endl
        <<"poder abismal:  "<<lista_recipientes[i].getPoderAbismal()<<endl
        <<"tipo de arma:  "<<lista_recipientes[i].getArma()<<endl<<endl;
    }
    
    cout<<"--lista de aranas--"<<endl;
    for (int i=0; i<lista_aranas.size(); i++) {
        
        cout<<i<<")"<<"vida de la arana:  "<<lista_aranas[i].getVida()<<endl
        <<"numero de patas:  "<<lista_aranas[i].getNumeroPatas()<<endl
        <<"es venenosa?:  "<<lista_aranas[i].getVenenosa()<<endl<<endl;
    }
    
    cout<<"--lista de mantis--"<<endl;
    for (int i=0; i<lista_mantis.size(); i++) {
        cout<<i<<")"<<"vida de la mantis: "<<lista_mantis[i].getVida()<<endl
        <<"precision de la mantis: "<<lista_mantis[i].getPrecision()<<endl
        <<"filo de la mantis: "<<lista_mantis[i].getFilo()<<endl
        <<"honor de la mantis: "<<lista_mantis[i].getHonor()<<endl<<endl;
    }
    
}//fin listar entidades

void eliminar_entidades(){
    int indice_elim;
    int opc_elim;
    bool salida_eliminar=false;
    cout<<"1.lista de recipientes"<<endl;
    cout<<"2.lista de aranas"<<endl;
    cout<<"3.lista de mantis"<<endl;
    cout<<"4.regresar al menu principal"<<endl;
    cin>>opc_elim;
    switch (opc_elim) {
        case 1:
        {
            cout<<"--lista de recipientes--"<<endl;
            for (int i=0; i<lista_recipientes.size(); i++) {
                
                cout<<i<<")"<<"vida del recipient:  "<<lista_recipientes[i].getVida()<<endl
                
                <<"poder abismal:  "<<lista_recipientes[i].getPoderAbismal()<<endl
                <<"tipo de arma:  "<<lista_recipientes[i].getArma()<<endl<<endl;
            }
            cout<<"ingrese indice a eliminar: "<<endl;
            cin>>indice_elim;
            if (indice_elim<lista_recipientes.size()) {
                cout<<"se elimino el objeto"<<endl;
                // delete lista_recipientes()[indice_elim];
                lista_recipientes.erase(
                                        lista_recipientes.begin() + indice_elim);
            }
            
            
        }
            break;
        case 2:
        {
            cout<<"--lista de aranas--"<<endl;
            for (int i=0; i<lista_aranas.size(); i++) {
                
                cout<<i<<")"<<"vida de la arana:  "<<lista_aranas[i].getVida()<<endl
                <<"numero de patas:  "<<lista_aranas[i].getNumeroPatas()<<endl
                <<"es venenosa?:  "<<lista_aranas[i].getVenenosa()<<endl<<endl;
            }
            cout<<"ingrese indice a eliminar: "<<endl;
            cin>>indice_elim;
            if (indice_elim<lista_recipientes.size()) {
                cout<<"se elimino el objeto"<<endl;
                // delete lista_recipientes()[indice_elim];
                lista_aranas.erase(
                                   lista_aranas.begin() + indice_elim);
            }
            
        }
            break;
        case 3:
        {
            cout<<"--lista de mantis--"<<endl;
            for (int i=0; i<lista_mantis.size(); i++) {
                cout<<i<<")"<<"vida de la mantis: "<<lista_mantis[i].getVida()<<endl
                <<"precision de la mantis: "<<lista_mantis[i].getPrecision()<<endl
                <<"filo de la mantis: "<<lista_mantis[i].getFilo()<<endl
                <<"honor de la mantis: "<<lista_mantis[i].getHonor()<<endl<<endl;
            }
            cout<<"ingrese indice a eliminar: "<<endl;
            cin>>indice_elim;
            if (indice_elim<lista_recipientes.size()) {
                cout<<"se elimino el objeto"<<endl;
                // delete lista_recipientes()[indice_elim];
                lista_mantis.erase(
                                   lista_mantis.begin() + indice_elim);
            }
            
        }
            break;
        case 4:
        {
            cout<<"volviendo al menu principal"<<endl;
            salida_eliminar=true;
        }
            break;
            
        default:
            cout<<"opcion ingresada es invalida"<<endl;
            break;
    }
    
    
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
    
    for (Recipiente e : lista_recipientes)
        lista_recipientes.clear();
    ;
    lista_recipientes.clear();
    
    for (Arana e : lista_aranas)
        lista_aranas.clear();
    ;
    lista_aranas.clear();
    
    for (Mantis e : lista_mantis)
        lista_mantis.clear();
    ;
    lista_mantis.clear();
    
    
    return 0;
    
    
}
