#include "Serie.h"
#include "Usuario.h"

typedef struct
{
   int idusuario;
   int idserie;

}eUs_Series;

void mostrarUsuarioConSuSerie(eUsuario[], int, eSerie[], int);
void mostrarSerieConSuUsuario(eUsuario[], int, eSerie[], int);
void altaUsuario(eUsuario [],int ,eSerie [],int );
void altaSerie(eUsuario [],int ,eSerie [],int );
int mostrarMenu();
int validarEntero(int,char[],int,int);
