//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "todo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Surface.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::addtaskbuttonClick(TObject *Sender)
{
	String  Tasttext = taskinput->Text;
	ListBox1->Items->Add(Tasttext);

	taskinput ->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ListBox1ItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index = Item->Index ;
	ListBox1->Items->Delete(index);
}
//---------------------------------------------------------------------------
