#include<stdio.h>
int main(){
    char c;
    printf("\nEnter the Value from Keyboard:");
    scanf("%c",&c);
    if(c>=65 && c<=90)
    printf("upper case\n");
    if(c>=97 && c<=122)
	printf("lower case\n");
	if(c>=48 && c<=57)
	printf("digit");
	if((c>=0 && c<48)||(c>=58 && c<=64)||(c>=91 && c<=96)||(c>=123 && c<=127))
	printf("Special");
	  return 0;
}

