//
// Created by anaf on 29/08/2023.
//

#ifndef BELAJAR_CPP_INPUT_OUTPUT_H
#define BELAJAR_CPP_INPUT_OUTPUT_H

#include "format"
#include "string"
#include "iostream"

using namespace std;

class inputOutput {

public:
	void run() {
		int l, w;

		cout << "Program mencari luas persegi panjang" << endl;

		cout << "length:";
		cin >> l;

		cout << "wide:" << endl;
		cin >> w;

		cout << format("Luas persegi panjang adalah: {} x {} = {}", l, w, l * w) << endl;
	}
};

#endif //BELAJAR_CPP_INPUT_OUTPUT_H
