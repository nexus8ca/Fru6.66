#pragma once
#include "GestionPForm.h"
#include "ControlForm.h"
#include "EstadisticasForm.h"

namespace Fru666 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuGerenteForm
	/// </summary>
	public ref class MenuGerenteForm : public System::Windows::Forms::Form
	{
	public:
		MenuGerenteForm(void)
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
		~MenuGerenteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ gestionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuracionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadisticasToolStripMenuItem;
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
			this->gestionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuracionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadisticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(18, 18);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->gestionToolStripMenuItem,
					this->configuracionToolStripMenuItem, this->estadisticasToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1080, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// gestionToolStripMenuItem
			// 
			this->gestionToolStripMenuItem->Name = L"gestionToolStripMenuItem";
			this->gestionToolStripMenuItem->Size = System::Drawing::Size(64, 21);
			this->gestionToolStripMenuItem->Text = L"Gestion";
			this->gestionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuGerenteForm::gestionToolStripMenuItem_Click);
			// 
			// configuracionToolStripMenuItem
			// 
			this->configuracionToolStripMenuItem->Name = L"configuracionToolStripMenuItem";
			this->configuracionToolStripMenuItem->Size = System::Drawing::Size(101, 21);
			this->configuracionToolStripMenuItem->Text = L"Configuracion";
			this->configuracionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuGerenteForm::configuracionToolStripMenuItem_Click);
			// 
			// estadisticasToolStripMenuItem
			// 
			this->estadisticasToolStripMenuItem->Name = L"estadisticasToolStripMenuItem";
			this->estadisticasToolStripMenuItem->Size = System::Drawing::Size(87, 21);
			this->estadisticasToolStripMenuItem->Text = L"Estadisticas";
			this->estadisticasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuGerenteForm::estadisticasToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(45, 21);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuGerenteForm::salirToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.33962F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(380, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido, Luis";
			this->label1->Click += gcnew System::EventHandler(this, &MenuGerenteForm::label1_Click);
			// 
			// MenuGerenteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1080, 628);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MenuGerenteForm";
			this->Text = L"MenuGerenteForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void gestionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GestionPForm^ gestionpForm = gcnew GestionPForm();

	gestionpForm->Show();
}
private: System::Void configuracionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ControlForm^ controlForm = gcnew ControlForm();

	controlForm->Show();
}
private: System::Void estadisticasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EstadisticasForm^ estadisticasForm = gcnew EstadisticasForm();

	estadisticasForm->Show();
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
