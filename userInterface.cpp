#include "userInterface.h"
using namespace ImageAnalysisSoftware;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void Main(array<System::String^> ^args)
{

	// Enabling Windows  visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	
	ImageAnalysisSoftware::userInterface userInterface;
	Application::Run(%userInterface);

}


