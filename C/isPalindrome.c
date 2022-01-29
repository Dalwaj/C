#include <stdio.h>
#include <stdlib.h>

int getLength(char string[]){
	int i;
	for(i = 0; string[i] != '\0' && string[i] != '\n'; i++){
		//printf("%c\n", string[i]);
	}
	return i;
}

int isPalindrome(char string[]){
	int isPalindrome = 1;
	for(int i = 0, j = getLength(string)-1; isPalindrome && i <= j; i++, j--){
		isPalindrome = string[i] == string[j] ? 1 : 0;
	}

	return isPalindrome;
}
int main(int argc, char argcv[]){
	char chaine[80];
	int i;
	printf("Entrez une chaine : ");
	fgets(chaine, 80, stdin);
	fputs(chaine, stdout);
	printf("La longueur de la chaine : %d\n", getLength(chaine));
	isPalindrome(chaine) == 1 ? printf("%s est un palindrome\n", chaine) : printf("%s n'est pas un palindrome\n", chaine);
}
