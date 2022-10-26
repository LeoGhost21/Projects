/* Programmer: Malvin Leonardo Hartanto */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("\tMIND READER GAME\n");
	printf("1. Pikirkan angka pertama (antara 10 s/d 99).\n");
	printf("2. Pikirkan angka kedua, didapat dari digit pertama + digit kedua.\n");
	printf("3. Pikirkan angka ketiga, didapat dari angka pertama - angka kedua.\n");
	printf("4. Temukan simbol dari ANGKA KETIGA mu.\n");
	printf("5. Tekan enter untuk pembuktian apakah komputer berhasil menebak pikiranmu dengan menampilkan simbol yang benar.\n\n");
	
	srand(time(NULL));
	int answer = rand() % 15 + 33;
	for (int a = 99; a >= 0; a--)
	{
		int random = rand() % 15 + 33;
		
		if (a % 9 == 0)
			printf("%4d = %c ", a, answer);
		else
			printf("%4d = %c ", a, random);
		
		if (a % 10 == 0)	
			printf("\n");
		
	}
	
	printf("\nTiap angka di atas mewakili sebuah karakter\n");
	printf("Tekan Enter Untuk Melihat Karakter Dari Angka Yang Anda Pikirkan !!!");
	
	char temp;
	scanf("%c", &temp);
	printf("Karakter = %c\n", answer);
	
	return 0;
}	
