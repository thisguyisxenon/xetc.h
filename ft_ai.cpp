#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
fstream bilinmelik;

class bilinenlik {
public:
	string soru;
	string cevap;
	void sorubak();
	void soruekle();
};

void bilinenlik::sorubak() {
	bilinmelik.open("soru.txt", ios::out | ios::in | ios::app);
	bilinmelik.setf(ios::left);
	cin >> soru;
	bilinenlik A;
	while (!bilinmelik.eof()) {
		bilinmelik >> A.soru;
		bilinmelik >> A.cevap;
		if (A.soru == soru) {
			cout << A.cevap;
		}
		else {
			bilinenlik::soruekle();
		}
		bilinmelik.close();
	}
}

void bilinenlik::soruekle() {
	cin >> soru;
	cin >> cevap;
	bilinmelik.open("soru.txt", ios::out | ios::in | ios::app);
	bilinmelik.setf(ios::left);
	bilinmelik << setw(20) << soru;
	bilinmelik << setw(20) << cevap;
	bilinmelik << "\n";
	bilinmelik.close();
}

int main() {
	setlocale(LC_ALL, "Turkish");
	bilinenlik sau;
	cout << "Selam, Ben xEnon Yapay Zeka Robotu!\n";
	//cin >> soru;
	//sau.soruekle();
	sau.sorubak();

	//char soru[20] = "naber ben aşmasd :D";
	//printf_s(soru);
	//if (var == 0) { // var 0 olcak
   //	 cout << sorucevap; // cevabı niye anlamadı mq
	//}
   // else {
   // sau.soruekle();
	//}
}