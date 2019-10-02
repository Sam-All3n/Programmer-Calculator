#include "Calculator.h"

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Coursework::Calculator form;

	Application::Run(%form);
	return 0;
}

