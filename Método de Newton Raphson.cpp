/*
Descripci�n: M�todo de Newton Raphson
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
#define E 1e-10

// Definici�n de funciones

/* 
// Funci�n para asignar una nueva funci�n "SE DEBE DE SUSTITUIR"
*/	double Valor(double X) {
	    return -0.874*X*X + 1.75*X + 2.627; 
	}

/* 
// Funci�n para asignar la derivada de la funci�n "SE DEBE SUSTITUIR" 
*/	double Derivada(double X) {
	    return -1.748*X + 1.75; 
	}

	// Funci�n principal
	int main () { // Inicio de algoritmo
	    system("color 0F"); // Cambia el color de fondo a negro y el texto a blanco brillante
	    setlocale(LC_ALL,""); // Permite utilizar cualquier caracter
	    char repetir = TRUE;
	    
	    // Variables 
	    double X1,Xa,Xr,Er;
	    int A=0, opcion;
	    
	    do {
	        system("cls"); // Limpiar pantalla
	
	        // T�tulo
	        printf ("\n\t----------------------------------------------------");
	        printf("\n\tM�todo de Newton-Raphson");
	        printf ("\n\t----------------------------------------------------");
	        printf("\n\t1. Encontrar la primera ra�z");
	        printf("\n\t2. Encontrar la segunda ra�z");
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
	                A = 0; // Reiniciar el valor de A
	                printf("\n\tIngrese el valor para la ra�z (X1): ");
	                scanf("%lf", &X1);
	                Xa = X1;
	                
	                do {
	                    Xr = Xa - Valor(Xa)/Derivada(Xa);
	                    Er = 100*fabs((Xr-Xa)/Xr);
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tIteraci�n %d:", A+1);
	                    printf ("\n\t----------------------------------------------------");
						printf ("\n\tRa�z aproximada = %lf", Xr);
						printf ("\n\tError = %lf%%\n",  Er);
	                    Xa = Xr;
	                    A=A+1;
	                    }while (Er>E);
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tResultado");
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tLa primera ra�z aproximada es: %lf",Xr);
	            break;
	
	            case 2:
	                A = 0; // Reiniciar el valor de A
	                printf("\n\tIngrese el valor inicial para la segunda ra�z (X1): ");
	                scanf("%lf", &X1);
	                Xa = X1;
	                
	                do {
	                    Xr = Xa - Valor(Xa)/Derivada(Xa);
	                    Er = 100*fabs((Xr-Xa)/Xr);
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tIteraci�n %d:", A+1);
	                    printf ("\n\t----------------------------------------------------");
						printf ("\n\tRa�z aproximada = %lf", Xr);
						printf ("\n\tError = %lf%%\n",  Er);
	                    Xa = Xr;
	                    A=A+1;
	                    }while (Er>E);
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tResultado");
	                    printf ("\n\t----------------------------------------------------");
	                    printf ("\n\tLa segunda ra�z aproximada es: %lf",Xr);
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

