#include "FormMain.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(cli::array<System::String^>^ argv) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Differenzefinite::FormMain form;
	Application::Run(%form);
	

}