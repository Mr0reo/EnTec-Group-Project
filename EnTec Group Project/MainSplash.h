#pragma once
#include "StudentSplash.h"
#include "AdvisorView.h"
#include <stdlib.h> 
namespace EnTec_Group_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainSplash
	/// </summary>
	public ref class MainSplash : public System::Windows::Forms::Form
	{
	private: AdvisorView^ advisorForm = gcnew AdvisorView();
	public:
		MainSplash(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainSplash()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblTitle1;
	protected:
	private: System::Windows::Forms::Label^  lblTitle2;
	private: System::Windows::Forms::Button^  btnStudent;
	private: System::Windows::Forms::Button^  btnAdvisor;
	private: System::Windows::Forms::Panel^  panel1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainSplash::typeid));
			this->lblTitle1 = (gcnew System::Windows::Forms::Label());
			this->lblTitle2 = (gcnew System::Windows::Forms::Label());
			this->btnStudent = (gcnew System::Windows::Forms::Button());
			this->btnAdvisor = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblTitle1
			// 
			this->lblTitle1->AutoSize = true;
			this->lblTitle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle1->Location = System::Drawing::Point(133, 11);
			this->lblTitle1->Name = L"lblTitle1";
			this->lblTitle1->Size = System::Drawing::Size(195, 24);
			this->lblTitle1->TabIndex = 0;
			this->lblTitle1->Text = L"Welcome To Entec!";
			// 
			// lblTitle2
			// 
			this->lblTitle2->AutoSize = true;
			this->lblTitle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle2->Location = System::Drawing::Point(9, 35);
			this->lblTitle2->Name = L"lblTitle2";
			this->lblTitle2->Size = System::Drawing::Size(482, 24);
			this->lblTitle2->TabIndex = 1;
			this->lblTitle2->Text = L"Please Select The Type Of User You Are To Begin";
			// 
			// btnStudent
			// 
			this->btnStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStudent->Location = System::Drawing::Point(169, 240);
			this->btnStudent->Name = L"btnStudent";
			this->btnStudent->Size = System::Drawing::Size(158, 24);
			this->btnStudent->TabIndex = 2;
			this->btnStudent->Text = L"Student";
			this->btnStudent->UseVisualStyleBackColor = true;
			this->btnStudent->Click += gcnew System::EventHandler(this, &MainSplash::btnStudent_Click);
			// 
			// btnAdvisor
			// 
			this->btnAdvisor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdvisor->Location = System::Drawing::Point(453, 240);
			this->btnAdvisor->Name = L"btnAdvisor";
			this->btnAdvisor->Size = System::Drawing::Size(158, 24);
			this->btnAdvisor->TabIndex = 3;
			this->btnAdvisor->Text = L"Advisor";
			this->btnAdvisor->UseVisualStyleBackColor = true;
			this->btnAdvisor->Click += gcnew System::EventHandler(this, &MainSplash::btnAdvisor_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->panel1->Controls->Add(this->lblTitle2);
			this->panel1->Controls->Add(this->lblTitle1);
			this->panel1->Location = System::Drawing::Point(147, 125);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(497, 75);
			this->panel1->TabIndex = 4;
			// 
			// MainSplash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(752, 393);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnAdvisor);
			this->Controls->Add(this->btnStudent);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainSplash";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"EnTec Advisor Apointments";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: 
			System::Void btnStudent_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->Hide();
				while (true)
				{
					StudentSplash^ studentForm = gcnew StudentSplash(this);
					studentForm->ShowDialog();
					studentForm->Hide();
				}
					

			}
			System::Void btnAdvisor_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->Hide();
				this->advisorForm->Show();
			}

	};
}
