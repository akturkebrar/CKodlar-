#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{

// sayýnýn asal olup olmadýðýný bulma 

  /* int i, sayi, asal=1;
   printf("sayiyi giriniz: ");
   scanf("%d", &sayi);

   for(i=2;i<sayi;i++){
   	if(sayi%i==0){
   		asal=0;
   		break;
	   }
	
   }
   if(asal==1 && sayi>1){
   	printf("asaldir.");
   	
   }
    else{
    	printf("asal degildir.");
	}
      */
      
//************************************************

// Düz yarým üçgen çizimi 
 /*  int i;
    int j;
    
  
  for(i=1;i<10;i++){
  	for(j=1;j<=i;j++){
  		printf("*");
	  }
	  printf(" \n");
  }  */
  
  //******************************************************************
 
// 1'den 100'e kadar olan tek ve çift sayýlarýn ayrý ayrý toplamý
 
 /*int i;
 int toplamtek=0;
 int toplamcift=0;
 
 for(i=1;i<100;i++){
 	if(i%2!=0){
 		

 	toplamtek=toplamtek+i;
 }
  else{
  	toplamcift=toplamcift+i;
   	
   }
   
 }
 printf("toplamtek sonuc: %d \n", toplamtek);
 printf("toplamcift sonuc: %d", toplamcift); */
 
 //***********************************************************************
 
 // Ters yarým üçgen çizme
   
 /* int i,j,giris;
   int yildiz,bosluk;
   printf("giris: ");
   scanf("%d",&giris);
   bosluk=1;
   yildiz=giris-1;
   
   for(i=0;i<giris;i++){
   	for(j=0;j<yildiz;j++){
   		printf("*");
	   }
	   for(j=0;j<bosluk;j++){
	   	printf(" ");
	   }
	   printf("\n");
	   yildiz--;
	   bosluk+=2; 
   } */
  
// Faktoriyel hesaplama

/*	int i,a;
	int faktoriyel=1;
	printf("lutfen bir sayi giriniz: ");
	scanf("%d",&a);
	
	for(i=1; i<=a; i++){
		faktoriyel=faktoriyel*i;
		printf("%d !=%d \n",i,faktoriyel);
	} */
return 0;
}

