
#include "Repertuar.h"
using namespace std;

class Repertuar {

private:
	vector<Seans> seansList;

public:
	Repertuar() {
		
	}
	void dodajSeans(Film film,Data data, Sala sala) {
		Seans seans;
		seans.NowySeans(film,data,sala);
		seansList.push_back(seans);
	}

	void rezerwujMiejsce();

	void wyswietlRepertuar(int r, string name, Data date) {
		cout << "REPERTUAR:" << endl;
		if (r == 1) {
			for (int x = 0; x < seansList.size(); x++) {
				seansList.at(x).wyswietlInformacje();
			}
		}else if (r == 2) {
			for (int x = 0; x < seansList.size(); x++) {
				if (seansList.at(x).GetFilmName() == name)
				{
					seansList.at(x).wyswietlInformacje();
				}
			}
		}
	}

	void dodajSeansr();

	void opisFilmu();

	void ocenSeans();
};
