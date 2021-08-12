
//atm software

#include<stdio.h>
#include<conio.h>
void main()
{    printf("\t\t ####WELCOME TO YOUR BANK####\n");

  
  int x,y;
  int num;
   
  
  printf("\n ENTER YOUR CURRENT BALANCE\n");
  scanf("%d",&x);
  
  printf("1. WITHDRAW AMOUNT\n");
    printf("2. DEPOSITE AMOUNT\n");
    printf("3. exit\n");
    
     printf("enter your choice");
     scanf("%d",&num);
     switch(num)
     {
       case 1:  
     
        printf("enter your withdraw amount");
        scanf("%d",&y);
         if(x>=y)
         {
       
         // printf("your current balance is %d",x);
        x=x-y;
        
            }
        else {
        
        printf("insufficient amount");
      }
         printf(" now your current balance is %d",x);
        break;
            
     case 2:
            printf("enter your deposite amount");
         scanf("%d",&y);   
            x=x+y;
            printf("your current balance is %d",x);
            break;    
       case 3:
            
       exit(0);
          break;
     
     default :
             printf("PLEASE ENTER RIGHT OPTION");
         
       
    
 
   }
 getch();  
}
