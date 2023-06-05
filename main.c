#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N_ALUM 23
#define N_PROG 3

int Menu(float Alumnos[N_ALUM][N_PROG], int flag);
void ImprimirMatriz(float Alumnos[N_ALUM][N_PROG]);
void PromedioAlumno(float Alumnos[N_ALUM][N_PROG]);
void PromedioProgreso(float Alumnos[N_ALUM][N_PROG]);
void MejorNota(float Alumnos[N_ALUM][N_PROG]);

int main(){
    int flag = 1;
    float Alumnos[N_ALUM][N_PROG];
    float b = 10;

    srand(time(NULL));

    for (int i = 0; i < N_ALUM; i++)
    {
        for (int j = 0; j < N_PROG; j++)
        {
            Alumnos[i][j] = (rand()%100)/b;
        }
        
    }
    
    ImprimirMatriz(Alumnos);

    while (flag)
    {
        flag = Menu(Alumnos, flag);
    }
    
    return 0;

}

int Menu(float Alumnos[N_ALUM][N_PROG], int flag){

    int menu, resultado;

    resultado = scanf("%d", menu);

    while (resultado != 1)
    {
        
    }
    

    switch (menu){
    case 1:
    
        break;
    case 2:
    
        break;
    
    case 3:
    
        break;

    case 4:
    
        break;

    default:
        break;
    }

    return flag;
}

void ImprimirMatriz(float Alumnos[N_ALUM][N_PROG]){

    printf("Calificaciones de Programacion\n");

    for (int i = 0; i < N_ALUM; i++)
    {
        printf("Alumno %d\t", i+1);

        for (int j = 0; j < N_PROG; j++)
        {
            printf("Progreso %d: ", j+1);
            printf("%.2f\t\t", Alumnos[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

}
