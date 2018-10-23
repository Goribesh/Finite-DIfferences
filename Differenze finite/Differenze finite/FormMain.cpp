#include "FormMain.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(cli::array<System::String^>^ argv) {
	Application::EnableVisualStyles();						//abilita stili grafici es:AERO
	Application::SetCompatibleTextRenderingDefault(false);
	Differenzefinite::FormMain form;						//ingresso nella form
	Application::Run(%form);								// avvio della form
	

}