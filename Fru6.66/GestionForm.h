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
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.33962F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(389, 116);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(294, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Gestión de Inventario";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(47, 527);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Volver";
            this->button1->UseVisualStyleBackColor = true;
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->Column1,
                    this->Column2, this->Column3
            });
            this->dataGridView1->Location = System::Drawing::Point(347, 190);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 45;
            this->dataGridView1->Size = System::Drawing::Size(378, 186);
            this->dataGridView1->TabIndex = 2;
            // 
            // Column1
            // 
            this->Column1->HeaderText = L"Medicamento";
            this->Column1->MinimumWidth = 6;
            this->Column1->Name = L"Column1";
            this->Column1->Width = 110;
            // 
            // Column2
            // 
            this->Column2->HeaderText = L"Cantidad";
            this->Column2->MinimumWidth = 6;
            this->Column2->Name = L"Column2";
            this->Column2->Width = 110;
            // 
            // Column3
            // 
            this->Column3->HeaderText = L"Última Actualización";
            this->Column3->MinimumWidth = 6;
            this->Column3->Name = L"Column3";
            this->Column3->Width = 110;
            // 
            // GestionForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Window;
            this->ClientSize = System::Drawing::Size(1090, 593);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label1);
            this->Name = L"GestionForm";
            this->Text = L"GestionForm";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    };
}
