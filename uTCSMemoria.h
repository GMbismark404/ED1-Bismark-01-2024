//---------------------------------------------------------------------------
#ifndef uTCSMemoriaH
#define uTCSMemoriaH
#include <string>
#include <iostream>
#include <Vcl.Graphics.hpp>
//---------------------------------------------------------------------------
using namespace std;

const int MAX = 20;
const int NULO = -1;

typedef int direccion;

struct NodoM {
	int dato;
	string id;
	direccion link;
};

class TCSMemoria {
	private:
		NodoM *mem;
		direccion libre;
	public:
		TCSMemoria();
		direccion new_espacio(string cadena);
		void delete_espacio(direccion dir);
		void poner_dato(direccion dir, string cadena_id, int valor);
		int obtener_dato(direccion dir, string cadena_id);
		int espacio_disponible();
		int espacio_ocupado();
		bool dir_libre(direccion dir);
		int numero_ids(string cadena);
		string eliminar_flecha(string cadena_id);
		string obtener_id(string cadena, int pos);
		void Mostrar(TCanvas *canvas, int desde, int hasta);
};

int TCSMemoria::numero_ids(string id) { // "dia,mes,a�o"
int c = 0;
	if (id == ""){
		return c;
	}else{
		for (int i = 0; i < id.length() - 1; i++)
			if ((id[i] != ',') && (id[i+1] == ','))
				c++;

		if (id[id.length() - 1] != ',')
			c++;
	}
return c;
}

string TCSMemoria::obtener_id(string cad, int pos) {  // "ca,na,ma"
int p = 0; string s = ""; int c = 0;

	while (cad[c] == ',')
		c++;

	for (int i = c; i < cad.length(); i++) {
		if (cad[i] == ',') {
			i++; p++;
		}

		if (p == pos) {
			s = s + cad[i];
		}
	}
return s;
}

string TCSMemoria::eliminar_flecha(string cadena_id) {
	string cad;
    for (char c : cadena_id) {
        if (c != '-' && c != '>') {
			cad += c;
        }
    }
	return cad;
}

#endif
