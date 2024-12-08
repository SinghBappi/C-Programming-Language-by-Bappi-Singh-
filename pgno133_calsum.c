#include<stdio.h>
      float calsum(float x,float y,float z){
        float d=x+y+z;
        return d;
         
     }

int main(){
    float x,y,z,sum;
    printf("x:\n");
    scanf("%f", &x);

    printf("y:\n");
    scanf("%f", &y);


    printf("z:\n");
    scanf("%f", &z);
    sum=calsum(x,y,z);
    printf("%f\n",sum);
    

    
    return 0;
}