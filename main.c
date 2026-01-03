/* 
 * Kullanicidan alinan iki tamsayinin EKOK degerini hesaplar.
 * Algoritma, büyük sayidan baslayip sayilarin çarpimina kadar olan 
 * aralikta döngü kurarak her iki sayiya da tam bölünen ilk sayiyi bulur.
 */

#include <stdio.h>

int main() {
    int sayi1, sayi2, Carpim, i, buyukolan, ekok = 1;
    
    // Kullanicidan sayilarin alinmasi
    printf("Lutfen iki sayi giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);
    
    // Aramaya baslamak için büyük olan sayiyi belirliyoruz.
    // EKOK, sayilardan küçük olamayacagi için döngüyü büyük sayidan baslatmak performansi artirir.
    if (sayi1 > sayi2) {
        buyukolan = sayi1;
    } else {
        buyukolan = sayi2;
    }
    
    // EKOK'un alabilecegi maksimum deger, iki sayinin çarpimidir.
    // Bu, döngünün üst sinirini belirler.
    Carpim = sayi1 * sayi2;
    
    // Büyük sayidan baslayarak çarpimlarina kadar kontrol ediyoruz.
    for (i = buyukolan; i <= Carpim; i++) {
        
        // Eger sayi (i), her iki sayiya da tam bölünüyorsa EKOK bulunmustur.
        if (i % sayi1 == 0 && i % sayi2 == 0) {
            ekok = i;
            break; // En *küçük* kati aradigimiz için ilk buldugumuzda döngüden çikiyoruz.
        }
    }
    
    printf("Iki sayinin EKOK'u = %d", ekok);

    return 0;
}
