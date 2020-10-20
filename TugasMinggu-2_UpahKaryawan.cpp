/* Program Menghitung Upah Karyawan */
	/* Made with <3 by Isa Iman Muhammad*/
		/* NIM = 20051397019 */
			/* Kelas 2020A D4 Manajemen Informatika */
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    int jam_kerja, jam_lembur = 0, gaji = 0, gaji_tanpa_lembur = 0, gaji_keseluruhan = 0, jam_kerja_tanpa_lembur = 0, upah_lembur = 0;
    char nama[20], golongan;

    cout << "\nNama Karyawan      : ";
    cin >> nama;
    cout << "Golongan [A/B/C/D] : ";
    cin >> golongan;
    cout << "Jumlah Jam Kerja   : ";
    cin >> jam_kerja;
    cout << endl;

    {
        if (golongan == 'A') {
            gaji_tanpa_lembur = 5000;
        }
        else if (golongan == 'B') {
            gaji_tanpa_lembur = 7000;
        }
        else if (golongan == 'C') {
            gaji_tanpa_lembur = 8000;
        }
        else if (golongan == 'D') {
            gaji_tanpa_lembur = 10000;
        }

        gaji = gaji_tanpa_lembur * 48;
    }

    if (jam_kerja > 48)
    {
        jam_lembur = jam_kerja - 48;
        jam_kerja_tanpa_lembur = 48;
    }
    else
    {
        jam_kerja_tanpa_lembur = jam_kerja;
    }

    upah_lembur = jam_lembur * 4000;

    //Gaji Total Karyawan
    gaji_keseluruhan = gaji + upah_lembur;

    cout << "====================================";
    cout << "\n  Hasil Penghitungan Gaji Karyawan";
    cout << "\n====================================";
    cout << endl;
    cout << "Nama Karyawan    : " << nama << endl;
    cout << "Gaji Kerja       : Rp " << gaji << endl;
    cout << "Uang Lembur      : Rp " << upah_lembur << endl;
    cout << "Gaji Keseluruhan : Rp " << gaji_keseluruhan << endl;
    getche();
}
