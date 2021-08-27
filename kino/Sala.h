
#include <string>
#include <iostream>

using namespace std;


class Sala {

private:
	string Nazwa;
	string Sponsor;
	int iloscMiejsc;
	//List zajeteMiejsca;
public:
	void CreateRoom(string name, string sponsor, int iloscMiejsc);
	void InformacjeOFilmie();
	int GetWolneMiejsca();
};



