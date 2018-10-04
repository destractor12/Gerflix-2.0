#include <stdio.h>
#include <stdlib.h>
#include "Usu-Ser.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);
    int opcion;

    do
    {
        opcion = mostrarMenu();

        switch(opcion)
        {
            case 1: printf("A(lta)");
            printf("B(aja)");
            printf("M(odif)");
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5: opcion=5;
            break;
        }

    }while(opcion!=5);

//mostrarListaSeries(listaDeSeries,TAMSERIE);
//mostrarListaUsuarios(listaDeUsuarios,TAMUSUARIO);
//mostrarUsuarioConSuSerie(listaDeUsuarios,TAMUSUARIO,listaDeSeries,TAMSERIE);
//mostrarSerieConSuUsuario(listaDeUsuarios,TAMUSUARIO,listaDeSeries,TAMSERIE);
//altaUsuario(listaDeUsuarios,TAMUSUARIO,listaDeSeries,TAMSERIE);

    return 0;
}
