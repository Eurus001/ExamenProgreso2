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

    printf("Elija una opcion: \n1. Obtener el promedio de calificaciones de cada alumno durante el semestre \n2. La nota promedio del grupo de estudiantes para cada progreso \n");
    printf("3. El alumno que obtuvo el mayor promedio de calificación durante el semestre \n4. Salir\n");
    resultado = scanf("%d", &menu);

    //while (resultado != 1)
    //{
        
    //}
    

    switch (menu){
    case 1:
        PromedioAlumno(Alumnos);
        break;
    case 2:
        PromedioProgreso(Alumnos);
        break;
    case 3:
        MejorNota(Alumnos);
        break;
    case 4:
        flag = 0;
        break;
    default:
        printf("Ingrese una opcion valida");
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

void PromedioAlumno(float Alumnos[N_ALUM][N_PROG]){
    float suma = 0, promedio = 0;
    int alumnoA = 0;

    printf("Elija el alumno: ");
    scanf("%d", &alumnoA);

    for (int i = 0; i < N_PROG; i++)
    {
        suma = suma + Alumnos[alumnoA-1][i];
    }

    promedio = suma / N_PROG;

    printf("El promedio del alumno %d es %.2f\n", alumnoA, promedio);
}

void PromedioProgreso(float Alumnos[N_ALUM][N_PROG]){
    float suma, promedio;
    int progresoA;

    printf("Elija el progreso: ");
    scanf("%d", &progresoA);

    for (int i = 0; i < N_ALUM; i++)
    {
        suma = suma + Alumnos[progresoA-1][i];
    }

    promedio = suma / N_ALUM;

    printf("El promedio del progreso %d es %.2f\n", progresoA, promedio);

}

void MejorNota(float Alumnos[N_ALUM][N_PROG]){
    float max = 0;
    int maxI = 0, maxJ = 0;

    for (int i = 0; i < N_ALUM; i++)
    {
        for (int j = 0; j < N_PROG; j++)
        {
            if (Alumnos[i][j] > max)
            {
                max = Alumnos[i][j];
                maxI = i;
                maxJ = j;
            }          
        }
    }
    

}