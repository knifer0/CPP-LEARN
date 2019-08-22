#include <iostream>
#include "pory_roku.h"
int main()
{
	//UWAGA DO PROGRAMU//
	//Wedlug mnie argument dla meotdy SetSales jest bez sensu, chyba ze bysmy uzyli wywolnia np. p3->setSales(p2) to wtedy spoko
	// bo argumentem jawnym jest p2, a zmieniamy p3 niejawnie
	using std::cout;
	using std::cin;
	using std::endl;
	double tablica[10] = { 10.23,12.23,2.2,3.3,4.4,5.5,6.0,7.0,230.5,14.7 };
	SALES::Sales p1(tablica, 10);
	SALES::Sales p2(tablica, 10);
	SALES::Sales* p3 = new SALES::Sales;
	p3->setSales(*p3);
	p1.showSales();
	p3->showSales();

}
