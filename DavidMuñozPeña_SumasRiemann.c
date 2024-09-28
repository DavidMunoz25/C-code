#include <stdio.h>

float f(float xi){
	return ((xi*xi*xi)+(xi*xi)+(1));
}
	//David Muñoz Peña	
	int main()
	{
		printf("**********************\n**********************\n***David Muñoz Peña***\n**********************\n**********************\n");
		int n, i=1, t;
		float a, b, dx, xi, suma=0;
		printf("Escriba a: ");
		scanf("%f", &a);
		printf("Escriba b: ");
		scanf("%f", &b);
		while (!(a < b)){
			a = 0;
			b = 0;
			printf("Escriba a: ");
			scanf("%f", &a);
			printf("Escriba b: ");
			scanf("%f", &b);
		}
		printf("n: ");
		scanf("%d", &n);
		dx=(b-a)/n;
		printf("Opcion (1 derecha, 2 izquierda, 3 punto medio, 4 aleatoria): ");
		scanf("%d", &t);
		if (t==1){
			while(i<=n){
				xi=(dx*i)+a;
				suma=suma+f(xi)*dx;
				i++;
			}
		}else if(t==2){
			while(i<=n){
				xi=(dx*(i-1))+a;
				suma=suma+f(xi)*dx;
				i++;
			}
		}else if(t==3){
			while(i<=n){
				xi=((dx*i)+a)+((dx*(i-1))+a);
				suma=suma+f(xi/2)*dx;
				i++;
			}
		}
		else if(t==4){
			while(i<=n){
				xi=((dx*i)+a)+((dx*(i-1))+a);
				suma=suma+f(xi/3)*dx;
				i++;
			}
		}
		printf("\nSuma : %.6f", suma);
		return 0;
	}
