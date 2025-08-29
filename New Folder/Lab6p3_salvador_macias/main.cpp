
#include <iostream>
#include <vector>

using namespace std;

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
                
            }
                break;
            case 2:{
                
            }
                break;
            case 3:{
                
            }
                break;
            case 4:{
                
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
