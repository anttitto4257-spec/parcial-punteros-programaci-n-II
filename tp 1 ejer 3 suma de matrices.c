#include <stdio.h> //scanf y printf 
#include <stdlib.h>// para rand() y srand()
#include <time.h> // para time ()  

int main () {

	int N;

	//pedir tamaC1o de la matriz
	printf ("Ingresar tamaC1o de la matriz : ");
	scanf("%d", &N);

	// Declaramos las matrices [A][B] y suma
	int A[N][N];
	int B[N][N];
	int suma[N][N];

	// iniciamos el generador de  numeros aleatorios
	srand(time(NULL));

	//generar valores aleatorios entre 1 y 9 para ambas matrices
	for (int f = 0 ; f < N ; f++) {
		for (int c = 0; c < N ; c++) {
			A[f][c]=rand() % 9 + 1;
			B[f][c]=rand() % 9 + 1;
		}
	}

	// mostrar matriz 1
	printf("\nContenido de las matrices\n");
	printf("Matriz 1\n");
	for (int f = 0; f < N ; f++) {
		for (int c = 0; c < N ; c++) {
			printf("%d ", A[f][c]);
		}
		printf("\n");
	}

	//mostrar matriz 2
	printf("matriz 2\n");
	for ( int f = 0; f < N ; f++) {
		for ( int c = 0; c < N ; c++) {
		    printf("%d ", B[f][c]);
}
	printf("\n");
	}
	
	
	// calcular la suma de ambas matrices 
	for (int f = 0 ; f < N ; f++) {
	    for (int c = 0; c < N ; c++){
	      suma[f][c]= A[f][c] + B[f][c];
	    }
	     
	}
	 
	 //mostrar la suma
	 printf("Suma de las matrices\n");
	 for ( int f = 0; f < N ; f++) {
	     for (int c = 0; c < N ; c++) {
	         printf("%d ",suma[f][c]);
	     }
	     printf("\n");
	 }
	return 0;
}





