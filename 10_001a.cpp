#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>

//#include

using namespace std;

void menu ();
bool loguea ();
int registrar_venta ();

class venta{
      char Nombre_cliente [30];
      char Caract_EspPun [15];
      int fecha[3]; //día, mez,año
      char Categoria_Mensaje [15];
      int valor;
      int Folio;
      }

class cliente{
      char Nombre_cliente [30];
      char RFC [10];
      }

int registrar_venta(){
     }

void menu (){
     int op;
     printf("\n\t\tSeleccione una opcion\n"); //nota a recordad: agregar proximamente el nombre de usuario logueado.
     printf("\n\t1) Consultar estados de ventas\n\t2) Registrar venta\n\t3) Cancelar ventas\n\t4) Salir");
     printf("\n\n\t\t>> ");
     scanf("%d", &op);
     switch (op){
            case 1:
                 printf("\n\n\tha seleccionado la opcion 1");
                 break;
            case 2:
                 printf("\n\n\tha seleccionado la opcion 2");
                 break;
            case 3:
                 printf("\n\n\tha seleccionado la opcion 3");
                 break;
            case 4:
                 exit(0);
                 break;
            default:
                    printf("\n\n\tno ha seleccionado una opción valida...");
            }
            system("pause");
     }

int main () {
    menu ();
    system("Pause");
    return 0;
    }
