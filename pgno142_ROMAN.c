#include<stdio.h>
    int Roman(int y,int k, char ch){
        int i,j=y/k;
        for ( i = 1; i <= j; i++)
        {
            printf("%c\n",ch);
        }
            return(y%k);
        
    }
int main(){
    int yr;
    printf("Enter the Year:-\n");
    scanf("%d", &yr);
    yr=Roman(yr,1000,'m');
    yr=Roman(yr,500,'d');
    yr=Roman(yr,100,'c');
    yr=Roman(yr,50,'l');
    yr=Roman(yr,10,'x');
    yr=Roman(yr,5,'v');
    yr=Roman(yr,1,'i');
     
    
    return 0;
}
