
#include <string>
#include <iostream>
#include "Seans.h"
#include<list>
using namespace std;



class Repertuar {

private:
	vector<Seans> seansList;

public:
	void dodajSeans(){}

	void rezerwujMiejsce();

	void wyswietlRepertuar(int r, string name, Data date);

	void dodajSeansr();

	void opisFilmu();

	void ocenSeans();
};


