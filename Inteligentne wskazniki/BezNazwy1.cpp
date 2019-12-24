#include <iostream>
class czworka_liczb{
	private:
		double x;
		double y;
	public:
		czworka_liczb(double xx=0.0, double yy=0.0);
		virtual void drukuj();
};

czworka_liczb::czworka_liczb(double xx, double yy){
	x = xx;
	y = yy;
}
void czworka_liczb::drukuj(){
	std::cout<<x<<std::endl<<y<<std::endl;
}
class czterowektor : public czworka_liczb{
	private:
		int sygnatura_metryki;
	public:
		czterowektor(int calk, double xx, double yy);
		void drukuj();
		double kwadrat_modulu(double a, double b, double c, double d){
			return a*a+b*b+c*c+d*d;
		}
};
void czterowektor::drukuj(){
	std::cout<<sygnatura_metryki<<std::endl; 
	czworka_liczb::drukuj();
}
czterowektor::czterowektor(int calk, double xx, double yy):czworka_liczb(xx,yy){
	sygnatura_metryki=calk;
}


int main(void){
	czworka_liczb p1(3.0,4.0);
	czterowektor p2(1,5.0,6.0);
	czworka_liczb *p3[2] = {&p1,&p2};
	for(int i=0; i<2; i++){
		p3[i]->drukuj();
		std::cout<<"kolejny obiekt: "<<std::endl;
	}
	return 0;
}
