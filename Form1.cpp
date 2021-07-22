#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(cli::array<System::String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ReportCardManagementSystem::Form1 frm;
	Application::Run(% frm);

}


