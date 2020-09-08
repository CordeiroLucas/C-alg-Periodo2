#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int soma_diag, delta, maior_valor;
	float media, soma_geral, divisor;
	int i, j;
	int matrix[3][3];
	divisor = 0;
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matrix[i][j]);
			
			if (divisor == 0){	
				maior_valor = matrix[i][j];	
			}else  if (matrix[i][j] > maior_valor){
				maior_valor = matrix[i][j];
			};
			
			if (i == j) {
				soma_diag = soma_diag + matrix[i][j];
			};
			
			soma_geral = matrix[i][j] + soma_geral;
			divisor++;
		};
	};
	
	media = soma_geral/divisor;	
	
	if (maior_valor > 0) {
		delta = 1;
	} else if (maior_valor < 0){
		delta = -1;
	} else{
		delta = 0;
	};	
	
	printf("\n%.2f %d %d %d", media, maior_valor, delta, soma_diag);
	
	return 0;	 
}
	

