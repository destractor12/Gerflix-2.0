#include "Usuario.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }
}

void mostrarUsuario(eUsuario usuarios)
{
    printf("\n%d %s %d\n",usuarios.idUsuario,usuarios.nombre,usuarios.idSerie);
}

void mostrarListaUsuarios(eUsuario usuarios[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(usuarios[i].estado!=0)
        {
            mostrarUsuario(usuarios[i]);
        }
    }
}

int buscarLibreUsuario(eUsuario usuarios[],int cant)
{
    int i;
    int libre;

    for(i=0;i<cant;i++)
    {
        if(usuarios[i].estado==0)
        {
            libre=i;
            break;
        }
    }

    return libre;
}

int idAutoUsuario(eUsuario usuarios[],int cant)
{
    int i;
    int id;

    i=buscarLibreUsuario(usuarios,cant);

    if(i>=0)
    {
        id=i+1015;
    }

    return id;
}
