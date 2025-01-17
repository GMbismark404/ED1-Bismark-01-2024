//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "uFPrincipal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CrearMemoriaClick(TObject *Sender)
{
	mem = new TCSMemoria();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PedirEspacioClick(TObject *Sender)
{
	AnsiString text = Edit1->Text;
	espacio_actual = mem->new_espacio(std::string(text.c_str()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LiberarEspacioClick(TObject *Sender)
{
	mem->delete_espacio(StrToInt(Edit2->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MostrarMemoriaClick(TObject *Sender)
{
	LimpiarCanvas(Form1->Canvas); // Limpia el canvas antes de dibujar
	mem->Mostrar(Form1->Canvas, StrToInt(Edit3->Text), StrToInt(Edit4->Text));
}

//---------------------------------------------------------------------------

void __fastcall TForm1::PonerDatoClick(TObject *Sender)
{
	AnsiString text = Edit6->Text;
	mem->poner_dato(StrToInt(Edit5->Text), std::string(text.c_str()), StrToInt(Edit7->Text));
}
//---------------------------------------------------------------------------

void TForm1::LimpiarCanvas(TCanvas *canvas)
{
	// Define el �rea que deseas limpiar
    TRect rect(0, 0, ClientWidth, ClientHeight); // Limpia todo el formulario
    canvas->Brush->Color = clWhite; // Color de fondo (blanco)
	canvas->FillRect(rect); // Rellena el �rea con el color de fondo
}

