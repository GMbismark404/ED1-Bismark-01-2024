//---------------------------------------------------------------------------
#ifndef uFPrincipalH
#define uFPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <string>
#include "uTCSMemoria.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *CrearMemoria;
	TButton *PedirEspacio;
	TButton *LiberarEspacio;
	TButton *MostrarMemoria;
	TButton *PonerDato;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	void __fastcall CrearMemoriaClick(TObject *Sender);
	void __fastcall PedirEspacioClick(TObject *Sender);
	void __fastcall LiberarEspacioClick(TObject *Sender);
	void __fastcall MostrarMemoriaClick(TObject *Sender);
	void __fastcall PonerDatoClick(TObject *Sender);
private:	// User declarations
	TCSMemoria *mem;
	int espacio_actual;
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
    void LimpiarCanvas(TCanvas *canvas);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
