/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Aritmetik Operatörler
*/

#include <stdio.h>

int main()
{
    int x=10;
    int y=x+2;
    
    printf("%d\n",y);
    
    int a=-5;
    int b=a-5;
    
    printf("%d\n",b);
    
    int c = 15 % 4;
    
    printf("%d\n",c);
    
    short d=3;
    d++;
    
    printf("%d\n",d);
    
    return 0;      
}
/*
ARİTMETİK OPERATÖRLER:

1) "+" ve "-" Operatörleri(Toplama - Çıkarma): İki operand alan araek operatörlerdir (binary infix). 4. seviyededirler. Soldan sağa işlem yaparlar. Yan etkileri yoktur.
Örnek: x=a + b;

2) "+" ve "-" Operatörleri(İşaret): Tek operand alan önek operatörlerdir (unary prefix). 2. seviyededirler. Sağdan sola işlem yaparlar. Yan etkileri yoktur.
Örnek: y = -2;

3) "*" ve "/" Operatörleri(Çarpma - Bölme): İki operand alan araek operatörlerdir (binary infix). 3. seviyededirler. Soldan sağa işlem yaparlar. Yan etkileri yoktur.
Örnek: x= a * b;

4) "%" Operatörü(Modül): İki operand alan araek bir operaötördür (binary infix). Operatörlerin her ikisinin de türü de tamsayı türlerinden (char, short, int, long) biri olmak zorundadır. 3. seviyededirler. Soldan sağa işlem yaparlar. Yan etkileri yoktur.
Örnek: c = 15 % 4; // Burada c'ye 3 değeri atanacaktır.

5) "++" ve "--" Operatörleri(Artırma - Eksiltme): Tek operand alırlar. Önek ya da sonek durumunda bulunabilirler. 2. seviyededirler. Sağdan sola işlem yaparlar. Yan etkileri vardır.
Örnek: a++;
*/
