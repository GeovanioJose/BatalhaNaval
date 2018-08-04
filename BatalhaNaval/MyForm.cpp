#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int Main(array <String ^>^ arg){
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);

	BatalhaNaval::MyForm Form;
	Application::Run(%Form);

	return 0;
}
