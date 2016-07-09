# primee
#include <stdio.h>  
 main()
{ 
  int a, b, c = 0;
  printf("Enter any number");
  scanf("%d", &a); 
  for (b= 2; b <= a; b++)
 {
          if (a % b == 0) 
 {
             c++;
 }
 }
      if (c==1) 
      	printf("it is a Prime number");
      
      else 
     	 printf("it is not a Prime number");
      
      
    } 
