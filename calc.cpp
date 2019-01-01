#include <iostream> //Nama : Umar Ibnu Zainal Muttaqin
using namespace std;
void logika(int menu, int nilai_1, int nilai_2, int hasil)
{
	if (menu==1)
	{
		hasil=nilai_1+nilai_2;
		cout<<"hasil dari "<<nilai_1<<" + "<<nilai_2<<" = "<<hasil;
	}
	else if(menu==2)
	{
		hasil=nilai_1-nilai_2;
		cout<<"hasil dari "<<nilai_1<<" - "<<nilai_2<<" = "<<hasil;
	}
	else if(menu==3)
	{
		hasil=nilai_1*nilai_2;
		cout<<"hasil dari "<<nilai_1<<" * "<<nilai_2<<" = "<<hasil;
	}
	else if(menu==4)
	{
		hasil=nilai_1/nilai_2;
		cout<<"hasil dari "<<nilai_1<<" / "<<nilai_2<<" = "<<hasil;
	}
	
}

int main()
{
	int a,b,jumlah,mode;
	cout<<"Selamat datang dikalkulator sederhana\nSilahkan pilih mode operasi\n";
	cout<<"1.Penjumlahan\n2.Pengurangan\n3.Perkalian\n4.Pembagian\n";
	cout<<"Masukan mode operasi (1-4) : ";
	cin>>mode;
	cout<<"Masukan nilai pertama : ";
	cin>>a;
	cout<<"Masukan nilai kedua : ";
	cin>>b;
	logika(mode,a,b,jumlah);
}
