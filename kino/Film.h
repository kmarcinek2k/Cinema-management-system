#ifndef Film.h
#define Film.h
#include <string>
#include <iostream>

	class Film {

	private:
		int koszt;
		string nazwa;
		string tworca;
		int kosztBilet;
		float ocena;
	public:
		void InformacjeOFilmie();
		void CreateNewFilm(string name, string director, int cost, float stars);
		void WystawOcene(float ocena);
		string GetFilmName();
	};
#endif

