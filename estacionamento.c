#include <stdio.h>
// Define o n´umero m´aximo de vagas
#define MAX 10

void Estacionamento(int vagas) {
	if (vagas <= 0 || vagas > MAX) {
		printf("Numero invalido!");
		return;
	}
	// Verifica se o n´umero de vagas ´e v´alido
	if(0 < vagas && vagas <= MAX) {
		Estacionamento(vagas - 1);
		printf("Numero de vagas ocupadas: %d\n", vagas);
	}
	return;
}

int main() {
	int vagas;
	// Exibe o n´umero m´aximo de vagas
	printf("Estacionamento! Vagas %d\n", MAX);
	printf("Insira o numero de vagas: ");
	// Recebe o n´umero de vagas a serem ocupadas
	scanf("%d", &vagas);
	Estacionamento(vagas);
	return 0;
}