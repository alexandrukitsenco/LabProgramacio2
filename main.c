/* URV --- FUNDAMENTALS OF COMPUTER PROGRAMMING II*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Calcul del factorial de forma TailRecursion*/
unsigned int FactorialTail(unsigned int n, unsigned int f) {
	return n > 1 ? FactorialTail(n - 1, f * n) : f;
}

/* Comprova rang de l'entrada i crida a FactorialTail*/
int Factorial(int n){
	int resultat;
	
	if(n < 0){
		resultat = -1;
		printf("Math Error: El factorial d'un nombre negatiu no existeix. \n");
	}
	else{
		resultat = FactorialTail( (unsigned)n , 1);
	}
	return resultat;
}


int main(){
	unsigned int resultat = Factorial(10);
	printf("Factorial %d", resultat);
	
	resultat = Factorial(15);
	printf("Factorial %d", resultat);
}
asdfasdfasd
