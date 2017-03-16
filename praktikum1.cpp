#include<iostream>
#include<conio.h>
using namespace std;

void penjumlahan(int a[],int b[],int c,int e) {
	int k,l;
	if(c<=e)
	l=e;
	else
		l=c;
	if(l==c) {
		k=e+1;
		for( ;k<=l;k++) {
			b[k]=0;
		}
	}
	else if(l==e) {
		k=c+1;
		for( ;k<=l;k++) {
			a[k]=0;
		}
	}
	int z;
	for(z=0;z<=l;z++) {
		a[z]=a[z]+b[z];
	}


		for(z=0;z<=l;z++)
		if(z!=l) {
			cout<<a[z]<<"x^"<<z<<"+";
		}
		else {
			cout<<a[z]<<"x^"<<z;
		}
		cout<<endl;
}
void pengurangan(int a[],int b[],int e,int c) {
	int k,l;
	if(c<=e)
	l=e;
	else
		l=c;
	if(l==c) {
		k=e+1;
		for( ;k<=l;k++) {
			b[k]=0;
		}
	}
	else if(l==e) {
		k=c+1;
		for( ;k<=l;k++) {
			a[k]=0;
		}
	}
	int z;
	for(z=0;z<=l;z++) {
		a[z]=a[z]-b[z];
	}
	for(z=0;z<=l;z++)
		if(z!=l) {
			cout<<a[z]<<"x^"<<z<<"+";
		}
		else {
			cout<<a[z]<<"x^"<<z;
		}
		cout<<endl;
}
void perkalian(int a[],int b[],int c,int e) {
	int f,g,h[21],i=0,j[21];
	for(f=0;f<=c;f++)
		for(g=0;g<=e;g++) {
			h[i]=b[g]*a[f];
			j[i]=f+g;
			i++;
		}
	for(f=0;f<i;f++) {
		if(f!=i-1) {
			cout<<h[f]<<"x^"<<j[f]<<"+";
		}
		else {
			cout<<h[f]<<"x^"<<j[f];
		}
	}
	cout<<endl;
}
void turunan(int a[],int b[],int c,int e) {
	int f;
	for(f=0;f<=c;f++) {
		a[f]=a[f+1]*(f+1);
	}
	cout<<"Turunan polinom pertama adalah: "<<" ";
	for(f=0;f<c;f++) {
		if(f!=c-1) {
			cout<<a[f]<<"x^"<<f<<"+";
		}
		else {
			cout<<a[f]<<"x^"<<f;
		}
	}
		for(f=0;f<=e;f++) {
		b[f]=b[f+1]*(f+1);
	}
	cout<<endl<<endl<<"Turunan polinom kedua adalah: "<<" ";
	for(f=0;f<e;f++) {
		if(f!=e-1) {
			cout<<b[f]<<"x^"<<f<<"+";
		}
		else {
			cout<<b[f]<<"x^"<<f;
		}
	}
	cout<<endl;
}
void salah() {
	cout<<"Menu tidak tersedia !!!"<<endl;
}
int main() {
	char jawab;
	do {
	int a[21],b[21],c,d,e,f;
//	cout<<"Masukkan Polinom Pertama, Tekan Sembarang Tombol Unuk Melanjutkan"<<endl;
//	getch();
	cout<<"\nMasukkan Derajat Tertinggi Polinom Pertama: ";
	cin>>c;
//	cout<<"\nMasukkan Koofisien x Mulai Dari x Pangkat 0, Tekan Sembarang Tombol Untuk Melanjutkan"<<endl;
//	getch();
	for(d=0;d<=c;d++) {
		cout<<"\nKoofisien x Pangkat "<<d<<" : ";
		cin>>a[d];
		cout<<endl;
	}
//	cout<<"Masukkan Polinom Kedua, Tekan Sembarang Tombol Untuk Melanjutkan"<<endl;
//	getch();
	cout<<"\nMasukkan Derajat Tertinggi Polinom Kedua: ";
	cin>>e;
//	cout<<"\nMasukkan Koofisien x Mulai dari x Pangkat 0, Tekan Sembarang Tombol Untuk Melanjutkan"<<endl;
//	getch();
	for(d=0;d<=e;d++) {
		cout<<"\nKoofisien x Pangkat "<<d<<" : ";
		cin>>b[d];
		cout<<endl;
	}
	cout<<"1. PENJUMLAHAN	\n2. PENGURANGAN \n3. PERKALIAN	\n4. TURUNAN"<<endl;
	cout<<"\nMasukkan Kode Operasi : ";
	cin>>f;
	switch(f) {
	case 1: {
			penjumlahan(a,b,e,c);
			break;
		}
	case 2:	{
			pengurangan(a,b,e,c);
			break;
		}
	case 3: {
			perkalian(a,b,c,e);
			break;
		}
	case 4: {
			turunan(a,b,c,e);
			break;
		}
	default: {
			salah();
			break;
		}
	}
		printf("\nApakah anda ingin mengulang ? [y/t] ");
		scanf("%s",&jawab);
	}
	while ((jawab=='Y' || jawab=='y'));
	printf("\n\n\t\t\t\tTERIMA KASIH");
}
