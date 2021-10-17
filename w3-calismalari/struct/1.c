#include <stdio.h>

struct kayit {
    char ad[10];
    long no;
    int sinif;
};

int main(){
    struct kayit ogr;
    printf("ogrenci no: "); scanf("%ld", &ogr.no);
     printf("ogrenci adi: "); scanf("%s", ogr.ad);
     printf("ogrenci sinif: "); scanf("%d", &ogr.sinif);
    

    printf("girilen bilgiler: ");
     printf("ogrenci no: "); scanf("%ld", ogr.no);
     printf("ogrenci adi: "); scanf("%s", ogr.ad);
     printf("ogrenci sinif: "); scanf("%d", ogr.sinif);

    return 0;
}