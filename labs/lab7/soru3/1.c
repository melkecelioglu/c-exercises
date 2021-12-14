#include <stdio.h>

struct Personel{
    char *ad;
    char *soyad;
    int maas;
    short yas;
    short calismaYili;
};

struct Personel personelOlustur(char *a, char *s, int m, short y, short c){
    struct Personel p;
    p.ad=a;
    p.soyad=s;
    p.maas=m;
    p.yas=y;
    p.calismaYili=c;
    return p;
    
}

void printPersonel(struct Personel p){
    printf("adi: %s", p.ad);
    printf("soyadi: %s",p.soyad);
    printf("maas: %d", p.maas);
    printf("yas: %d", p.yas);
    printf("calima yili: %d", p.calismaYili);

}

void enYuksekMaasPer(struct Personel* per, int n){
    int i;
    int max=per[0].maas;
    for(i=1;i<n;i++){
        if(per[i].maas>max){
            max=per[i].maas;
                }
            printf("en yuksek maas: %d", max);
        }
}


void zamYap(struct Personel* per, int n){
    int i;
    for(i=1;i<n;i++){
        if(per[i].calismaYili>10){
          per[i].maas*=1.10;
        }

         else if(per[i].calismaYili>5){
            per[i].maas*=1.05;
            }        
        }
}

int main(){
    struct Personel perDizi[5];
    perDizi[0]=personelOlustur("ali", "can",6000, 26,6);
    perDizi[1]=personelOlustur("selim", "al",4000, 24,3);
    perDizi[2]=personelOlustur("ucuncu", "kisi",15000, 39,16);
    perDizi[3]=personelOlustur("dorduncu", "kisi",10000, 26,11);
    
    int i;
    zamYap(perDizi,4);
    for(i=0;i<4;i++){
printPersonel(perDizi[i]);   
}enYuksekMaasPer(perDizi,5);
}