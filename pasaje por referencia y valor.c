#include<stdio.h>

int incrementar(int *num);

int main(int argc, char const *argv[]){
    int num;
    scanf("%d", &num);
	printf("Antes de llamar a la funcion, num vale %d\n", num);
	incrementar(&num);
	printf("Despues de llamar a la funcion, num vale %d", num);
}


int incrementar(int *num){
	(*num) = (*num) + 1;
}
