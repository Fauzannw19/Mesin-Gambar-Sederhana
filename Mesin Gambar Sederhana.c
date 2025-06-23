/*
	Program	   : Input Gambar.c
	Author     :<3411221039> < Fauzan wicaksono >
			    <3411221041> < Aslamul Fikri Alfirdausi >
       		 	<3411221062> < Herly Setiawan Nurhidayat >
	Tanggal    : 29 Desember 2022
	Deskripsi  : Program Membuat Mesin Gambar Sederhana
*/

//prepocessor
#include <stdio.h>
#include <windows.h>

//konstanta
#define Garis      "<==============================================================================>"
#define Deskripsi  " |                   Program Mesin gambar sederhana                           | "
#define Deskripsi2 " |                             Kelompok 8                                     | "

//main driver
int main(){
	//kamus
	char T;
	int x, y;
	
	//algoritma
	x = 65;
	y = 35;
	
	printf("%s\n",Garis);
	printf("%s\n",Deskripsi);
	printf("%s\n",Deskripsi2);
	printf("%s\n",Garis);
	
	printf(" Keterangan Program : \n");
    printf(" [ Tekan W Bergerak Ke Atas  ]	|  [ Tekan Q Bergerak Menyerong Kiri Atas   ]\n");
    printf(" [ Tekan S Bergerak Ke Bawah ]  |  [ Tekan E Bergerak Menyerong Kanan Atas  ]\n");
    printf(" [ Tekan A Bergerak Ke Kiri  ]	|  [ Tekan Z Bergerak Menyerong Kiri Bawah  ]\n");
    printf(" [ Tekan D Bergerak Ke Kanan ]	|  [ Tekan C Bergerak Menyerong Kanan Bawah ]\n");
	printf("%s\n",Garis);
	
	// Mendapatkan ukuran layar
    
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	
	// Memposisikan "(+)" Pada tengah layar
	COORD cursor_position;
	cursor_position.X = x/2;
	cursor_position.Y = y/2;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), cursor_position);
	printf("+");

	// Menampilkan atau mencetak "(+)" Sebanyak Tombol Yang Di Tekan dengan arah sesuai keinginan
	while (1){
		T = getch();
		if (T == 'w'){
			cursor_position.Y--;
			SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), cursor_position);
			printf("+");
		}
		else if (T == 's'){
			cursor_position.Y++;
			SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), cursor_position);
            printf("+");
		}
		else if (T == 'd'){
			cursor_position.X++;
			SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), cursor_position);
			printf("+");
		}
		else if (T == 'a'){
			cursor_position.X--;
			SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), cursor_position);
			printf("+");
		}
		else if (T == 'z'){
			cursor_position.Y++;
			cursor_position.X--;
			SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), cursor_position);
			printf("+");
		}
		else if (T == 'q'){
			cursor_position.Y--;
			cursor_position.X--;
			SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), cursor_position);
			printf("+");
		}
		else if (T == 'e'){
			cursor_position.Y--;
			cursor_position.X++;
			SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), cursor_position);
			printf("+");
		}
		else if (T == 'c'){
			cursor_position.Y++;
			cursor_position.X++;
			SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), cursor_position);
			printf("+");
		}
	}

	return 0;
}
