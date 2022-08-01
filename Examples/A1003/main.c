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
- Sembolik sabitler nesne değildir. 
- Derleme modülüne giren kaynak kodda sembolik sabitler yerine bunların yerini sayısal ifadeler almış olur.
- "#define" komutu ile ancak değişkenler ve anahtar sözcükler yer değiştirilebilir. Sabitler ve operatörler yer değiştiremez. 
- Sembolik sabitler C dilinin değişken isimlendirme kurallarına uygun olarak isimlendirilir.
*/
