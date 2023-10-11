//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
byte SumaDigitos(Cardinal x )
{
	byte s;
	if (x < 10) { //Caso base  n = 1
		s = x;
	}else //caso general
	{
		s = SumaDigitos(x/10) + x % 10;
	}
	return s;
}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Edit2 -> Text = SumaDigitos(StrToInt(Edit1 -> Text));
}
//---------------------------------------------------------------------------
