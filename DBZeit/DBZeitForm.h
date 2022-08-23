#pragma once

#include <iostream>
#include <windows.h>
#include <stdio.h>

namespace nDBZeitForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class DBZeitForm : public System::Windows::Forms::Form
	{
	public:
		DBZeitForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~DBZeitForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	private: System::Windows::Forms::Button^ eincheckButton;
	private: System::Windows::Forms::Button^ auscheckButton;
	protected:

	protected:


	private: System::Windows::Forms::Label^ eincheckLabel;
	private: System::Windows::Forms::Label^ auscheckLabel;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ berichtButton;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->eincheckButton = (gcnew System::Windows::Forms::Button());
			this->auscheckButton = (gcnew System::Windows::Forms::Button());
			this->eincheckLabel = (gcnew System::Windows::Forms::Label());
			this->auscheckLabel = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->berichtButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->dateTimePicker->Location = System::Drawing::Point(50, 35);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(192, 20);
			this->dateTimePicker->TabIndex = 3;
			// 
			// eincheckButton
			// 
			this->eincheckButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eincheckButton->ForeColor = System::Drawing::Color::White;
			this->eincheckButton->Location = System::Drawing::Point(50, 107);
			this->eincheckButton->Name = L"eincheckButton";
			this->eincheckButton->Size = System::Drawing::Size(85, 25);
			this->eincheckButton->TabIndex = 0;
			this->eincheckButton->Text = L"Einchecken";
			this->eincheckButton->UseVisualStyleBackColor = true;
			this->eincheckButton->Click += gcnew System::EventHandler(this, &DBZeitForm::eincheckButton_Click);
			// 
			// auscheckButton
			// 
			this->auscheckButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->auscheckButton->ForeColor = System::Drawing::Color::White;
			this->auscheckButton->Location = System::Drawing::Point(50, 183);
			this->auscheckButton->Name = L"auscheckButton";
			this->auscheckButton->Size = System::Drawing::Size(85, 25);
			this->auscheckButton->TabIndex = 1;
			this->auscheckButton->Text = L"Auschecken";
			this->auscheckButton->UseVisualStyleBackColor = true;
			this->auscheckButton->Click += gcnew System::EventHandler(this, &DBZeitForm::auscheckButton_Click);
			// 
			// eincheckLabel
			// 
			this->eincheckLabel->AutoSize = true;
			this->eincheckLabel->ForeColor = System::Drawing::Color::White;
			this->eincheckLabel->Location = System::Drawing::Point(47, 135);
			this->eincheckLabel->Name = L"eincheckLabel";
			this->eincheckLabel->Size = System::Drawing::Size(88, 13);
			this->eincheckLabel->TabIndex = 4;
			this->eincheckLabel->Text = L"---------------------------";
			// 
			// auscheckLabel
			// 
			this->auscheckLabel->AutoSize = true;
			this->auscheckLabel->ForeColor = System::Drawing::Color::White;
			this->auscheckLabel->Location = System::Drawing::Point(47, 211);
			this->auscheckLabel->Name = L"auscheckLabel";
			this->auscheckLabel->Size = System::Drawing::Size(88, 13);
			this->auscheckLabel->TabIndex = 5;
			this->auscheckLabel->Text = L"---------------------------";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(50, 288);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(192, 111);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// berichtButton
			// 
			this->berichtButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->berichtButton->ForeColor = System::Drawing::Color::White;
			this->berichtButton->Location = System::Drawing::Point(50, 257);
			this->berichtButton->Name = L"berichtButton";
			this->berichtButton->Size = System::Drawing::Size(192, 25);
			this->berichtButton->TabIndex = 2;
			this->berichtButton->Text = L"Bericht";
			this->berichtButton->UseVisualStyleBackColor = true;
			// 
			// DBZeitForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(304, 411);
			this->Controls->Add(this->berichtButton);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->auscheckLabel);
			this->Controls->Add(this->eincheckLabel);
			this->Controls->Add(this->auscheckButton);
			this->Controls->Add(this->eincheckButton);
			this->Controls->Add(this->dateTimePicker);
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->Name = L"DBZeitForm";
			this->ShowIcon = false;
			this->Text = L"DBZeit";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DBZeitForm::DBZeitForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DBZeitForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {


	}
	private: System::Void eincheckButton_Click(System::Object^ sender, System::EventArgs^ e) {

		SYSTEMTIME stime;
		GetSystemTime(&stime);
		String^ datum = stime.wDay + "." + stime.wMonth + "." + stime.wYear;
		String^ zeit = stime.wHour + ":" + stime.wMinute + ":" + stime.wSecond;

		eincheckLabel->Text = "Eincheck Zeit->  " + datum + " - " + zeit;

		eincheckButton->Hide();


	}
private: System::Void auscheckButton_Click(System::Object^ sender, System::EventArgs^ e) {

		SYSTEMTIME stime;
		GetSystemTime(&stime);
		String^ datum = stime.wDay + "." + stime.wMonth + "." + stime.wYear;
		String^ zeit = stime.wHour + ":" + stime.wMinute + ":" + stime.wSecond;

		auscheckLabel->Text = "Auscheck Zeit->  " + datum + " - " + zeit;

		auscheckButton->Hide();
}
};
}

