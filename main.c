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
        scanf("%d", &tercih);
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
