/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Rakam veya De�il (Digit or Not)
*/

#include<stdio.h>

int main()
{
    printf("Lutfen bir rakam girin: ");
    
    int r;
    scanf("%d",&r);
    
    switch(r)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5: 
    case 6:
    case 7:
    case 8:
    case 9: 
         {
         printf("Bu bir rakamdir.\n"); // Girilen t�m de�erler i�in bu kod ge�erlidir.
         break;  
         }   
    default:
         {
         printf("Belirsiz...\n");
         break;  
         } 
    }
    
    return 0;
}
