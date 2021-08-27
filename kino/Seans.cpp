#include "Seans.h"




using namespace std;


class Seans {

private:
	Film film;
	Data data;
	Sala sala;

public:
	void NowySeans(Film film, Data data, Sala sala) {
		this->film = film;
		this->data = data;
		this->sala = sala;

	}
	int zwrocIloscWolnychMiejsc() {
		return sala.GetWolneMiejsca();
	}

	void rezerwujMiejsca(int ilosc) {

	}

	void wyswietlInformacje() {
		cout << "Film: " << endl;
		film.InformacjeOFilmie();
		cout << "Ilosc wolnych miejsc: " << zwrocIloscWolnychMiejsc()<< endl;
		cout << "Sala: " << endl;
		sala.InformacjeOFilmie();
	}

	void wystawOcene(int ocena) {
		film.WystawOcene(ocena);
	}
	string GetFilmName() {
		return film.GetFilmName();
	}
};
