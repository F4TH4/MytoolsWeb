#include <iostream>
using namespace std;

int main()
{
	int pilihan;
	char ulang;
	do
	{
		cout << "   Pilihan tools algortima" << endl;
		cout << "   Powered By : Fathahazz" << endl;
		cout << "================================" << endl;
		cout << "1. Menghitunng Gaji Karyawan" << endl;
		cout << "2. Membuat Menu Berulang" << endl;
		cout << "3. Menampilkan Biodata Siswa" << endl;
		cout << "4. Menghitung Diskon Potongan Harga" << endl;
		cout << "5. Cek Tahun Kabisat" << endl;
		cout << "6. Menentukan Nama Hari" << endl;
		cout << "7. Menentukan Nama Bulan" << endl;
		cout << "8. Konversi Kilometer ke Meter" << endl;
		cout << "9. Konversi Detik Ke Menit Dan Jam" << endl;
		cout << "10. Menghitung Jumlah Huruf Vokal" << endl;
		cout << "11. Menghitung Jumlah Kata Dalam Kalimat" << endl;
		cout << "12. Membuat Kalkulator Sederhana" << endl;
		cout << "13. Menghitung Tarif Parkir" << endl;
		cout << "14. Membuat Aplikasi Kasir Sederhana" << endl;
		
		cout << endl;
		
		cout << "Masukan Pilihan Anda : ";
		cin >> pilihan;
		
		switch (pilihan) {
			case 1: {
				string nama;
				char golongan;
				int jamkerja, upahperjam, totalupah;
				
				cout << "## Tools Menghitung Gaji Karyawan ##" << endl;
				cout << "======================================" << endl;
				
				// inputan
				cin.ignore();
				cout << "Nama Karyawan : ";
				getline(cin, nama);
				
				cout << "Golongan : ";
				cin >> golongan;
				
				cout << "Jumlah jam kerja : ";
				cin >> jamkerja;
				
				//mementukan upar sesuai golongan
				switch (golongan) {
					case 'A':
						upahperjam = 5000;
						break;
					case 'B':
						upahperjam = 7000;
						break;
					case 'C':
						upahperjam = 8000;
						break;
					case 'D':
						upahperjam = 10000;
						break;
				}
				totalupah = jamkerja * upahperjam;
				
				// cek jam kerja apakah lebih 48jam
				if ( (jamkerja - 48) > 0 ) {
					totalupah = totalupah + ((jamkerja - 48)*4000);
				}
				
				// output
				cout << endl;
				cout << nama << " menerima upah Rp." << totalupah << " per minggu";
				cout << endl;
				break;
			}
					
			case 2: {
				int plh;
				char ulng;
				do
				{
					cout << "## Daftar Menu Kedai Hazz ##" << endl;
					cout << "============================" << endl;
					cout << "1. Nasi Ayam geprek" << endl;
					cout << "2. Nasi Goreng" << endl;
					cout << "3. Kwetiau Goreng" << endl;
					cout << "4. Es teh " << endl;
					cout << "5. Kopi Hitam" << endl;
					cout << "6. Es kocok" << endl;
					cout << endl;
					
					cout << "Masukan pilihan : ";
					cin >> plh;
					
					//switch
					switch (plh) {
						case 1:
							cout << "Anda memilih Nasi ayam geprek" << endl;
							break;
						case 2:
							cout << "Anda memilih Nasi geprek" << endl;
							break;
						case 3:
							cout << "Anda memilih Kwetiau goreng" << endl;
							break;
						case 4:
							cout << "Anda memilih Es Teh" << endl;
							break;
						case 5:
							cout << "Anda memilih Kopi Hitam" << endl;
							break;
						case 6:
							cout << "Anda memilih Es Kocok" << endl;
							break;
						default:
							cout << "Menu tidak tersedia" << endl;
							break;
					}
					cout << endl;
					
					cout << "Ingin memilih menu lain? y/n : ";
					cin >> ulng;
					cout << endl;
				}
				while (ulng!= 'n');
				
				cout << "Terimakasih telah memesan, pesanan segera diantarkan";
				cout << endl;
				break;
			}
			
			case 3: {
				
				string nama, nim, fakultas, jurusan, kotaasal, alamat;
				
				cout << "## Tools Biodata Mahasiswa" << endl;
				cout << "==========================" << endl;
				cout << endl;
				
				cin.ignore();
				cout << "Nama Mahasiswa : ";
				getline(cin, nama);
				
				cout << "NIM : ";
				getline(cin, nim);
				
				cout << "Fakultas : ";
				getline(cin, fakultas);
				
				cout << "Jurusan : ";
				getline(cin, jurusan);
				
				cout << "Kota Asal : ";
				getline(cin, kotaasal);
				
				cout << "Alamat : ";
				getline(cin, alamat);
				
				cout << endl;
				
				cout << "# DATA NAHASISWA" << endl;
				cout << "================" << endl;
				cout << "Nama : " << nama << endl;
				cout << "NIM : " << nim << endl;
				cout << "Fakultas : " << fakultas << endl;
				cout << "Jurusan : " << jurusan << endl;
				cout << "Kota Asal : " << kotaasal << endl;
				cout << "Alamat : " << alamat << endl;
				break; 
			}
			
			case 4: {
				
				int totalbelanja, hargaakhir;
				
				cout << "Tools Diskon Potongan Harga" << endl;
				cout << "===========================" << endl;
				cout << endl;
				
				cout << "Total belanja : Rp.";
				cin >> totalbelanja;
				cout << endl;
				
				if ((totalbelanja >= 100000) && (totalbelanja < 500000)) {
					hargaakhir = totalbelanja - (0.1*totalbelanja);
					cout << "Selamat, anda mendapat diskon 10%" << endl;
				}
				
				else if ((totalbelanja >= 500000) && (totalbelanja < 1000000)) {
					hargaakhir = totalbelanja - (0.2*totalbelanja);
					cout << "Selamat, anda mendapatkan diskon 20%" << endl;
				}
				
				else if (totalbelanja >= 1000000) {
					hargaakhir = totalbelanja - (0.3*totalbelanja);
					cout << "Selamat, anda mendapatkan diskon 30%" << endl;
				}
				
				else {
					hargaakhir = totalbelanja;
				}
				
				cout << "Total Bayar : Rp." << hargaakhir << endl;
				break;
			}
		}
		// WAJIB
		cout << endl;
		
		cout << "Ingin Memilih tools Lain? (Y/N) : ";
		cin >> ulang;
		cout << endl;
	}
	
	while (ulang!= 'n');
	
	cout << "Terimakasih telah menggunakan tools ini";
	cout << endl;
	//

	return 0;
}
