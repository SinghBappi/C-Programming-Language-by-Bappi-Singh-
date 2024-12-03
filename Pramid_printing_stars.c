 #include<stdio.h>
 
 int main(){
    int r,spaces;
    printf("r:\n");
    scanf("%d", &r);
    
    for (int i = 1; i <=r; i++) {
        for (int spaces = 1; spaces <=(r-i); spaces++) {
             printf(" ");
             }

            for (int j = 1; j <=(2*i-1); j++) {
                printf("*");
                
            }
           
            
       printf("\n");
       
    }
    return 0;
 }