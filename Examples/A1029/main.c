/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Sonsuz D�ng�
*/

#include<stdio.h>

int main()
{
    int i=0;
    
    while(1) // Sonsuz d�ng�y� belirtir.
    {
    printf("%d\n",i);
    i++;
    
    if(i==10)
    {
        break; // D�ng�den ��k��� sa�lar.
    }
            
    }
    
    return 0;
}
