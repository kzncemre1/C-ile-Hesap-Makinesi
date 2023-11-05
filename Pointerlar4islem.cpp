#include<stdio.h>
#include<stdlib.h>
 



  int main(){
  	
  	float a,b,sonuc;
  	float *pa,*pb;
      int secim;
      bool devamMi= true;
      char secim2;
  	pa=&a;
  	pb=&b;
      while(devamMi)
      {
  	printf("1. sayiyi giriniz:"); scanf("%f",& *pa);
  	printf("2 sayiyi giriniz:"); scanf("%f",& *pb);
  	
  	printf("Yapilacak islemi seciniz: \n");
  	printf("Toplama icin: 1\n");
    printf("Cikarma icin: 2\n");
  	printf("Carpma icin: 3\n");
  	printf("Bolme icin: 4\n");
  	
  	scanf("%d",&secim);
  	
  	switch(secim){
  		case 1:sonuc=*pa+*pb; break;
  		case 2:sonuc=*(pa)-*(pb); break;
  		case 3:sonuc=*(pa)*(*(pb)); break;
  		case 4:sonuc=*(pa)/(*(pb)); break;
  		default :printf("Yanlıs tusladiniz"); break;
	  }
	  printf("Sonucunuz=%.2f\n",sonuc);
          printf("Devam Etmek Istiyor Musunuz? (e/h)");
          scanf("%s",& secim2);
          if(secim2=='h') devamMi= false;
          else devamMi=true;
      }
  }