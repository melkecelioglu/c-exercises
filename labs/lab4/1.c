//1-9 aralığına 1000 adet sayı üretiniz. 
//Sayıların üretilme sıklıklarını gösteren kodu yazınız.

/*#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 1000 adet sayi uret
int main(){

    srand(time(NULL));

    for(int i=0;i<1000; i++){
        int num = rand()%10;
        printf("num = %d\n", num);
        
    }

    return 0;
}
*/

//
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
    int counts[10];
    int i, random;

    srand(time(0));

    for (i = 0; i < 10; i++)
        counts[i] = 0;

    for(int i=0;i<1000; i++){

        int num = rand()%10;
        printf("num = %d\n", num);
    }

    for (i = 0; i<1000; i++)

        printf("%d occurs %f%%\n", i, i/100.0);

    return(0);

}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    void frekans1();
    int random1();
    int main(){
        frekans1();

        return 0;
    }


int random1(){
    srand(time(NULL));
    int num = rand()%10;

   return num; 

}
void frekans1(){

    int frekans[10]={0};
    int i;
    int num;
    for ( i = 0; i < 100; i++)
    {
        
        num = random1();
        printf("%d", num);
        frekans[num]++;
        

            }
    for (i = 0; i < 100; i++)
    {
        printf("%d\n",frekans[i]);
    }
    

}

// samil in kismi burada bitiyor


void yazdir(int dizi[0]){

int i,j;
for ( i = 1; i < 9; i++)
{
  for ( j = 0; j < count; i++)
  {
      /* code */
  }
  
}


}