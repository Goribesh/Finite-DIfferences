#include "FormMain.h"

using namespace System;
using namespace System::Windows::Forms;
//using namespace std;

[STAThreadAttribute]
void main(cli::array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Differenzefinite::FormMain form;
	Application::Run(%form);
	

}