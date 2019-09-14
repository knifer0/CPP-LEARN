#include "tennis.h"

Tennis::Tennis(const string& fn, const string& ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht) {}
RatedPlayer::RatedPlayer(unsigned int r,const string& fn, const string& ln, bool ht) : rating(r),Tennis(fn,ln,ht){} // konstruktory z lista inicjalizujaca
RatedPlayer::RatedPlayer(unsigned int r, const Tennis& t) : rating(r), Tennis(t){} // uzywa konstruktora kopiujacego klasy Tennis