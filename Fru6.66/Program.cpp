#include <locale.h>
#include "InicioForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Fru666;

[STAThreadAttribute]
int main(array<String^>^ args) {
    setlocale(LC_ALL, "");   
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew InicioForm());
    return 0;
}
