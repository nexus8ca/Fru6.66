#pragma once
#include "GestionForm.h"
#include "ValidarRecetasForm.h"
#include "ReportesForm.h"

namespace Fru666 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuPersonalForm
	/// </summary>
	public ref class MenuPersonalForm : public System::Windows::Forms::Form
	{
	public:
		MenuPersonalForm(void)
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
		~MenuPersonalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ gestiónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ validaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;

	protected:

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
			this->gestiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->validaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(18, 18);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->gestiónToolStripMenuItem,
					this->validaciónToolStripMenuItem, this->reToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1089, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// gestiónToolStripMenuItem
			// 
			this->gestiónToolStripMenuItem->Name = L"gestiónToolStripMenuItem";
			this->gestiónToolStripMenuItem->Size = System::Drawing::Size(64, 21);
			this->gestiónToolStripMenuItem->Text = L"Gestión";
			this->gestiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPersonalForm::gestiónToolStripMenuItem_Click);
			// 
			// validaciónToolStripMenuItem
			// 
			this->validaciónToolStripMenuItem->Name = L"validaciónToolStripMenuItem";
			this->validaciónToolStripMenuItem->Size = System::Drawing::Size(79, 21);
			this->validaciónToolStripMenuItem->Text = L"Validación";
			this->validaciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPersonalForm::validaciónToolStripMenuItem_Click);
			// 
			// reToolStripMenuItem
			// 
			this->reToolStripMenuItem->Name = L"reToolStripMenuItem";
			this->reToolStripMenuItem->Size = System::Drawing::Size(73, 21);
			this->reToolStripMenuItem->Text = L"Reportes";
			this->reToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPersonalForm::reToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(45, 21);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPersonalForm::salirToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.33962F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(402, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Bienvenida, Elizabeth";
			this->label1->Click += gcnew System::EventHandler(this, &MenuPersonalForm::label1_Click);
			// 
			// MenuPersonalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1089, 629);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MenuPersonalForm";
			this->Text = L"MenuPersonalForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void gestiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GestionForm^ gestionForm = gcnew GestionForm();

	gestionForm->ShowDialog();
}
private: System::Void validaciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ValidarRecetasForm^ validarRecetasForm = gcnew ValidarRecetasForm();

	validarRecetasForm->ShowDialog();
}
private: System::Void reToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportesForm^ reportesForm = gcnew ReportesForm();

	reportesForm->ShowDialog();
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
