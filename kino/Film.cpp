
#include "Film.h"


using namespace std;

class Film {

private:
	int koszt;
	string nazwa;
	string tworca;
	int kosztBilet;
	float ocena;
	int iloscOcen;
public:
	void CreateNewFilm(string name,string director,int cost,float stars) {
		koszt = cost;
		tworca = director;
		nazwa = name;
		this->ocena = stars;
		cout << "Dodano nowy film: " << nazwa << "\nStworzony przez: " << tworca << "\nocena: " << ocena/iloscOcen << "\nkoszt biletu: " << koszt << endl;
}
	void InformacjeOFilmie() {
		cout << "Tytu³ filmu: " << nazwa << "\nStworzony przez: " << tworca << "\nocena: " << ocena / iloscOcen << "\nkoszt biletu: " << koszt << endl;

	}
	void WystawOcene(float ocena) {
		iloscOcen++;
		this->ocena += ocena;
		cout << "Dziekujemy za ocene!" << endl;
	}
	string GetFilmName() {
		return nazwa;
	}
};
