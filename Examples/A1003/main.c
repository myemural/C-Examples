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
- Sembolik sabitler nesne deðildir. 
- Derleme modülüne giren kaynak kodda sembolik sabitler yerine bunlarýn yerini sayýsal ifadeler almýþ olur.
- "#define" komutu ile ancak deðiþkenler ve anahtar sözcükler yer deðiþtirilebilir. Sabitler ve operatörler yer deðiþtiremez. 
- Sembolik sabitler C dilinin deðiþken isimlendirme kurallarýna uygun olarak isimlendirilir.
*/
