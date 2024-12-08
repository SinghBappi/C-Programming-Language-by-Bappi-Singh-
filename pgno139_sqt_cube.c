#include<stdio.h>
    float square(float x){
        float y=x*x;
        return (y);
    }
int main(){
    float x;
    printf("x:");
    scanf("%f",&x);
    float b=square(x);

    printf("%f\n",b);
    
        
    return 0;
}