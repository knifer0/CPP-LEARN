#pragma once
#ifndef PORY_ROKU_H_
#define PORY_ROKU_H_
namespace SALES {
	const int QUARTERS = 4;
	class Sales {
	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales(const double ar[], int n = 0);
		Sales();
		~Sales();
		void setSales(Sales &zm );
		void showSales() const;
	};
}
#endif