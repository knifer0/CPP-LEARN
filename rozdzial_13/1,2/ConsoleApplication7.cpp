﻿#define _CRT_SECURE_NO_WARNINGS
#include "cd.h"
void Bravo(const Cd& disk);
int main(void) {
	using std::cout;
	Cd c1("Beatles","Capitol", 14, 35.5);
	Classic c2 = Classic("Sonata fortepianowa 8-dur, Fantazja C-moll", "Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;
	cout << "Bezposrednie uzycie obiektu\n";
	c1.Report();
	c2.Report();
	cout << "Uzycie wskaznika na typ Cd:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();
	cout << "Wywolanie funkcji z argumentem w postacji referencji do typu Cd:\n";
	Bravo(c1);
	Bravo(c2);
	cout << "Test przypisania: ";
	Classic copy;
	copy = c2;
	copy.Report();
	return 0;
}

void Bravo(const Cd& disk) {
	disk.Report();
}