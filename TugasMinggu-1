/* Program Billing Warnet */
	/* Made with <3 by Isa Iman Muhammad*/
		/* NIM = 20051397019 */
			/* Kelas 2020A D4 Manajemen Informatika */
			
#include<stdio.h>
#include<conio.h>			
#include<iostream>
#include<ctime>
using namespace std;
  int sisa, Total_Mulai, Total_Selesai, jam_mulai, menit_mulai, detik_mulai, jam_selesai, menit_selesai, detik_selesai, total_jam_pemakaian, total_menit_pemakaian, total_detik_pemakaian, durasi, total_pembayaran;
	main() 
  		{
  	printf("	===========================	\n");
  	printf("	===========================	\n");
	printf("	>>>	BILLING WARNET	<<< \n");
	printf("	>>>	Isa Iman NET	<<<	\n");
	printf("	===========================	\n");
	printf("	===========================	\n");
	
	printf("\n \n");
		time_t now = time(0);
		tm *ltm = localtime(&now);
		cout << " Tanggal   	: "<<  ltm->tm_mday << endl;
		cout << " Bulan    	: "<< 1 + ltm->tm_mon<< endl;
		cout << " Tahun   	: " << 1900 + ltm->tm_year<<endl;
		cout << " Time      	: "<< 1 + ltm->tm_hour << ":";
		cout << 1 + ltm->tm_min << ":";
		cout << 1 + ltm->tm_sec << endl;

	printf("===================================	\n");
	
		printf ("\n \n");

		
		printf("Tadi Mulai Jam?\n");
			printf(	"Jam Mulai	:	");
				scanf("	%i",&jam_mulai);
			printf(	"Menit Mulai	:	");
				scanf("	%i",&menit_mulai);
			printf(	"Detik Mulai	:	");
				scanf("	%i",&detik_mulai);
		Total_Mulai=(jam_mulai*3600)+(menit_mulai*60)+detik_mulai;
		printf ("\n \n");
		
		printf("Selesai Jam?\n");
			printf(	"Jam Selesai	:	");
				scanf("		%i",&jam_selesai);
			printf(	"Menit Selesai	:	");
				scanf("		%i",&menit_selesai);
			printf(	"Detik Selesai	:	");
				scanf("		%i",&detik_selesai);
		Total_Selesai=(jam_selesai*3600)+(menit_selesai*60)+detik_selesai;
			durasi=Total_Selesai-Total_Mulai;
		printf ("\n \n");		
		
		total_pembayaran=durasi*5000/3600;
			total_jam_pemakaian=durasi/3600;
			sisa=durasi%3600;
			total_menit_pemakaian=sisa/60;
			total_detik_pemakaian=sisa%60;
		printf ("\n \n");
		
		printf("LAMA PEMAKAIAN	:	\n");
			printf("	%i Jam\n", total_jam_pemakaian);
			printf("	%i Menit\n", total_menit_pemakaian);
			printf("	%i Detik\n", total_detik_pemakaian);
		printf ("\n \n");
		
		printf("TARIF	=	Rp.5000,- /Jam");
		printf ("\n \n");
			printf ("TOTAL BIAYA YANG HARUS DIBAYAR	=" );
			printf("	Rp. %i,", total_pembayaran);
		printf ("\n \n \n \n");
			printf ("TERIMA KASIH ATAS KERJASAMANYA :)");
	printf("===================================	\n");
		printf ("\n");
		
		getch();
		
	}
