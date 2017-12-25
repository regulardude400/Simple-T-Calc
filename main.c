#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   int choice = 1;
   float n, sum=0;
   char buffer[20];

   printf("\nWelcome to Simple-T-Calc\n");
      
   while(((isdigit(choice)==0) && (choice == 1)) || ((isdigit(choice)==0) && (choice == 2)) || ((isdigit(choice)==0) && (choice == 3)) || ((isdigit(choice)==0) && (choice == 4))){
    
   printf("Type:\n1 to add\n2 to subtract\n3 to divide\n4 to multiply\n5 to quit program.\n\n"); 

   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer, "%d", &choice);
   
   switch(choice)
      {
         case 1:
                     printf("Adding...\n");
                     fgets(buffer, sizeof(buffer), stdin);
                     sscanf(buffer, "%f", &n);
                     if(isdigit(n) == 0){ 
                     sum += n;
                     printf("Total = %f\n\n", sum);}
                     else{printf("Not a number!\n");}
                     break;
         
         case 2:  
                     printf("Subtracting...\n");
                     fgets(buffer, sizeof(buffer), stdin);
                     sscanf(buffer, "%f", &n); 
                     if(isdigit(n) == 0){ 
                     sum -= n;
                     printf("Total = %f\n\n", sum);}
                     else{printf("Not a number!\n");}
                     break;
        
         case 3:  
                     printf("Dividing...\n");
                     fgets(buffer, sizeof(buffer), stdin);
                     if(isdigit(n) == 0){ 
                     sscanf(buffer, "%f", &n); 
                     sum /= n;
                     printf("Total = %f\n\n", sum);}
                     else{printf("Not a number!\n");}
                     break;
   
         case 4:
  
                     printf("Multiplying...\n");
                     fgets(buffer, sizeof(buffer), stdin);
                     sscanf(buffer, "%f", &n); 
                     if(isdigit(n) == 0){ 
                     sum *= n;
                     printf("Total = %f\n\n", sum);}
                     else{printf("Not a number!\n");}
                     break;
         
         case 5:
                  printf("Quitting...\nThanks for using Simple-T-Calc\n");
                  printf("Last Value Calculated = %f\n", sum);
                  exit(0);

         default: printf("Not a valid choice.\n");
                  printf("Please enter a valid choice.\n");
      }
   }   
  return 0; 
}
