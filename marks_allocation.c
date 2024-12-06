//Method 1;
#include<stdio.h>
int main(){
	int m1,m2,m3,m4,m5,per;
	
	printf("Enter the Marks Of Hindi Subject:");
	scanf("%d",&m1);
	
	printf("Enter the Marks Of Marathi Subject:");
	scanf("%d",&m2);
	
	printf("Enter the Marks Of Maths Subject:");
	scanf("%d",&m3); 
	
	printf("Enter the Marks Of English Subject:");
	scanf("%d",&m4);
	
	printf("Enter the Marks Of Chinese Subject:");
	scanf("%d",&m5);
	
	per=(m1+m2+m3+m4+m5)*100/500;
	
	if(per>=60){
		printf("First Division");
	}
	else if(per>=50){
		printf("Second Division");
	}
	else if(per>=40){
		printf("Third Division");
	}
	else{
		printf("You Are FAIL Muskan Singh");
	}
	return 0;
}

