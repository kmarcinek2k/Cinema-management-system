#include "Sala.h"

using namespace std;


class Sala {

private:
	string nazwa;
	string sponsor;
	int iloscMiejsc;
	int iloscZajetychMiejsc;

public:
	void CreateRoom(string name, string sponsor, int iloscMiejsc) {
		name = nazwa;
		this->sponsor = sponsor;
		this->iloscMiejsc = iloscMiejsc;
		iloscZajetychMiejsc = 0;
	}
	void InformacjeOSali() {
		cout << "Nazwa sali: " << nazwa << " sponsor: " << sponsor << endl;
	}
	void ZarezerwujMiejsca(int miejsca) {
		iloscZajetychMiejsc += miejsca;
	}
	int GetWolneMiejsca() {
		return iloscMiejsc - iloscZajetychMiejsc;
	}
};