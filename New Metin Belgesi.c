#include <stdio.h>

int main() {
    // 1. Bir string değişmezini (literal) işaret eden char*
    // "Merhaba" stringi bellekte bir yere yerleşir ve bu işaretçi o yerin başlangıç adresini tutar.
    char* mesaj = "Merhaba";

    // 2. Bir karakter dizisini işaret eden char*
    // Bu bir char dizisidir ve 'isim' dizisinin adı aslında ilk elemanının adresidir (char* gibi davranır).
    char isim[20] = "Ahmet";
    char* isimIsaretcisi = isim; // 'isim' dizisinin başlangıç adresini atıyoruz

    printf("Mesaj: %s\n", mesaj); // "%s" string yazdırmak için kullanılır
    printf("Isim: %s\n", isimIsaretcisi);

    // Eğer 'mesaj'ın işaret ettiği karakterlere tek tek bakarsak:
    printf("Mesajin ilk harfi: %c\n", *mesaj);        // 'M'
    printf("Mesajin ikinci harfi: %c\n", *(mesaj + 1)); // 'e' (adres 1 artırılır)

    return 0;
}