/*
Descripci�n: M�todo de Bisecci�n con Funciones
Autor: Chaparro Salazar Eduardo Daniel
*/

// Incorporaci�n de librerias
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

// Definici�n de constantes
#define TRUE 1
#define FALSE 0
#define E 0.01

/* 
// Funci�n para asignar una nueva funci�n "SE DEBE DE SUSTITUIR"
*/	double Valor(double X) {
	    return sin(10*X) + cos(3*X);
	}

	//Funci�n principal
	int main () { // Inicio de algoritmo
		system("color 0F"); // Cambia el color de fondo a turquesa oscuro y el texto a blanco brillante
	    setlocale(LC_ALL,""); // Permite utilizar cualquier caracter
	    char repetir = TRUE;
	    
	    // Variables 
	    double X1,X2,Xr,Er,V;
	    int A=0, opcion;
	    
	    do {
	        system("cls"); // Limpiar pantalla
	
	        // T�tulo
	        printf ("\n\t----------------------------------------------------");
	        printf("\n\tM�todo de Bisecci�n");
	        printf ("\n\t----------------------------------------------------");
	        printf("\n\t1. Encontrar la ra�z");
	        printf("\n\t0. Salir");
	        printf ("\n\t----------------------------------------------------");
	        printf("\n\tElige una opci�n:");
	        if(scanf("%d", &opcion) != 1) {
	            printf("\n\tEntrada no v�lida.\n");
	            while(getchar() != '\n'); // Limpiar el buffer de entrada
	            continue;
	        }
	        printf ("\t----------------------------------------------------");
	            
	        //Procesos
	        switch(opcion) {
	            case 1:    
	                printf("\n\tIngrese el valor para la ra�z (X1): ");
	                scanf("%lf", &X1);
	                printf("\n\tIngrese el valor para la ra�z (X2): ");
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
	                    printf ("\n\tIteraci�n %d", A);
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tX1: %lf", X1);
	                    printf ("\n\tX2: %lf", X2);
	                    printf ("\n\tXr: %lf", Xr);
	                    printf ("\n\tError: %lf%%", Er);
	
	                }while (Er>E);
	                printf ("\n\n\t----------------------------------------------------");
	                printf ("\n\tResultado");
	                printf ("\n\t----------------------------------------------------");
	                printf ("\n\tLa ra�z aproximada es: %lf",Xr);
	            break;
	
	            case 0:
	                repetir = FALSE;
	                break;
	                
	            default:
	                printf("\n\tOpci�n no v�lida.\n");
	        }
	
	        system("pause>nul");
	
	    } while (repetir); // Final ciclo repetitivo
	
	    return 0;
	} // Fin algoritmo

