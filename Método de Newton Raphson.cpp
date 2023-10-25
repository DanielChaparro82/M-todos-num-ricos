/*
Descripción: Método de Newton Raphson
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
#define E 1e-10

// Definición de funciones

/* 
// Función para asignar una nueva función "SE DEBE DE SUSTITUIR"
*/	double Valor(double X) {
	    return -0.874*X*X + 1.75*X + 2.627; 
	}

/* 
// Función para asignar la derivada de la función "SE DEBE SUSTITUIR" 
*/	double Derivada(double X) {
	    return -1.748*X + 1.75; 
	}

	// Función principal
	int main () { // Inicio de algoritmo
	    system("color 0F"); // Cambia el color de fondo a negro y el texto a blanco brillante
	    setlocale(LC_ALL,""); // Permite utilizar cualquier caracter
	    char repetir = TRUE;
	    
	    // Variables 
	    double X1,Xa,Xr,Er;
	    int A=0, opcion;
	    
	    do {
	        system("cls"); // Limpiar pantalla
	
	        // Título
	        printf ("\n\t----------------------------------------------------");
	        printf("\n\tMétodo de Newton-Raphson");
	        printf ("\n\t----------------------------------------------------");
	        printf("\n\t1. Encontrar la primera raíz");
	        printf("\n\t2. Encontrar la segunda raíz");
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
	                A = 0; // Reiniciar el valor de A
	                printf("\n\tIngrese el valor para la raíz (X1): ");
	                scanf("%lf", &X1);
	                Xa = X1;
	                
	                do {
	                    Xr = Xa - Valor(Xa)/Derivada(Xa);
	                    Er = 100*fabs((Xr-Xa)/Xr);
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tIteración %d:", A+1);
	                    printf ("\n\t----------------------------------------------------");
						printf ("\n\tRaíz aproximada = %lf", Xr);
						printf ("\n\tError = %lf%%\n",  Er);
	                    Xa = Xr;
	                    A=A+1;
	                    }while (Er>E);
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tResultado");
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tLa primera raíz aproximada es: %lf",Xr);
	            break;
	
	            case 2:
	                A = 0; // Reiniciar el valor de A
	                printf("\n\tIngrese el valor inicial para la segunda raíz (X1): ");
	                scanf("%lf", &X1);
	                Xa = X1;
	                
	                do {
	                    Xr = Xa - Valor(Xa)/Derivada(Xa);
	                    Er = 100*fabs((Xr-Xa)/Xr);
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tIteración %d:", A+1);
	                    printf ("\n\t----------------------------------------------------");
						printf ("\n\tRaíz aproximada = %lf", Xr);
						printf ("\n\tError = %lf%%\n",  Er);
	                    Xa = Xr;
	                    A=A+1;
	                    }while (Er>E);
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tResultado");
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tLa segunda raíz aproximada es: %lf",Xr);
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

