#include <stdio.h>
 float power(float x,int y)
 { float p=1;
  for (int i = 1; i <=y; i++) { 
    
    p=p*x;
  
   }
   return(p);
   
    } 
 int main(){
     int x; 
     float y,po; 
     printf("x:\n"); 
     scanf("%d",&x); 
     printf("y:\n"); 
     scanf("%f", &y);
      po=power(y,x); 
      printf("Power:%f\n",po); 
      return 0;
       }

// #include <stdio.h>

// // Function to calculate power
// float power(float x, int y) {
//     float p = 1;
//     for (int i = 1; i <= y; i++) {
//         p = p * x;
//     }
//     return p; // Return outside the loop
// }

// int main() {
//     int x;
//     float y, po;

//     // Prompt the user to enter values
//     printf("Enter the exponent (integer x): ");
//     scanf("%d", &x);
//     printf("Enter the base (float y): ");
//     scanf("%f", &y); // Correct format specifier for float

//     // Calculate the power
//     po=power(y,x);

//     // Print the result
//     printf("Result of %.2f raised to the power of %d is: %.2f\n", y, x, po);

//     return 0;
// }
