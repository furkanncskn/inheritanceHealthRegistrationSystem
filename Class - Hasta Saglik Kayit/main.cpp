#include <iostream>
#include "nabiz.h"
#include "BMI.h"
#include "insan.h"
#include "hasta.h"

using namespace std;

void main() {

	hasta hasta1(30, 05, 1996, "Furkan", "Coskun", 9, 03, 2021, 1.85, 88);
	hasta1.printHasta();

	hasta hasta2;
	hasta hasta3;

	cout << "\nGuncel Hasta Sayisi: " << hasta::hastaSayi;
}