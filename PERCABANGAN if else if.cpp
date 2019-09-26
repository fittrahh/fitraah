#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int x,y,pilihan;
	int penjumlahan,pengurangan;
	float perkalian,pembagian;
	cout<<"======================== \n";
	cout<<"=== FITRAH ABU KHAER === \n";
	cout<<"======================== \n \n";
	
	cout<<"[1]Penjumlahan \n";
	cout<<"[2]Pengurangan \n";
	cout<<"[3]Perkalian \n";
	cout<<"[4]Pembagian \n\n";
	cout<<"Masukkan Pilihanmu";
	cin>>pilihan;
	if(pilihan==1){
		cout<<"Bilangan 1 ="; cin >> x;
		cout<<"Bilangan 2 ="; cin >> y;
		penjumlahan=x+y;
		cout<<"Hasilnya adalah : " << penjumlahan;
	}
	else if(pilihan==2){
		cout<<"Bilangan 1 ="; cin >> x;
		cout<<"Bilangan 2 ="; cin >> y;
		pengurangan=x-y;
		cout<<"Hasilnya adalah : " << pengurangan;
	}
	else if(pilihan==3){
		cout<<"Bilangan 1 ="; cin >> x;
		cout<<"Bilangan 2 ="; cin >> y;
		perkalian=x*y;
		cout<<"Hasilnya adalah : " << perkalian;
	}
	else if(pilihan==4){
		cout<<"Bilangan 1 ="; cin >> x;
		cout<<"Bilangan 2 ="; cin >> y;
		pembagian=x/y;
		cout<<"Hasilnya adalah : " << pembagian;
		cout<<endl;
	}
	else{
		cout<<"Masukkan Anda Salah";
	}
	getch();
	return 0;
}
