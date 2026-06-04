#include "MenuPacienteForm.h"
#include "LoginForm.h"

using namespace Fru666;

System::Void MenuPacienteForm::salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm();

	loginForm->Show();
	this->Close();
}
