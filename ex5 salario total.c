/*Giovanni Chiarello 31/05
Finalidade: calcular o salario total baseado no total de vendas
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salFixo, valorVen, comiss, salTotal;
	printf("Insira o Salario fixo:"); scanf("%f", &salFixo);
	printf("Insira o valor total das vendas:"); scanf("%f", &valorVen);
	
	if(valorVen<=1500){
		salTotal = (valorVen*3)/100;
	}
	else{
		salTotal = (1500*3)/100;
		salTotal += ((valorVen-1500)*5)/100;
	}
	
	
	printf("Salario Total: R$%.2f", salTotal+salFixo);
	
    return 0;
}
