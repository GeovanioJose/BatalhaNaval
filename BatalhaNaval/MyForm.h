#pragma once
#include "TelaIInstrucao.h"
#include "TelaSobre.h"
#include "TelaJogo.h"

namespace BatalhaNaval {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  instruçõesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opçãoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  soundToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oFFToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oNToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sobreToolStripMenuItem;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->instruçõesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opçãoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->soundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oFFToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oNToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sobreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(271, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 56);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->instruçõesToolStripMenuItem,
					this->opçãoToolStripMenuItem, this->sobreToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// instruçõesToolStripMenuItem
			// 
			this->instruçõesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"instruçõesToolStripMenuItem.Image")));
			this->instruçõesToolStripMenuItem->Name = L"instruçõesToolStripMenuItem";
			this->instruçõesToolStripMenuItem->Size = System::Drawing::Size(92, 20);
			this->instruçõesToolStripMenuItem->Text = L"Instruções ";
			this->instruçõesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::instruçõesToolStripMenuItem_Click);
			// 
			// opçãoToolStripMenuItem
			// 
			this->opçãoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->soundToolStripMenuItem });
			this->opçãoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"opçãoToolStripMenuItem.Image")));
			this->opçãoToolStripMenuItem->Name = L"opçãoToolStripMenuItem";
			this->opçãoToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->opçãoToolStripMenuItem->Text = L"Opção";
			// 
			// soundToolStripMenuItem
			// 
			this->soundToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->oFFToolStripMenuItem,
					this->oNToolStripMenuItem
			});
			this->soundToolStripMenuItem->Name = L"soundToolStripMenuItem";
			this->soundToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->soundToolStripMenuItem->Text = L"Sound";
			// 
			// oFFToolStripMenuItem
			// 
			this->oFFToolStripMenuItem->Name = L"oFFToolStripMenuItem";
			this->oFFToolStripMenuItem->Size = System::Drawing::Size(95, 22);
			this->oFFToolStripMenuItem->Text = L"OFF";
			this->oFFToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oFFToolStripMenuItem_Click);
			// 
			// oNToolStripMenuItem
			// 
			this->oNToolStripMenuItem->Name = L"oNToolStripMenuItem";
			this->oNToolStripMenuItem->Size = System::Drawing::Size(95, 22);
			this->oNToolStripMenuItem->Text = L"ON";
			this->oNToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oNToolStripMenuItem_Click);
			// 
			// sobreToolStripMenuItem
			// 
			this->sobreToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sobreToolStripMenuItem.Image")));
			this->sobreToolStripMenuItem->Name = L"sobreToolStripMenuItem";
			this->sobreToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->sobreToolStripMenuItem->Text = L"Creditos";
			this->sobreToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sobreToolStripMenuItem_Click);
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(709, 0);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(75, 35);
			this->axWindowsMediaPlayer1->TabIndex = 2;
			this->axWindowsMediaPlayer1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Batalha Naval";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void instruçõesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	TelaIInstrucao Tela;
	Tela.ShowDialog();
}
private: System::Void sobreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	TelaSobre Tela;
	Tela.ShowDialog();
}
private: System::Void oFFToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->Ctlcontrols->pause();
}
private: System::Void oNToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->Ctlcontrols->play();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	TelaJogo Tela;
	Tela.ShowDialog();
	axWindowsMediaPlayer1->Ctlcontrols->pause();
}
};
}
