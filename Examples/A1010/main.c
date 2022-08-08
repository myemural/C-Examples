/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Atama ve Virgül Operatörü
*/

#include<stdio.h>

int main()
{
      int x = 3;
      x *= 3; // Ekran çıktısı "9" olacaktır.

      int y, z; // İfadeler bir arada alınıyor.

      z = 10;

      y = (z+5)*2; // Ekran çıktısı "30" olacaktır.

      printf("%d\n", x);
      printf("%d\n", y);

      return 0;
}
/*
ÖZEL AMAÇLI OPERATÖRLER:

1) "=" Operatörü(Atama): Her operatör bir değer üretir ve atama operatörü de yaptığı atama işleminin yanısıra bir değer üretir. Atama operatörünün ürettiği değer sağ taraf değerinin kendisidir. 14. seviyededir ve sağdan sola doğru ilerler.
Örnek: x = 25; // x değişkenine "25" değeri atanır.

2) "+=", "-=", "*=", "/=" Operatörleri(İşlemli Atama): Bir işlemin operandı ile işlem sonucunda üretilen değerin atanacağı nesne aynı ise işlemli atama operatörleri kullanılır. 14. seviyededir ve sağdan sola doğru ilerler.
Örnek: x += 5 // Bu ifade ile "x = x+5" ifadesi aynıdır.

3) "," Operatörü(Virgül): Birden fazla ifadeyi tek bir satırda birleştirebilir. 15. seviyededir.
Örnek: ifade1, ifade2; // İfadeler ayrı ayrı tanımlanmış gibi alınır.

4) "()" Operatörü(Öncelik): Öncelik operatörü bir ifadenin önceliğini yükseltmek amacıyla kullanılmaktadır. Öncelik operatörü de kendi arasında soldan sağa öncelik kuralına uyar. 1. seviyededir ve soldan sağa doğru ilerler.
Örnek: a = (x + 2) / ((y + 3) * (z + 2) - 1);
*/
