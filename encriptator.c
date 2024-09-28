#include <stdio.h>
#include <ctype.h>
//pograma que encripta palabras usando el encriptado del cesar

int main()
{
	char palabra[50];
	int letraNum;
	char letraActual;
	
	printf("***************************************************\n");
	printf("********************ENCRIPTADOR********************\n");
	printf("***************************************************\n");

	printf("Escribe una palabra sin tildes que deseas encriptar:\n");
	gets(palabra);
	
	printf("Su palabra encriptada es: ");
	
	for(int indice = 0; palabra[indice] != '\0'; indice++){
		
		// Obtener la letra de la posición en donde está el índice

		// Así no importa si ponen 'A' o 'a', ambas letras serán convertidas a 'a'
		letraActual = tolower(palabra[indice]);
		
		
		switch(letraActual)
		{
		case 'a':
			letraNum=(0+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'b':
			letraNum=(1+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'c':
			letraNum=(2+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'd':
			letraNum=(3+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'e':
			letraNum=(4+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'f':
			letraNum=(5+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'g':
			letraNum=(6+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'h':
			letraNum=(7+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'i':
			letraNum=(8+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'j':
			letraNum=(9+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'k':
			letraNum=(10+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'l':
			letraNum=(11+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'm':
			letraNum=(12+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'n':
			letraNum=(13+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'o':
			letraNum=(14+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'p':
			letraNum=(15+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'q':
			letraNum=(16+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'r':
			letraNum=(17+400)%26;
			printf("%d", letraNum);
			break;
			
		case 's':
			letraNum=(18+400)%26;
			printf("%d", letraNum);
			break;
			
		case 't':
			letraNum=(19+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'u':
			letraNum=(20+400)%26;
			printf("%d", letraNum);
			break;
			
		case 'v':
			letraNum=(21+400)%26;
			printf("%d", letraNum);			
			break;
			
		case 'w':
			letraNum=(22+400)%26;
			printf("%d", letraNum);			
			break;
			
		case 'x':
			letraNum=(23+400)%26;
			printf("%d", letraNum);			
			break;
			
		case 'y':
			letraNum=(24+400)%26;
			printf("%d", letraNum);			
			break;
			
		case 'z':
			letraNum=(25+400)%26;
			printf("%d", letraNum);			
			break;
			
			
			// si no se reconoce el símbolo
		default:
			printf("¡Error! No se reconoce el símbolo");
		}
	}
	
	return 0;
}
