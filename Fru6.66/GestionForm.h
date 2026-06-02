#pragma once

namespace Fru666 {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class GestionForm : public Form
    {
    public:
        GestionForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~GestionForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->SuspendLayout();
            // 
            // GestionForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1090, 593);
            this->Name = L"GestionForm";
            this->Text = L"GestionForm";
            this->ResumeLayout(false);

        }
#pragma endregion
    };
}
