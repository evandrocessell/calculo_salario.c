#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	int tempoServico;
	
	printf("Quanto tempo na empresa?: ");
	scanf("%i", &tempoServico);
	printf("Digite seu salário: ");
	scanf("%f", &salario);
	
	if(tempoServico > 5){
		salario = salario + 500;
	}
	
	printf("Salário: R$ %.2f\n", salario);

}

//Quando colocar chave, não colocar ponto e virgula
//media >= 7.0 && presenca >= 0.75
