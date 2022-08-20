/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Sonsuz Döngü
*/

#include<stdio.h>

int main()
{
    int i=0;
    
    while(1) // Sonsuz döngüyü belirtir.
    {
    printf("%d\n",i);
    i++;
    
    if(i==10)
    {
        break; // Döngüden çýkýþý saðlar.
    }
            
    }
    
    return 0;
}
