#include<stdio.h>

int Faktoriyel(int i)
{
	if ( i == 0 || i == 1)
	{
		return 1 ;
	}
	else
	{
		return i*Faktoriyel(i-1);
	}
}

int Fibonacci(int k)
{
	if( k <= 1)
	{
		return 1;
	}
	else
	{
		return Fibonacci(k - 1) + Fibonacci (k - 2); 
	}
}

int main()
{
	int secim;
	int sayi;
	
	while (1)
	{
		
		printf("Faktoriyel hesaplamak icin 1 i tuslayiniz \n");
		printf("Fibonacci hesabi icin 2 yi tuslayiniz \n");
		printf("Cikis yapmak icin 3 u seciniz");
		printf("Yapmak istediginiz islemi seciniz: ");
		
		scanf("%d" , &secim);
		
		if(secim == 3)
		{
			printf("Cikis yapiliyor...");
			return 0;
		}
		
		if(secim == 1)
		{
			printf("Faktoriyel icin bir deger giriniz:\n");
			scanf("%d" ,&sayi);
			printf("Girdiginiz sayinin faktoriyeli : %d" ,Faktoriyel(sayi));
			return 0;
		}
		
		if(secim == 2)
		{
			printf("Fibonacci icin bir deger giriniz: \n");
			scanf("%d" , &sayi);
			printf("Girdiginiz sayinin fibonacci degeri : %d" , Fibonacci(sayi));
			return 0;
		}
		else
		{
			printf("Gecerli bir deger giriniz... \n");
		}
	}
return 0;	
}