#include <stdio.h>

   enum tur {pop, rock, klasik, rb, folk} ;

struct sarki{
    char sarkiAd;
    char sarkici;
    short yil;
    enum tur sarkiTur;
};

struct sarki sarkiOlustur (char a, char s, short yil, enum tur stur){

struct sarki sarkilar;
sarkilar.sarkiAd=a;
sarkilar.sarkici =s;
sarkilar.yil=yil;
sarkilar.sarkiTur = stur;
return sarkilar;
}

void printSarki(struct sarki s){
    printf("sarki adi: ", s.sarkiAd);
    printf("sarkici: ", s.sarkici);
    printf("sarki yili: ", s.yil);
    printf("sarki tur: ", s.sarkiTur);
   
}
int main(){
    struct sarki sarki1, sarki2, sarki3;
    sarki1=sarkiOlustur('a','y',2000, pop);

    printSarki(sarki1);
}

