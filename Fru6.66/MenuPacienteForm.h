#pragma once
#include "MedicamentosForm.h"
#include "PedidosForm.h"
#include "HistorialForm.h"

namespace Fru666 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MenuPacienteForm : public System::Windows::Forms::Form
	{
	public:
		MenuPacienteForm(void)
		{
			InitializeComponent();
		}

	protected:
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPacienteForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->medicamentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pedidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->pedidosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPacienteForm::pedidosToolStripMenuItem_Click);
			// 
			// historialToolStripMenuItem
			// 
			this->historialToolStripMenuItem->Name = L"historialToolStripMenuItem";
			this->historialToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->historialToolStripMenuItem->Text = L"Historial";
			this->historialToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPacienteForm::historialToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(45, 21);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPacienteForm::salirToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.33962F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(304, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(261, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido, Carlos";
			this->label1->Click += gcnew System::EventHandler(this, &MenuPacienteForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(89, 106);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(174, 232);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// MenuPacienteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1075, 574);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MenuPacienteForm";
			this->Text = L"MenuPacienteForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Medicamentos
	private: System::Void medicamentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MedicamentosForm^ formMedicamentos = gcnew MedicamentosForm();

		formMedicamentos->Show();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	//Pedidos
	private: System::Void pedidosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PedidosForm^ pedidosForm = gcnew PedidosForm();

		pedidosForm->ShowDialog();
	}
	//Historial
	private: System::Void historialToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		HistorialForm^ historialForm = gcnew HistorialForm();

		historialForm->Show();
	}
	//Salir
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}