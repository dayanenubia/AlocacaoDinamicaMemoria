#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i; //declarando variaveis
	int *v;  // declarando ponteiro
	printf("Tamanho do vetor:");
	scanf("%d", &n);  //recebendo o tamanho do vetor 
	v = malloc(sizeof(int)*n);  //
	for(i = 0; i < n; i++){
		v[i] = i * 2;
		printf("%d|", v[i]);
	}  //fim for 
	return 0;
}
