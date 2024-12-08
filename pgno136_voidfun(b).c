#include<stdio.h>
    void fun(int b){
          b=90;
        printf("%d\n",b);
    }
int main(){
    int a=80;
    fun(a);
    printf("a:%d\n",a);
    
    return 0;
}
