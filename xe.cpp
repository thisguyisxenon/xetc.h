#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
fstream bilinmelik;
int var = 0;

class bilinenlik {
public:
	string ekle_soru;
	string ekle_cevap;
	string soru;
	string cevap;
	void sorubak();
	void soruekle();
};

void bilinenlik::sorubak() {
	bas:
	bilinenlik sau;
	bilinmelik.open("soru.txt", ios::out | ios::in | ios::app);
	bilinmelik.setf(ios::left);
	cin >> soru;
	bilinenlik A;
	while (!bilinmelik.eof()) {
		bilinmelik >> A.soru;
		bilinmelik >> A.cevap;
		if (soru == A.soru) {
			cout << A.cevap<<"\n";
			bilinmelik.close();
			goto bas;
		}
	}
	var = 1;
}

void bilinenlik::soruekle() {
	bilinmelik.open("soru.txt", ios::out | ios::in | ios::app);
	bilinmelik.setf(ios::left);
	cout << "soru ekle\n";
	cin >> ekle_soru;
	cin >> ekle_cevap;
	bilinmelik << setw(20) << ekle_soru;
	bilinmelik << setw(20) << ekle_cevap;
	bilinmelik << "\n";
	bilinmelik.close();
	var = 0;
}

int main() {
	setlocale(LC_ALL, "Turkish");
	bilinenlik sau;
	cout << "Selam, Ben xEnon Yapay Zeka Robotu!\n";
	if (var == 0) {
		sau.sorubak();
	}
	else if (var = 1) {
		cout << "naber";
		//sau.soruekle();
	}
	//cin >> soru;
	//sau.soruekle();
	//sau.sorubak();

	//char soru[20] = "naber ben aşmasd :D";
	//printf_s(soru);
	//if (var == 0) { // var 0 olcak
   //	 cout << sorucevap; // cevabı niye anlamadı mq
	//}
   // else {
   // sau.soruekle();
	//}
}