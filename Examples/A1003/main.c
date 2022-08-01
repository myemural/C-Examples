/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Sembolik Sabitler (Symbolic Constants)
*/

#include<stdio.h>

#define SAYI 100 // sembolik sabit (symbolic constants)
#define YENI (SAYI-50)
#define MESAJ "Bu bir sembolik sabit kodudur.\n"

int main()
{
    int a=YENI*3;
    
    printf("%d\n",a);
    printf(MESAJ);
    
    return 0;
}

/*
- Sembolik sabitler nesne de�ildir. 
- Derleme mod�l�ne giren kaynak kodda sembolik sabitler yerine bunlar�n yerini say�sal ifadeler alm�� olur.
- "#define" komutu ile ancak de�i�kenler ve anahtar s�zc�kler yer de�i�tirilebilir. Sabitler ve operat�rler yer de�i�tiremez. 
- Sembolik sabitler C dilinin de�i�ken isimlendirme kurallar�na uygun olarak isimlendirilir.
*/
