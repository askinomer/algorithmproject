#include "Fonksiyonlar.h"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){    
  int tercih;

do{
printf("\n|-------------------------------|\n");
        printf("|   Kutuphane Yonetim Sistemi   |\n");
        printf("|-------------------------------|\n");
        printf("| 1. Kitap Ekleme               |\n");
        printf("| 2. Kitap Goruntuleme          |\n");
        printf("| 3. Kitap Arama                |\n");
        printf("| 4. Kitap Cikarma              |\n");
        printf("| 5. Kitap Duzenleme            |\n");
        printf("| 6. Kitaplari Dosyaya Yaz      |\n");
        printf("| 7. Cikis                      |\n");
        printf("|-------------------------------|\n");
        printf("Tercihinizi giriniz: ");
        if (scanf("%d", &tercih) != 1) { //scanf değeriyle bir tam sayı dışında bir değer alınırsa koşul ifadesi true olacagından alt satırdaki işlemler devreye girer.
            printf("Hatali giris! Lutfen sadece rakam kullaniniz.\n");
            scanf("%*s"); //burda kullanıcının girdigi veriyi temizlemek için *s kullandık çünkü veriyi okur ama atanacak yere kaydetmez.
            continue; .
        }

 switch (tercih) {
            case 1:
                eklekitap();
                break;
            case 2:
                kitapgorunumu();
                break;
            case 3:
                arakitap();
                break;
            case 4:
                cikarkitap();
                break;
            case 5:
                kitapDuzenle();
                break;
            case 6:
                kitaplariDosyayaYaz("Kitaplar1"); // Kitapları "kitaplar.txt" dosyasına yaz
                break;
            case 7:
                printf("Programdan cikiliyor!\n");
                break;
            default:
                printf("Hatali secim.Lutfen dogru rakami giriniz(1-7).\n");
        }
    } while (tercih != 7);

    return 0;
}
