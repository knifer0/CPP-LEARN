#include "Move.h"
#include <iostream>
Move::Move(double a, double b) {
	x = a;
	y = b;
}
void Move::showmove()const {
	std::cout << "x = " << x << " y = " << y << std::endl;

}
void Move::rest(double a, double b){
	x = a;
	y = b;
}
Move & Move::add(const Move& m) const { // jezeli bedzie zwracac referencje to nie bedzie tworzyc obiektu tymczasowego
	Move* nowy = new Move{ m.x + this->x,m.y + this->y };
	return *nowy;
}
