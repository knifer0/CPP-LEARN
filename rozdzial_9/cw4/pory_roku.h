#pragma once
namespace SALES {
	const int QUARTERS = 4;
	struct Sales {
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
using SALES::Sales; // uzyj struktury Sales z przestrzeni nazw SALES
void setSales(Sales& s, const double ar[], int n);
void setSales(Sales& s);
void showSales(const Sales& s);
}


