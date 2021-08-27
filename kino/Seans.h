#include "Film.h"
#include "Data.h"
#include "Sala.h"

class Seans {

private:
	Film film;
	Data data;
	Sala sala;

public:
	int zwrocIloscWolnychMiejsc();

	void rezerwujMiejsca();

	void NowySeans(Film film, Data data, Sala sala);

	void wyswietlInformacje();

	void wystawOcene();

	string GetFilmName();
};


