#include<stdio.h>
int main()
{
	int n;
	printf("\n age:");
	scanf("%d",&n);
	if(n>=65){
		printf("old");
	}
		else if(n<=2){
		printf("infaint");
	}
	
	else if(n>3&&n<=12){
		printf("child");
	}
	else if(n>=13&&n<=19){
		printf("teen");
	}
	else if(n>=20 && n<=64){
		printf("adult");
	
	}
	
		
	



  return 0;
}

