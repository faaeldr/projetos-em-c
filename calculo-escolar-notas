#include <stdio.h>
#include <string.h>

struct Aluno {
	
	char nomeAluno[50];
	int numMatricula;
	float Nota1, Nota2, Nota3;
	float Media;
	
};

// Coloquei para que as 3 funções retornem '100' quando não tiverem alunos encaixados em tal setor, para exibir uma mensagem para o usuário.

int Aprovados(struct Aluno discente[], int contador){
	
	int aprovado = 0;
	
	for (int i = 0; i < contador; i++){
	discente[i].Media = (discente[i].Nota1 * 0.3) + (discente[i].Nota2 * 0.3) + (discente[i].Nota3 * 0.4);
	
	if (discente[i].Media >= 7){
		aprovado = 1;
	} 
	}
	
	if (aprovado == 0){
		return 100;
	}
	
	printf("\n--- Aprovados ---\n");
	for (int i = 0; i < contador; i++){
		if (discente[i].Media >= 7){
			printf("%s (%d) - Media: %.2f\n", discente[i].nomeAluno, discente[i].numMatricula, discente[i].Media);
		}
	}
	
	return 0;
}

int Exames(struct Aluno discente[], int contador){
	
	int exame = 0;
	
	for (int i = 0; i < contador; i++){
	discente[i].Media = (discente[i].Nota1 * 0.3) + (discente[i].Nota2 * 0.3) + (discente[i].Nota3 * 0.4);
	if (discente[i].Media >= 4 && discente[i].Media < 7){
		exame = 1;
	} 
	}
	
	if (exame == 0){
		return 100;
	}
	
	printf("\n--- Exame ---\n");
	for (int i = 0; i < contador; i++){
		if (discente[i].Media >= 4 && discente[i].Media < 7){
			printf("%s (%d) - Media: %.2f\n", discente[i].nomeAluno, discente[i].numMatricula, discente[i].Media);
		}
	}
	
	return 0;
}

int Reprovados(struct Aluno discente[], int contador){

	int reprovado = 0;
	
	for (int i = 0; i < contador; i++){
	discente[i].Media = (discente[i].Nota1 * 0.3) + (discente[i].Nota2 * 0.3) + (discente[i].Nota3 * 0.4);
	if (discente[i].Media < 4){
		reprovado = 1;
	} 
	}
	
	if (reprovado == 0){
		return 100;
	}
	
	printf("\n--- Reprovados ---\n");
	for (int i = 0; i < contador; i++){
		if (discente[i].Media < 4){
			printf("%s (%d) - Media: %.2f\n", discente[i].nomeAluno, discente[i].numMatricula, discente[i].Media);
		}
	}
	
	return 0;
}

int main(){

	struct Aluno estudante[10];
	int Quantia = 0;
	
	// Entrada do n° de alunos.
	while (Quantia < 1 || Quantia > 10){
	
	printf("Quantos alunos? (max. 10) ");
	scanf("%d", &Quantia);
	
	// Verificação.
	if (Quantia < 1 || Quantia > 10){
		printf("Numero invalido! Tente novamente.\n\n");
	}
	}

	// Entrada dos dados do aluno.
	for (int i = 0; i < Quantia; i++){
		printf("\nAluno %d:\n", i + 1);
		printf("Nome: ");
		scanf("%s", estudante[i].nomeAluno);
		printf("Matricula: ");
		scanf("%d", &estudante[i].numMatricula);
		
		do {
		
		printf("Notas: ");
		scanf("%f %f %f", &estudante[i].Nota1, &estudante[i].Nota2, &estudante[i].Nota3);
		
		// Verificação.
		if (estudante[i].Nota1 > 10 || estudante[i].Nota1 < 0 || estudante[i].Nota2 > 10 || estudante[i].Nota2 < 0 || estudante[i].Nota3 > 10 || estudante[i].Nota3 < 0){
			printf("Insira nota(s) de 0 a 10!\n\n");
		}
		
		} while (estudante[i].Nota1 > 10 || estudante[i].Nota1 < 0 || estudante[i].Nota2 > 10 || estudante[i].Nota2 < 0 || estudante[i].Nota3 > 10 || estudante[i].Nota3 < 0);
	}
	
	// Puxando as funções e verificando o que foi retornado: 0 (sucesso) ou 100 (nenhum aluno no setor).
	int avisoAprovados = Aprovados(estudante, Quantia);
	int avisoExame = Exames(estudante, Quantia);
	int avisoReprovados = Reprovados(estudante, Quantia);
	
	if (avisoAprovados == 100){
    	printf("\nNao ha alunos aprovados.\n");
	}

	if (avisoExame == 100){
    	printf("\nNao ha alunos para a realizacao do exame.\n");
	}	
	
	if (avisoReprovados == 100){
    printf("\nNao ha alunos reprovados.\n");
	}
	
    return 0;
}

