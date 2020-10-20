/* Program Menghitung Segituga Siku-Siku */
	/* Made with <3 by Isa Iman Muhammad*/
		/* NIM = 20051397019 */
			/* Kelas 2020A D4 Manajemen Informatika */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()

	{

		int jawab, Menu, A, T, L, K, H, S, M, Y, Akhir;
		float panjang_sisi_miring, luas, keliling,P;
		
		P = 0.5;
		Menu :
			cout << "======================================\n";
			cout << "PROGRAM MENGHITUNG SEGITIGA SIKU-SIKU\n";
			cout << "======================================\n";
			cout << "\n \n";
			cout << "MENU SEGITIGA SIKU-SIKU\n";
			cout << "1. Panjang Sisi Miring\n";
			cout << "2. Luas\n";
			cout << "3. Keliling\n";
			cout << "4. Keluar Program\n";
			cout << "\n \n";
			cout << "Masukkan Menu yang Anda Inginkan = "; cin >> Menu;
		
		
		switch (Menu)
		{
			case 1:
			{
				cout << "\nMENGHITUNG SISI MIRING\n";
				cout << "=========================\n";
				cout << "\n \n";
				cout << "Alas (sisi siku - siku pertama) = "; cin >> A;
				cout << "Tinggi (sisi siku - siku kedua) = "; cin >> T;
				M = pow(A, 2) + pow(T, 2); 
				S = sqrt(M);
				cout << "Sisi Miring Segitiga = " << S;
				cout << "\n \n";

			}
		}

		switch (Menu)
		{
			case 2:
			{
				cout << "\nMENGHITUNG LUAS\n";
				cout << "==================\n";
				cout << "\n \n";
				cout << "Alas (sisi siku - siku pertama) = "; cin >> A;
				cout << "Tinggi (sisi siku - siku kedua) = "; cin >> T;
				L = P * A * T;
				cout << "Luas Segitiga Siku - Siku = " << L;
				cout << "\n \n";				
			}
		}
		switch (Menu)
		{
			case 3:
			{
	
				cout << "\nMENGHITUNG KELILING\n";
				cout << "======================\n";
				cout << "\n \n";
				cout << "Alas (sisi siku - siku pertama) = "; cin >> A;
				cout << "Tinggi (sisi siku - siku kedua) = "; cin >> T;
				K = pow(A, 2) + pow(T, 2);
				S = sqrt(K);
				H = A + T + S;
				cout << "Keliling Segitiga Siku - Siku = " << H;
				cout << "\n \n";

			}
		}
		switch (Menu)
		{
			case 4:
			
			{
                 int jawab;
                 cout<<"\n";
                 cout<<"Apakah Anda Yakin Ingin Keluar dari Program Ini??? \n";
                 cout<<"1. Ya \n";
                 cout<<"2. Tidak (Kembali ke Menu Utama)\n";
                 cout<<"Masukkan pilihan anda ";
                 cin>>jawab;
                 	if (jawab==1)
                 		goto Akhir;
                 	if (jawab==2)
                 		goto Menu;
  
            }
                
		}
		Akhir :
			cout << "Terimakasih Sudah Menggunakan Program Ini :)\n \n";
			cout << "Good Luck ! ! !\n \n";
			cout << "Tekan ENTER untuk melanjutkan . . .\n \n \n";

		getch();
	}
	
