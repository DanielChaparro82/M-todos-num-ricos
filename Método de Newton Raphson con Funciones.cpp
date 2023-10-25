/*
Descripci�n: M�todo de Newton Raphson con Funciones
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
	
/* 
Funci�n en la que se le asignan valores a las variables X1 y X2
*/	double IngresaValoresX() {
	    double X1;
	    printf("\n\tIngrese el valor para la ra�z (X1): ");
	    scanf("%lf", &X1);
	    return X1;
	}
	
/* 
// Funci�n que se encarga de realizar la metodologia del m�todo de newton raphson
*/	double CalcularRaiz(double X1) {
	    double Xa = X1;
	    double Xr, Er;
	    int A = 0;
	
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
	    } while (Er>E);
	
	    return Xr;
	}

/* 
Funci�n que se encarga de imprimir la raiz resultante una vez que se alcanza el criterio de paro 
*/	void ImprimirResultado(double raiz, int opcion) {
	    printf ("\n\t----------------------------------------------------");
	    printf ("\n\tResultado");
	    printf ("\n\t----------------------------------------------------");
	    
	    if(opcion == 1) {
	        printf ("\n\tLa primera ra�z aproximada es: %lf",raiz);
	    } else if(opcion == 2) {
	        printf ("\n\tLa segunda ra�z aproximada es: %lf",raiz);
	    }
	}

	// Funci�n principal
	int main () { 
	    system("color 0F"); 
	    setlocale(LC_ALL,""); 
	    char repetir = TRUE;
	    
	    double X1;
	    int opcion;
	    
	    do {
	        system("cls"); 
	
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
	            while(getchar() != '\n'); 
	            continue;
	        }
	        
	        printf ("\t----------------------------------------------------");
	
	        switch(opcion) {
	            case 1:{ // Primera ra�z
	                X1 = IngresaValoresX();
	                double raiz1 = CalcularRaiz(X1);
	                ImprimirResultado(raiz1, opcion);
	                break;
	           	}
	
	            case 2:	{ // Segunda ra�z
	                X1 = IngresaValoresX();
	                double raiz2 = CalcularRaiz(X1);
	                ImprimirResultado(raiz2, opcion);
	                break;
	            }
	
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

