#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>
using namespace std;

struct mahasis
{
	char nama [30];
}; 

mahasis ueu; 
char arr[15], arr2[15], arr3[15];

int garis()
{
	for(int i=0; i<70; i++)
	{
		cout<<"=";
	}
	cout<<endl;
}

void men()
{
	cout<<"\t  Menu File Stream untuk Akses File"<<endl;
	cout<<"===================================================="<<endl;
	cout<<"Silahkan pilih kode yang Anda inginkan:"<<endl;
	cout<<"[1] Input Data\n";
	cout<<"[2] Tambah Data\n";
	cout<<"[3] Baca Data\n";
	cout<<"[4] Gabung Data*\n";
	cout<<"[5] Keluar\n";
	cout<<"*/File Data yang telah digabungkan bernama 'gabung.txt'\n";
	cout<<"Masukkkan kode operasi yang ingin dijalankan : ";
}

void input_data()
{
	cout<<"Masukkan nama file (.txt): ";
	cin.getline(arr,15);//input nama file beserta ekstensi filenya
	ofstream simpan (arr);//syntax ofstream untuk mencetak hasil di file yang namanya telah dimasukan
	system("cls");
	cout<<"\nNama Mahasiswa\t    : ";
	cin.getline(ueu.nama,30);//input nama mahasiswa
	simpan<<ueu.nama<<endl;//memanggil objek simpan yang berfungsi menjalankan syntax ofstream sehingga mencetak nama di file
	cout<<"\n\n\n"; system("PAUSE");//system pause berfungsi untuk menahan layar program agar tidak langsung ke close saat menampilkan hasil
}

void tambah_data()
{
	cout<<"Masukkan nama file (.txt): ";
	cin.getline(arr,15);
	ofstream simpan (arr, ios::app);//Ios append yang berfungsi mencetak hasil penambahan data ke dalam file yang sama tanpa menimpa data yang sudah ada sebelumnya
	system("cls");
	cout<<"\nNama Mahasiswa\t    : ";
	cin.getline(ueu.nama,30);
	simpan<<ueu.nama<<endl;
	cout<<"\n\n\n"; system("PAUSE");
}

void baca_data()
{
	cout<<"Masukkan nama file (.txt): ";
	cin>>arr;
	ifstream buka (arr);//syntax ifstream yang berfungsi untuk input dari sebuah file
	if(buka.good())//jika file tidak corrupt
	{
		while(!buka.eof())//melakukan perulangan sampai akhir dari file
		{
			system("cls");
			while(buka)//perulangan sampai file yg digunakan untuk input selesai
			{ 
				buka.getline(ueu.nama,30);	
				cout<<ueu.nama<<endl;
			}
		}
		cout<<"\n\n\n"; system("PAUSE");
	}
	else cout<<"file tidak ada"<<endl;
	getch();
}

void gabung_data()
{
	cout<<"Masukkan nama file ke-1 (.txt): ";
	cin.getline(arr2,15);
	cout<<"Masukkan nama file ke-2 (.txt): ";	
	cin.getline(arr3,15);
	ifstream buka1 (arr2);
	ifstream buka2 (arr3);
	
	ofstream gabung("gabung.txt");
	ofstream gabung2("gabung.txt", ios::app);
	
	while(buka1)
	{
		buka1.getline(ueu.nama,30);	
		gabung<<ueu.nama<<"\n";
	} 
	gabung.close(); //harus di close karena sedang mengoperasikan file yang sama
	/*objectfstream.close() berfungsi untuk menutup file yang sedang dioperasikan*/
	while(buka2)
	{
		buka2.getline(ueu.nama,30);	
		gabung2<<ueu.nama<<"\n";
	}
	gabung2.close();
} 

void p10l2(){
	char kode;
	cout<<"============================================"<<endl;
	cout<<"|    Program Pengoperasian Data (FSTREAM)  |"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"|              Nama : Hendy                |"<<endl;
	cout<<"|            NIM : 20170801143             |"<<endl;
	cout<<"============================================"<<endl;
	system("PAUSE");
	data_aku:
	system("cls"); men(); cin>>kode; cin.ignore(); system("cls");
	/*system cls untuk membersihkan layar menjadi kosong*/
   	switch (kode)//pemilihan pengoperasian data
   	{
   		case '1': input_data(); goto data_aku;
   		case '2': tambah_data(); goto data_aku;
		case '3': baca_data(); goto data_aku;
		case '4': gabung_data(); goto data_aku;
		case '5': cout<<"\nTerima Kasih Karena Telah Menggunakan Program!!!\n"; break;//break berfungsi untuk keluar dari pemilihan sehingga tidak terjadi looping lagi
   	 	default : cout<<"\n\n\tMaaf, Kode operasi yang dimasukan salah!!!\n\n"; 
				 system("PAUSE"); goto data_aku;
   	}
   	getch();
}

struct mahasiswam
{
	char nama[20];
	int nim;
	int umur;
	float ipk;
} mhs;

void tampil()
{
	cout<<"---Input---\n\n";
	cout<<"NIM  = "<<mhs.nim<<endl;
	cout<<"Nama = "<<mhs.nama<<endl;
	cout<<"Umur = "<<mhs.umur<<endl;
	cout<<"IPK  = "<<mhs.ipk;
}

void input()
{
	cout<<"---Input---\n\n";
	cout<<"Masukan NIM   : "<<endl; cin>>mhs.nim;
	cout<<"Masukan Nama  : "<<endl; scanf(" %[^\n]s",mhs.nama);
	cout<<"Masukan Umur  : "<<endl; cin>>mhs.umur;
	cout<<"Masykan Ipk   : "<<endl; cin>>mhs.ipk;
}

void p10l1(){
	cout<<"Selamat Datang"<<endl;
	system("pause");
	input();
	tampil();
	getch();
}

int LuasPersegi(int p, int l){
	int luas;
	luas = p * l;
	return luas;
}

void p6l2(){
	int a,b;
	cout << "Masukan Panjang : ";
	cin >> a;
	cout << "Masukan Lebar   : ";
	cin >> b;
	cout << "Luas Persegi    : "<<LuasPersegi(a,b);
	getch();
}

void luaspersegi(){
	int panjang, lebar;
	cout << "Masukan Panjang : ";
	cin >> panjang;
	cout << "Masukan Lebar   : ";
	cin >> lebar;
	cout <<"Luas Persegi     : "<<panjang*lebar;
}

void p6l1(){
	luaspersegi();
	getch();
}

void p5l2(){
	int i = 1;
	while (i < 20){
		if(i%2==0)
		cout << i << " ";
		i++;
	}
	getch();
}

void p5l1(){
	for(int i=1; i<10;i++){
	cout << i << " ";
	}
	getch();
}

void p3l1(){
	int angka;
	
	cout << "Masukan Angka = " ;
	cin >> angka;
	
	
	if(angka>=0){
		cout << "\nBilangan ini positif";
	}else {
		cout << "\nBilangan ini negatif";
	}
	getch();
}

void p2l4(){
	int nilai;
	cout << "Input Nilai Mata kuliah	= ";
	cin >> nilai;
	
	if(nilai>=60){
		cout << "LULUS\n";
	}
	else {
		cout << "TIDAK LULUS\n\n";
	}
	
	cout << "Program Selesai";
	
	getch();
}

void p2l3(){
	int nilai;
	cout << "Input Nilai Mata kuliah = ";
	cin >> nilai;
	if(nilai>=85 && nilai <= 100){
		cout << "LULUS";
		cout << "\nGrade A";	
	}if(nilai>=75 && nilai < 85){
		cout << "LULUS";
		cout << "\nGrade B";
	}if(nilai>=60 && nilai < 75 ){
		cout << "LULUS";
		cout << "\nGrade C";
	}if(nilai>=45 && nilai < 60 ){
		cout << "GAGAL";
		cout << "\nGrade D";
	}if(nilai>=0 && nilai < 45 ){
		cout << "GAGAL";
		cout << "\nGrade E";
	}if(nilai<0 || nilai >100 ){
		cout << "\nInput Nilai Antara 0 - 100";
	}
	
	getch();
}

void p2l2(){
	int a, b, max;
	cout << "Program Mencari Bilangan Terbesar\n";
	cout << "Input Nilai 1 \t\t= ";
	cin >> a;
	cout << "Input Nilai 2 \t\t= ";
	cin >> b;
	
	if(a>b){
		max = a;
	}else{
		max = b;
	}
	cout << "Nilai Terbesar adalah	= " << max;
	
	
	getch();
}

void p2l1(){
	int jari;
	float luas, panjang, lebar;
	cout <<"Input Panjang Persegi Panjang\t = ";
	cin >> panjang;
	cout <<"Input Lebar Persegi Panjang\t = ";
	cin >> lebar;
	
	luas = panjang * lebar;

	
	cout <<"\nLuas Persegi Panjang \t\t = "<< luas;

	
	getch();
}

void p1l1(){
	int nik [30];
	char nama [30];
	char TTL [20];
	char JK [20];
	char Alamat [50];
	char rtrw [50];
	char kel [50];
	char kec [50];
	char agama [50];
	char SP [50];
	char pekerjaan [50];
	char kwn[50];
	char BH[50];
	
	
	cout << ("Input Data KTP\n");
	cin.ignore();
	cout << ("Nama			:");
	cin.getline(nama,30);
	cout << ("Tempat/Tgl Lahir	:");
	cin.getline(TTL,30);
	cout << ("Jenis kelamin		:");
	cin.getline(JK,20);
	cout << ("Alamat			:");
	cin.getline(Alamat,50);
	cout << ("\tRT/RW			:");
	cin.getline(rtrw,50);
	cout << ("\tKel/Desa		:");
	cin.getline(kel,50);
	cout << ("\tKecamatan		:");
	cin.getline(kec,50);
	cout << ("Agama			:");
	cin.getline(agama,50);
	cout << ("Status Perkawinan 	:");
	cin.getline(SP,50);
	cout << ("Pekerjaan		:");
	cin.getline(pekerjaan,50);
	cout << ("Kewarganegaraan		:");
	cin.getline(kwn,50);
	cout << ("Berlaku Hingga		:");
	cin.getline(BH,50);
	
	getch();
}

void menu(){
	int pil;
	system("cls");
	cout<<"                Menu Gabungan Program-program Praktikum Bahasa Pemograman"<<endl;
	cout<<"======================================================================================"<<endl;
	cout<<"[1] Pertemuan 1 Latihan 1 (Program Input KTP)"<<endl;
	cout<<"[2] Pertemuan 2 Latihan 1 (Program Luas Persegi Panjang)"<<endl;
	cout<<"[3] Pertemuan 2 Latihan 2 (Program Bilangan Terbesar)"<<endl;
	cout<<"[4] Pertemuan 2 Latihan 3 (Program Grade)"<<endl;
	cout<<"[5] Pertemuan 2 Latihan 4 (Program Kelulusan)"<<endl;
	cout<<"[6] Pertemuan 3 Latihan 1 (Program Positif-Negatif)"<<endl;
	cout<<"[7] Pertemuan 5 Latihan 1 (Program Pencetakan Angka 1-9)"<<endl;
	cout<<"[8] Pertemuan 5 Latihan 2 (Program Deret Genap Angka 1-19)"<<endl;
	cout<<"[9] Pertemuan 6 Latihan 1 (Program Luas Persegi Panjang pakai Fungsi tak balik nilai)"<<endl;
	cout<<"[10] Pertemuan 6 Latihan 2 (Program Luas Persegi Panjang pakai Fungsi balik nilai)"<<endl;
	cout<<"[11] Pertemuan 10 Latihan 1 (Program Input Data Mahasiswa)"<<endl;
	cout<<"[12] Pertemuan 10 Latihan 2 (Program File Stream)"<<endl;
	cout<<"[13] Keluar dari Program"<<endl;
	cout<<"======================================================================================"<<endl;
	cout<<"Pilihan Anda : ";
	cin>>pil;
	if(pil==1){
		system("cls");
		p1l1();
		menu();
	}else if(pil==2){
		system("cls");
		p2l1();
		menu();
	}else if(pil==3){
		system("cls");
		p2l2();
		menu();
	}else if(pil==4){
		system("cls");
		p2l3();
		menu();
	}else if(pil==5){
		system("cls");
		p2l4();
		menu();
	}else if(pil==6){
		system("cls");
		p3l1();
		menu();
	}else if(pil==7){
		system("cls");
		p5l1();
		menu();
	}else if(pil==8){
		system("cls");
		p5l2();
		menu();
	}else if(pil==9){
		system("cls");
		p6l1();
		menu();
	}else if(pil==10){
		system("cls");
		p6l2();
		menu();
	}else if(pil==11){
		system("cls");
		p10l1();
		menu();
	}else if(pil==12){
		system("cls");
		p10l2();
		menu();
	}else if(pil==13){
		system("cls");
		cout<<"Terima kasih karena telah menggunakan Program"<<endl;
		system("pause");
	}else{
		system("cls");
		cout<<"Pilihan anda salah!"<<endl;
		system("pause");
		menu();
	}
}

void intro(){
	cout<<"=================================================================="<<endl;
	cout<<"| Program Yang Telah diajarkan Oleh kak Mia Aslab Pak Bahrul UEU |"<<endl;
	cout<<"------------------------------------------------------------------"<<endl;
	cout<<"|                           Nama : Hendy                         |"<<endl;
	cout<<"|                        NIM : 20170801143                       |"<<endl;
	cout<<"|                 Mata Kuliah : Bahasa Pemograman                |"<<endl;
	cout<<"=================================================================="<<endl;
	system("pause");
}

int main(){
	intro();
	menu();
}
