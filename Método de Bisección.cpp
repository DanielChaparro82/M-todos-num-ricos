/*
Descripción: Método de Bisección con Funciones
Autor: Chaparro Salazar Eduardo Daniel
*/

// Incorporación de librerias
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

// Definición de constantes
#define TRUE 1
#define FALSE 0
#define E 0.01

/* 
// Función para asignar una nueva función "SE DEBE DE SUSTITUIR"
*/	double Valor(double X) {
	    return sin(10*X) + cos(3*X);
	}

	//Función principal
	int main () { // Inicio de algoritmo
		system("color 0F"); // Cambia el color de fondo a turquesa oscuro y el texto a blanco brillante
	    setlocale(LC_ALL,""); // Permite utilizar cualquier caracter
	    char repetir = TRUE;
	    
	    // Variables 
	    double X1,X2,Xr,Er,V;
	    int A=0, opcion;
	    
	    do {
	        system("cls"); // Limpiar pantalla
	
	        // Título
	        printf ("\n\t----------------------------------------------------");
	        printf("\n\tMétodo de Bisección");
	        printf ("\n\t----------------------------------------------------");
	        printf("\n\t1. Encontrar la raíz");
	        printf("\n\t0. Salir");
	        printf ("\n\t----------------------------------------------------");
	        printf("\n\tElige una opción:");
	        if(scanf("%d", &opcion) != 1) {
	            printf("\n\tEntrada no válida.\n");
	            while(getchar() != '\n'); // Limpiar el buffer de entrada
	            continue;
	        }
	        printf ("\t----------------------------------------------------");
	            
	        //Procesos
	        switch(opcion) {
	            case 1:    
	                printf("\n\tIngrese el valor para la raíz (X1): ");
	                scanf("%lf", &X1);
	                printf("\n\tIngrese el valor para la raíz (X2): ");
	                scanf("%lf", &X2);
	                
	                do {
	                    Xr = (X1 + X2)/2;
	                    if(Valor(Xr)*Valor(X1) < 0)
	                        X2 = Xr;
	                    else
	                        X1 = Xr;
	                    Er = 100*fabs((X2-X1)/X2);
	                    A=A+1;
	
	                    printf ("\n\n\t----------------------------------------------------");
	                    printf ("\n\tIteración %d", A);
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tX1: %lf", X1);
	                    printf ("\n\tX2: %lf", X2);
	                    printf ("\n\tXr: %lf", Xr);
	                    printf ("\n\tError: %lf%%", Er);
	
	                }while (Er>E);
	                printf ("\n\n\t----------------------------------------------------");
	                printf ("\n\tResultado");
	                printf ("\n\t----------------------------------------------------");
	                printf ("\n\tLa raíz aproximada es: %lf",Xr);
	            break;
	
	            case 0:
	                repetir = FALSE;
	                break;
	                
	            default:
	                printf("\n\tOpción no válida.\n");
	        }
	
	        system("pause>nul");
	
	    } while (repetir); // Final ciclo repetitivo
	
	    return 0;
	} // Fin algoritmo

