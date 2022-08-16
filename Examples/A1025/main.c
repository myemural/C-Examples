/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Koþul Operatörü Örneði
*/

#include<stdio.h>

int main()
{
    int a=5;
    int b=8;
    int x;
    
    x = (a<b) ? 5 : 3; // "?" operatörü solundaki ifadeyi sorgular. Eðer doðruysa "x=5" olur. Eðer yanlýþsa "x=3" olur.
    
    printf("%d\n",x);
    
    return 0; 
}
/*
KOÞUL OPERATÖRÜ(?:): 13. seviyededir ve saðdan sola doðru ilerler. "if deyimi" ile ayný iþi yapar.
*/
