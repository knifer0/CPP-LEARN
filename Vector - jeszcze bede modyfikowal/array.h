#include <iostream>
// implementacja my_vector
template <class T>
class My_Vector {
private:
	T* tablica;
	int size_tablica;
public:
	//konstruktory
	My_Vector() : tablica(nullptr), size_tablica(0) {}
	My_Vector(int how_many);
	//destruktor
	~My_Vector() {delete[] tablica;}
	//metody
	int& size(){return size_tablica;}
	T& push_back(int i);
	T& pop_back();
	T& operator[](int i);
	T operator[](int i)const;
	T& at(int i);
};




//definicje 
template <class T>
My_Vector<T>::My_Vector(int how_many){
	size_tablica = how_many;
	tablica = new T[how_many];
	for (int i = 0; i < size_tablica; i++)
		* (tablica + i) = 0;
}

template <class T>
T& My_Vector<T>::push_back(int i) {
	T* temp = new T[size_tablica];
	for (int i = 0; i < size_tablica; i++) {
		temp[i] = tablica[i];
	}
	delete[] tablica;
	tablica = new T[++size_tablica];
	for (int i = 0; i < size_tablica; i++) {
		tablica[i] = temp[i];
	}
	delete[] temp;
	tablica[int(size_tablica - 1)] = i;
	return *tablica;
}

template <class T>
T& My_Vector<T>::pop_back() {
	T* temp = new T[int(size_tablica-1)]; // -1 bo ostatni element staje sie nieistotny 
	for (int i = 0; i < size_tablica-1; i++) {
		temp[i] = tablica[i];
	}
	delete [] tablica;
	tablica = new T[--size_tablica];
	for (int i = 0; i < size_tablica; i++) {
		tablica[i] = temp[i];
	}
	delete[] temp;
	return *tablica;
}

template <class T>
T& My_Vector<T>::operator[](int i) { // popatrz na te dwie metody.. dzieki nim moge przypisywac = wypisywac za pomoca cout 
	if (i < 0 || i >= size_tablica) {
		std::cerr << "Blad zakresu tablicy: " << i << " jest poza zakresem\n";
		exit(EXIT_FAILURE);
	}
	return tablica[i];
}

template <class T>
T My_Vector<T>::operator[](int i)const {
	if (i < 0 || i >= size_tablica) {
		std::cerr << "Blad zakresu tablicy: " << i << " jest poza zakresem\n";
		exit(EXIT_FAILURE);
	}
	return tablica[i];
}

template <class T>
T& My_Vector<T>::at(int i) {
	if (i < 0 || i >= size_tablica) {
		std::cout << "Przekroczyles zakres\n";
		exit(EXIT_FAILURE);
	}
	return *tablica;
}