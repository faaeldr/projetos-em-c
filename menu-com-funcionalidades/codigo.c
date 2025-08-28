#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void Menu (){
	
	printf("1 - Converter temperatura (Celsius >< Fahrenheit)\n");
	printf("2 - Calcular area de figuras geometricas\n");
	printf("3 - Contar o tamanho de uma frase\n");
	printf("4 - Verificar se um texto e palindromo\n");
	printf("0 - Sair\n\n");

}

// Celsius -> Fahrenheit
void conversaoFahrenheit(){
	
	float tempFahrenheit;
	float tempCelsius;
	
	printf("\nInsira a temperatura em graus Celsius: ");
	scanf("%f", &tempCelsius);
	tempFahrenheit = tempCelsius * 1.8 + 32;
	
	printf("A temperatura em graus Fahrenheit sera de %.1f.\n\n", tempFahrenheit);
	
}

// Fahrenheit -> Celsius 
void conversaoCelsius(){
	
	float tempFahrenheit;
	float tempCelsius;
	
	printf("\nInsira a temperatura em graus Fahrenheit: ");
	scanf("%f", &tempFahrenheit);
	tempCelsius = (tempFahrenheit - 32) / 1.8;
	
	printf("A temperatura em graus Celsius sera de %.1f.\n\n", tempCelsius);
	
}

// Escolha da ordem da conversao.
void conversaoTemperatura (){
	
	int opcao;
	
	printf("\n");
	printf("1 - Converter temperatura (Celsius >>>> Fahrenheit)\n");
	printf("2 - Converter temperatura (Fahrenheit >>>> Celsius)\n\n");
	
	printf("Escolha sua opcao: ");
	scanf("%d", &opcao);

	switch (opcao){
    	case 1:
    		conversaoFahrenheit();
			break;		
		case 2:
			conversaoCelsius();
			break;
		default:
			printf("Opcao invalida! Tente novamente.\n\n");
	}
	
}

void calcTriangulo(){
	
	float base, altura, result;
	
	printf("\nInsira a base do triangulo: ");
	scanf("%f", &base);
	
	printf("Insira a altura do triangulo: ");
	scanf("%f", &altura);
	result = (base * altura) / 2;
	
	printf("A area do triangulo solicitado e de %.1f unidades.\n\n", result);
	
}

void calcRetangulo(){
	
	float base, altura, result;
	
	printf("\nInsira a base do retangulo: ");
	scanf("%f", &base);
	
	printf("Insira a altura do retangulo: ");
	scanf("%f", &altura);
	result = (base * altura);
	
	printf("A area do retangulo solicitado e de %.1f unidades.\n\n", result);
	
}

void calcCirculo(){
	
	float raio, pi, result;
	pi = 3.14159265359;
	
	printf("\nInsira o raio do circulo: ");
	scanf("%f", &raio);
	result = (raio * raio) * pi;
	
	printf("A area do circulo solicitado e de %.1f unidades.\n\n", result);
	
}

// Escolha da forma geometrica.
void calcFiguras(){

	char opcao;
	
	printf("\n");
	printf("A - Triangulo\n");
	printf("B - Retangulo\n");
	printf("C - Circulo\n\n");
	
	printf("Escolha sua opcao: ");
	scanf(" %c", &opcao);

	switch (opcao){
    	case 'A':
    	case 'a':	
    		calcTriangulo();
			break;		
		case 'B':
	    case 'b':
			calcRetangulo();
			break;
		case 'C':
		case 'c':
			calcCirculo();
			break;
		default:
			printf("Opcao invalida! Tente novamente.\n\n");
	}
	
}

void fraseColada(){
	
	char text[200];
	
	printf("\nEscreva uma palavra ou frase sem espacos (max. 200 caracteres):\n");
	scanf(" %s", text);

	printf("A frase digitada contem %d caracteres.\n\n", strlen(text));
	
}

void fraseEspacada(){
	
	char text[201];
	int correcao;
	
	fflush(stdin); // -> Vi este comando no youtube e ele serve para eu conseguir usar scanf e fgets sem problema de buffer.
	printf("\nEscreva uma frase (max. 200 caracteres):\n");
	fgets(text, 201, stdin);
	correcao = strlen(text);
	
	printf("A frase digitada contem %d caracteres.\n\n", correcao - 1);
	
}

// Escolha do tipo de frase.
void contarFrase(){
	
	int opcao;
	
	printf("\n");
	printf("1 - Frase com espacos\n");
	printf("2 - Frase sem espacos\n\n");
	
	printf("Escolha sua opcao: ");
	scanf(" %d", &opcao);

	switch (opcao){
    	case 1:	
    		fraseEspacada();
			break;
		case 2:
			fraseColada();
			break;			
		default: 
			printf("Opcao invalida! Tente novamente.\n\n");
	}
	
}

void verifPalindromo(char palind[]){
	
	char copiaPalindromo[200];
	int contador = 0;
	
	for (int i = 0; i < strlen(palind); i++){
		if (palind[i] != ' '){
			copiaPalindromo[contador] = palind[i]; // copia: 123321 - original: 123 321
			contador++;
		}
	}
	
	copiaPalindromo[contador] = '\0';
	
	int tamanhoPalindromo;
	tamanhoPalindromo = strlen(copiaPalindromo);
	
	int count = 1;
	
	/*
		123321
	i =	012345
		012210
		012210
	*/	
	
	for (int i = 0; i < tamanhoPalindromo / 2; i++){
		if (copiaPalindromo[i] != copiaPalindromo[tamanhoPalindromo - i - 1]){
			count = 0;
		} 	
	}

	if (count == 1){
		printf("O texto informado e palindromo.\n\n");
	} else {
		printf("O texto informado nao e palindromo.\n\n");
	}
	
}

// Entrada do palindromo.
void digitPalindromo(){
	
	char palindromo[200];
	char diferenciacao[200];
	
	fflush(stdin); // -> Vi este comando no youtube e ele serve para eu conseguir usar scanf e fgets sem problema de buffer.
	
	printf("Escreva o texto (max. 200 caracteres):\n");
	fgets(palindromo, 45, stdin);
	palindromo[strlen(palindromo) - 1] = '\0';
	
	
	for (int i = 0; i < strlen(palindromo); i++){
		diferenciacao[i] = toupper(palindromo[i]); // Percorre cada letra escrita transformando-a em maiuscula para manter um padrao.
	}
	diferenciacao[strlen(palindromo)] = '\0'; 
	
	verifPalindromo(diferenciacao);
	
}
	
int main(){
	
	int opcao = -1;

	while (opcao != 0){
	Menu();
	
		printf("Escolha sua opcao: ");
		scanf(" %d", &opcao);
    	switch (opcao){
    		case 1:
    			conversaoTemperatura();
				break;
			case 2:	
				calcFiguras();
				break;
			case 3:
				contarFrase();
				break;
			case 4:
				digitPalindromo();
				break;
			case 0:
				printf("Encerrando o programa...\n");
				break;
			default:
				printf("Opcao invalida! Tente novamente.\n\n");			
				break;
		}
	}
	
	return 0;	
}
