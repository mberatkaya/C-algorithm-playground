#include <stdio.h>

struct Ogrenci {
    char ad[30];
    int notu;
};

int main() {
    struct Ogrenci ogrenci1;

    printf("Ogrenci Adi: ");
    scanf("%s", ogrenci1.ad);

    printf("Notu: ");
    scanf("%d", &ogrenci1.notu);

    printf("Ogrenci Adi: %s\n", ogrenci1.ad);
    printf("Notu: %d\n", ogrenci1.notu);

    return 0;
}
