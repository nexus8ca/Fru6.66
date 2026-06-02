#pragma once

namespace Fru666 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MedicamentosForm
	/// </summary>
	public ref class MedicamentosForm : public System::Windows::Forms::Form
	{
	public:
		MedicamentosForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MedicamentosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Medicamento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Disponibilidad;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Medicamento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Disponibilidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.69811F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(325, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(416, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Catalogo de Medicamentos";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Medicamento,
					this->Precio, this->Disponibilidad
			});
			this->dataGridView1->Location = System::Drawing::Point(340, 194);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 45;
			this->dataGridView1->Size = System::Drawing::Size(377, 148);
			this->dataGridView1->TabIndex = 1;
			// 
			// Medicamento
			// 
			this->Medicamento->HeaderText = L"Medicamento";
			this->Medicamento->MinimumWidth = 6;
			this->Medicamento->Name = L"Medicamento";
			this->Medicamento->Width = 110;
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->MinimumWidth = 6;
			this->Precio->Name = L"Precio";
			this->Precio->Width = 110;
			// 
			// Disponibilidad
			// 
			this->Disponibilidad->HeaderText = L"Column1";
			this->Disponibilidad->MinimumWidth = 6;
			this->Disponibilidad->Name = L"Disponibilidad";
			this->Disponibilidad->Width = 110;
			// 
			// MedicamentosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1082, 580);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"MedicamentosForm";
			this->Text = L"MedicamentosForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
