#include "MenuGerenteForm.h"
#include "LoginForm.h"

using namespace Fru666;

System::Void MenuGerenteForm::salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm();
	loginForm->Show();
	this->Close();
}
