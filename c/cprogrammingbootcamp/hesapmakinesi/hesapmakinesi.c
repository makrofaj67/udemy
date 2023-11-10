#include <stdio.h>

int main ()

{
    int sayi1;
    printf("bir sayı giriniz: ");
    scanf("%d", &sayi1);
    printf("aşağıdakilerden bir işlem seçiniz: \n");
    printf("1. toplama\n");
    printf("2. çıkarma\n");
    printf("3. çarpma\n");
    printf("4. bölme\n");
    int islem;
    scanf("%d", &islem);
    if (islem == 1)
    {
        printf("toplamayı seçtiniz\n");
    }   else if (islem == 2)
    {
        printf("çıkarmayı seçtini\n");        
    }   else if (islem == 3)
    {
        printf("çarpmayı seçtiniz");
    }   else if (islem == 4);
    {
        printf("bölmeyi seçtiniz\n");
    }
        
    int sayi2;
    printf("ikinci sayıyı giriniz: ");
    scanf("%d", &sayi2);

    if (islem == 1)
    {
        printf("&sayi1");
    }   
    else if (islem == 2)
    {
        printf("çıkarmayı seçtini\n");        
    }   
    else if (islem == 3)
    {
        printf("çarpmayı seçtiniz");
    }   
    else if (islem == 4);
    {
        printf("bölmeyi seçtiniz\n");
    }
}