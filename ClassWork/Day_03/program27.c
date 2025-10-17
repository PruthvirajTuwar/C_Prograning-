#include<stdio.h>


void Display(int iFrequency)
 {
    
    int icnt =0;
    if (iFrequency)
    {
      printf("envalid input");
    }
    for (icnt =0; icnt <= iFrequency; icnt++)        
    {
   printf("Jay Ganesh....\n");

    }
}  


int  main ()
    { 
      
      int iCount = 0;
      printf("enter frequrncy :\n");
      scanf("%d",&iCount) ;

       Display(iCount);

       return 0;
    }
