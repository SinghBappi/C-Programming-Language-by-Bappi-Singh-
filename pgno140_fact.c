#include<stdio.h>

int main(){
    int num,facto;
    printf("x:");
    scanf("%d", &num);

    facto=factorial(num);
    printf("%d\n",facto);
    return 0;
}
int factorial(int num){
    int i;
    int fact=1;
    for (i = 1; i <=num; i++)
    {
        fact=fact*i;

    }
    return fact;
    
}