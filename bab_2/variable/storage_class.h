//
// Created by kafri on 29/08/2023.
//

#ifndef BELAJAR_CPP_STORAGE_CLASS_H
#define BELAJAR_CPP_STORAGE_CLASS_H

#include "iostream"
#include "format"

using namespace std;

// kelas penyimpanan "auto": kelas penyimpanan default
// saat variable dideklarasikan, variable tersebut disimpan didalam memori saat suatu function dipanggil,
// tetapi saat eksekusi berakhir, variable tersebut akan secara otomatis dibuang dari memori

void mauto1() {
	int a; // mempunyai kelas penyimpanan auto (default)
}

void mauto2() {
	auto int a; // deklarasi kelas penyimpanan secara manualmanual
}



// kelas penyimpanan "static"
// hampir sama dengan auto, tetapi saat eksekusi function berakhir,
// variable tersebut akan tetap disimpan di dalam memori

void mstatic() {
	static int a;
}



// Kelas penyimpanan "extern"
// Kelas penyimpanan "mutable"



void contoh() {
	auto int a = 0;
	static int b = 0;

	a++;

	cout << format("Nilai a: ", a) << endl;
	cout << format("Nilai b: ", b) << endl;

	// Ketika function "contoh()" dipanggil 3 kali
	// output nilai a adalah: 1 1 1
	// output nilai b adalah: 1 2 3
}

#endif //BELAJAR_CPP_STORAGE_CLASS_H
