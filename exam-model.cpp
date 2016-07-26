#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int opc, n;
float x, y, A[10], B[10], R[10], G, a, b, c, dis, dis1;

int main () {
	do {
		system("cls");		
		printf("\n\n\t\t\tMENU");
		printf("\n\t1. Vectores");
		printf("\n\t2. Funcion");
		printf("\n\t3. Ecuacion");
		printf("\n\t4. Salir");
		printf("\n\n\t\tOpcion: ");
		scanf("%d", &opc);
		system("cls");
		switch (opc) {
			case 1: 
				printf("\t\tCalculo de Vector Resultante");
				printf("\n\tVector A\n");
				for (n = 0; n < 10; n++) {
					printf("A[%d] = ", n);
					scanf("%f", &A[n]);
				}
				printf("\n\tVector B\n");
				for (n = 0; n < 10; n++) {
					printf("B[%d] = ", n);
					scanf("%f", &B[n]);
				}
				
				for (n = 0; n < 10; n++) {
					R[n] = -3*B[n] + A[n];
					printf("\nR[%d] = %.2f", n, R[n]);
				}
				break;
			case 2:
				printf("\t\t\tFuncion\n");
				for (x = -10; x <= 40; x++) {
					if (x < 10) {
						y = 3*x*x +10;
					} else if (x < 25) {
						y = -6*x*x*x +2*x;
					} else {
						y = -x + sqrt(2*x);
					}
					printf("\nf(%.1f) => %.2f", x, y);
				}
				break;
			case 3: 
				printf("\t\tEcuacion de G");
				printf("\n\tIngrese el valor de x:");
				scanf("%f", &x);
				printf("\n\tIngrese el valor de a: ");
				scanf("%f", &a);
				printf("\n\tIngrese el valor de b: ");
				scanf("%f", &b);
				printf("\n\tIngrese el valor de c: ");
				scanf("%f", &c);
				//Calculo del denominador sin raiz
				dis = 5*b + c;
				
				//Calculo del radical en el numerador (sin raiz)
				dis1 = 4*x - a;
				
				if (dis > 0 && dis1 >= 0) {
					G = (3*x*x + sqrt(dis1))/sqrt(dis);
					printf("\n\n\t\t\tG = %.2f", G);
				} else {
					printf("\n\n\t\t\tMath Error");
				}
				break;
			case 4:
				printf("Gracias por utilizar el programa, \n presione una tecla para cerrar");
				break;
			default:
				printf("opcion Invalida");
				break;
		}
		getch();
	} while(opc != 4);
	return 0;
}
