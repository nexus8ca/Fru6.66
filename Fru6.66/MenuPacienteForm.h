#pragma once
#include "MedicamentosForm.h"

namespace Fru666 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuPacienteForm
	/// </summary>
	public ref class MenuPacienteForm : public System::Windows::Forms::Form
	{
	public:
		MenuPacienteForm(void)
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
		~MenuPacienteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ medicamentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pedidosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->medicamentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pedidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(18, 18);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->medicamentosToolStripMenuItem,
					this->pedidosToolStripMenuItem, this->historialToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1075, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// medicamentosToolStripMenuItem
			// 
			this->medicamentosToolStripMenuItem->Name = L"medicamentosToolStripMenuItem";
			this->medicamentosToolStripMenuItem->Size = System::Drawing::Size(106, 21);
			this->medicamentosToolStripMenuItem->Text = L"Medicamentos";
			this->medicamentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPacienteForm::medicamentosToolStripMenuItem_Click);
			// 
			// pedidosToolStripMenuItem
			// 
			this->pedidosToolStripMenuItem->Name = L"pedidosToolStripMenuItem";
			this->pedidosToolStripMenuItem->Size = System::Drawing::Size(67, 21);
			this->pedidosToolStripMenuItem->Text = L"Pedidos";
			// 
			// historialToolStripMenuItem
			// 
			this->historialToolStripMenuItem->Name = L"historialToolStripMenuItem";
			this->historialToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->historialToolStripMenuItem->Text = L"Historial";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(45, 21);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.33962F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(457, 145);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido";
			// 
			// MenuPacienteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1075, 574);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MenuPacienteForm";
			this->Text = L"MenuPacienteForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void medicamentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MedicamentosForm^ formMedicamentos = gcnew MedicamentosForm();

		formMedicamentos->Show();
	}
};
}
