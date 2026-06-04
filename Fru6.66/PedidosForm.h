#pragma once

namespace Fru666 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class PedidosForm : public System::Windows::Forms::Form
    {
    public:
        PedidosForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~PedidosForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.33962F, System::Drawing::FontStyle::Bold));
            this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
            this->label1->Location = System::Drawing::Point(381, 97);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(306, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Solicitar Medicamento";
            this->label1->Click += gcnew System::EventHandler(this, &PedidosForm::label1_Click);
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paracetamol", L"Ibuprofeno", L"Omeprazol" });
            this->comboBox1->Location = System::Drawing::Point(456, 211);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(246, 21);
            this->comboBox1->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.22642F));
            this->label2->Location = System::Drawing::Point(308, 211);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(145, 22);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Medicamento:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.22642F));
            this->label3->Location = System::Drawing::Point(308, 264);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(104, 22);
            this->label3->TabIndex = 3;
            this->label3->Text = L"Cantidad:";
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Location = System::Drawing::Point(456, 266);
            this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
            this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(120, 20);
            this->numericUpDown1->TabIndex = 4;
            this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &PedidosForm::numericUpDown1_ValueChanged);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::Highlight;
            this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.22642F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Location = System::Drawing::Point(421, 326);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(203, 36);
            this->button1->TabIndex = 5;
            this->button1->Text = L"SOLICITAR";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(61, 565);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 23);
            this->button2->TabIndex = 6;
            this->button2->Text = L"button2";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // PedidosForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Window;
            this->ClientSize = System::Drawing::Size(1092, 629);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->numericUpDown1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label1);
            this->Name = L"PedidosForm";
            this->Text = L"PedidosForm";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
        // Ejemplo: obtener el valor seleccionado
        int cantidad = (int)numericUpDown1->Value;
        // Aquí podrías usar la cantidad para procesar el pedido
    }
    };
}
