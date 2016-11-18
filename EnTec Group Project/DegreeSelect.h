#pragma once


namespace EnTec_Group_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DegreeSelect
	/// </summary>
	public ref class DegreeSelect : public System::Windows::Forms::Form
	{
	public:
		DegreeSelect(void)
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
		~DegreeSelect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  gbEngineering;
	private: System::Windows::Forms::GroupBox^  gbTechnology;
	protected:


	protected:

	private: System::Windows::Forms::GroupBox^  gbMAGIC;
	private: System::Windows::Forms::RadioButton^  rdTechnology;
	private: System::Windows::Forms::RadioButton^  rbEngineering;
	private: System::Windows::Forms::RadioButton^  rbMAGIC;

	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::RadioButton^  rbEngineering9;

	private: System::Windows::Forms::RadioButton^  rbEngineering8;

	private: System::Windows::Forms::RadioButton^  rbEngineering7;

	private: System::Windows::Forms::RadioButton^  rbEngineering6;

	private: System::Windows::Forms::RadioButton^  rbEngineering5;

	private: System::Windows::Forms::RadioButton^  rbEngineering4;

	private: System::Windows::Forms::RadioButton^  rbEngineering3;

	private: System::Windows::Forms::RadioButton^  rbEngineering2;

	private: System::Windows::Forms::RadioButton^  rbEngineering1;
	private: System::Windows::Forms::RadioButton^  rbEngineering10;
	private: System::Windows::Forms::RadioButton^  rbEngineering11;
	private: System::Windows::Forms::RadioButton^  rbEngineering14;




	private: System::Windows::Forms::RadioButton^  rbEngineering13;

	private: System::Windows::Forms::RadioButton^  rbEngineering12;

	private: System::Windows::Forms::TextBox^  tbEngineeringOther;
	private: System::Windows::Forms::RadioButton^  rdEngineeringOther;
	private: System::Windows::Forms::TextBox^  tbTechnologyOther;
	private: System::Windows::Forms::RadioButton^  rdTechnologyOther;
	private: System::Windows::Forms::RadioButton^  rdTechnology10;

	private: System::Windows::Forms::RadioButton^  rdTechnology9;

	private: System::Windows::Forms::RadioButton^  rdTechnology8;

	private: System::Windows::Forms::RadioButton^  rdTechnology7;

	private: System::Windows::Forms::RadioButton^  rdTechnology6;

	private: System::Windows::Forms::RadioButton^  rdTechnology5;

	private: System::Windows::Forms::RadioButton^  rdTechnology4;

	private: System::Windows::Forms::RadioButton^  rdTechnology3;

	private: System::Windows::Forms::RadioButton^  rdTechnology2;

	private: System::Windows::Forms::RadioButton^  rdTechnology1;
	private: System::Windows::Forms::RadioButton^  rbMAGIC2;


	private: System::Windows::Forms::RadioButton^  rbMAGIC1;

	private: System::Windows::Forms::Button^  btnBack;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DegreeSelect::typeid));
			this->gbEngineering = (gcnew System::Windows::Forms::GroupBox());
			this->tbEngineeringOther = (gcnew System::Windows::Forms::TextBox());
			this->rdEngineeringOther = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering14 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering13 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering12 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering11 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering10 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering9 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering8 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering7 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering6 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering5 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering4 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering3 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering2 = (gcnew System::Windows::Forms::RadioButton());
			this->gbTechnology = (gcnew System::Windows::Forms::GroupBox());
			this->tbTechnologyOther = (gcnew System::Windows::Forms::TextBox());
			this->rdTechnologyOther = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology10 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology9 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology8 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology7 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology6 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology5 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology4 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology3 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology2 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology1 = (gcnew System::Windows::Forms::RadioButton());
			this->gbMAGIC = (gcnew System::Windows::Forms::GroupBox());
			this->rbMAGIC2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbMAGIC1 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering = (gcnew System::Windows::Forms::RadioButton());
			this->rbMAGIC = (gcnew System::Windows::Forms::RadioButton());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->gbEngineering->SuspendLayout();
			this->gbTechnology->SuspendLayout();
			this->gbMAGIC->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbEngineering
			// 
			this->gbEngineering->Controls->Add(this->tbEngineeringOther);
			this->gbEngineering->Controls->Add(this->rdEngineeringOther);
			this->gbEngineering->Controls->Add(this->rbEngineering1);
			this->gbEngineering->Controls->Add(this->rbEngineering14);
			this->gbEngineering->Controls->Add(this->rbEngineering13);
			this->gbEngineering->Controls->Add(this->rbEngineering12);
			this->gbEngineering->Controls->Add(this->rbEngineering11);
			this->gbEngineering->Controls->Add(this->rbEngineering10);
			this->gbEngineering->Controls->Add(this->rbEngineering9);
			this->gbEngineering->Controls->Add(this->rbEngineering8);
			this->gbEngineering->Controls->Add(this->rbEngineering7);
			this->gbEngineering->Controls->Add(this->rbEngineering6);
			this->gbEngineering->Controls->Add(this->rbEngineering5);
			this->gbEngineering->Controls->Add(this->rbEngineering4);
			this->gbEngineering->Controls->Add(this->rbEngineering3);
			this->gbEngineering->Controls->Add(this->rbEngineering2);
			this->gbEngineering->Enabled = false;
			this->gbEngineering->Location = System::Drawing::Point(258, 26);
			this->gbEngineering->Name = L"gbEngineering";
			this->gbEngineering->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbEngineering->Size = System::Drawing::Size(225, 355);
			this->gbEngineering->TabIndex = 0;
			this->gbEngineering->TabStop = false;
			// 
			// tbEngineeringOther
			// 
			this->tbEngineeringOther->Location = System::Drawing::Point(28, 329);
			this->tbEngineeringOther->Name = L"tbEngineeringOther";
			this->tbEngineeringOther->Size = System::Drawing::Size(191, 20);
			this->tbEngineeringOther->TabIndex = 15;
			// 
			// rdEngineeringOther
			// 
			this->rdEngineeringOther->AutoSize = true;
			this->rdEngineeringOther->Location = System::Drawing::Point(7, 333);
			this->rdEngineeringOther->Name = L"rdEngineeringOther";
			this->rdEngineeringOther->Size = System::Drawing::Size(14, 13);
			this->rdEngineeringOther->TabIndex = 14;
			this->rdEngineeringOther->TabStop = true;
			this->rdEngineeringOther->UseVisualStyleBackColor = true;
			// 
			// rbEngineering1
			// 
			this->rbEngineering1->AutoSize = true;
			this->rbEngineering1->Location = System::Drawing::Point(7, 11);
			this->rbEngineering1->Name = L"rbEngineering1";
			this->rbEngineering1->Size = System::Drawing::Size(138, 17);
			this->rbEngineering1->TabIndex = 0;
			this->rbEngineering1->TabStop = true;
			this->rbEngineering1->Text = L"A.A. Architecture 10905";
			this->rbEngineering1->UseVisualStyleBackColor = true;
			// 
			// rbEngineering14
			// 
			this->rbEngineering14->AutoSize = true;
			this->rbEngineering14->Location = System::Drawing::Point(7, 311);
			this->rbEngineering14->Name = L"rbEngineering14";
			this->rbEngineering14->Size = System::Drawing::Size(159, 17);
			this->rbEngineering14->TabIndex = 13;
			this->rbEngineering14->TabStop = true;
			this->rbEngineering14->Text = L"A.S. Electronics Engineering";
			this->rbEngineering14->UseVisualStyleBackColor = true;
			// 
			// rbEngineering13
			// 
			this->rbEngineering13->AutoSize = true;
			this->rbEngineering13->Location = System::Drawing::Point(7, 288);
			this->rbEngineering13->Name = L"rbEngineering13";
			this->rbEngineering13->Size = System::Drawing::Size(152, 17);
			this->rbEngineering13->TabIndex = 12;
			this->rbEngineering13->TabStop = true;
			this->rbEngineering13->Text = L"A.S. Computer Engineering";
			this->rbEngineering13->UseVisualStyleBackColor = true;
			// 
			// rbEngineering12
			// 
			this->rbEngineering12->AutoSize = true;
			this->rbEngineering12->Location = System::Drawing::Point(7, 265);
			this->rbEngineering12->Name = L"rbEngineering12";
			this->rbEngineering12->Size = System::Drawing::Size(168, 17);
			this->rbEngineering12->TabIndex = 11;
			this->rbEngineering12->TabStop = true;
			this->rbEngineering12->Text = L"A.S. Advanced Manufacturing";
			this->rbEngineering12->UseVisualStyleBackColor = true;
			// 
			// rbEngineering11
			// 
			this->rbEngineering11->AutoSize = true;
			this->rbEngineering11->Location = System::Drawing::Point(7, 241);
			this->rbEngineering11->Name = L"rbEngineering11";
			this->rbEngineering11->Size = System::Drawing::Size(159, 17);
			this->rbEngineering11->TabIndex = 10;
			this->rbEngineering11->TabStop = true;
			this->rbEngineering11->Text = L"B.S. Electronics Engineering";
			this->rbEngineering11->UseVisualStyleBackColor = true;
			// 
			// rbEngineering10
			// 
			this->rbEngineering10->AutoSize = true;
			this->rbEngineering10->Location = System::Drawing::Point(7, 218);
			this->rbEngineering10->Name = L"rbEngineering10";
			this->rbEngineering10->Size = System::Drawing::Size(120, 17);
			this->rbEngineering10->TabIndex = 9;
			this->rbEngineering10->TabStop = true;
			this->rbEngineering10->Text = L"A.A. Science 10904";
			this->rbEngineering10->UseVisualStyleBackColor = true;
			// 
			// rbEngineering9
			// 
			this->rbEngineering9->AutoSize = true;
			this->rbEngineering9->Location = System::Drawing::Point(7, 195);
			this->rbEngineering9->Name = L"rbEngineering9";
			this->rbEngineering9->Size = System::Drawing::Size(113, 17);
			this->rbEngineering9->TabIndex = 8;
			this->rbEngineering9->TabStop = true;
			this->rbEngineering9->Text = L"A.A. Ocean 10913";
			this->rbEngineering9->UseVisualStyleBackColor = true;
			// 
			// rbEngineering8
			// 
			this->rbEngineering8->AutoSize = true;
			this->rbEngineering8->Location = System::Drawing::Point(7, 172);
			this->rbEngineering8->Name = L"rbEngineering8";
			this->rbEngineering8->Size = System::Drawing::Size(136, 17);
			this->rbEngineering8->TabIndex = 7;
			this->rbEngineering8->TabStop = true;
			this->rbEngineering8->Text = L"A.A. Mechanical 10911";
			this->rbEngineering8->UseVisualStyleBackColor = true;
			// 
			// rbEngineering7
			// 
			this->rbEngineering7->AutoSize = true;
			this->rbEngineering7->Location = System::Drawing::Point(7, 149);
			this->rbEngineering7->Name = L"rbEngineering7";
			this->rbEngineering7->Size = System::Drawing::Size(123, 17);
			this->rbEngineering7->TabIndex = 6;
			this->rbEngineering7->TabStop = true;
			this->rbEngineering7->Text = L"A.A. Industrial 10912";
			this->rbEngineering7->UseVisualStyleBackColor = true;
			this->rbEngineering7->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::radioButton6_CheckedChanged);
			// 
			// rbEngineering6
			// 
			this->rbEngineering6->AutoSize = true;
			this->rbEngineering6->Location = System::Drawing::Point(7, 126);
			this->rbEngineering6->Name = L"rbEngineering6";
			this->rbEngineering6->Size = System::Drawing::Size(131, 17);
			this->rbEngineering6->TabIndex = 5;
			this->rbEngineering6->TabStop = true;
			this->rbEngineering6->Text = L"A.A. Geomatics 10909";
			this->rbEngineering6->UseVisualStyleBackColor = true;
			// 
			// rbEngineering5
			// 
			this->rbEngineering5->AutoSize = true;
			this->rbEngineering5->Location = System::Drawing::Point(7, 103);
			this->rbEngineering5->Name = L"rbEngineering5";
			this->rbEngineering5->Size = System::Drawing::Size(124, 17);
			this->rbEngineering5->TabIndex = 4;
			this->rbEngineering5->TabStop = true;
			this->rbEngineering5->Text = L"A.A. Electrical 10910";
			this->rbEngineering5->UseVisualStyleBackColor = true;
			// 
			// rbEngineering4
			// 
			this->rbEngineering4->AutoSize = true;
			this->rbEngineering4->Location = System::Drawing::Point(7, 80);
			this->rbEngineering4->Name = L"rbEngineering4";
			this->rbEngineering4->Size = System::Drawing::Size(126, 17);
			this->rbEngineering4->TabIndex = 3;
			this->rbEngineering4->TabStop = true;
			this->rbEngineering4->Text = L"A.A. Computer 10705";
			this->rbEngineering4->UseVisualStyleBackColor = true;
			// 
			// rbEngineering3
			// 
			this->rbEngineering3->AutoSize = true;
			this->rbEngineering3->Location = System::Drawing::Point(7, 57);
			this->rbEngineering3->Name = L"rbEngineering3";
			this->rbEngineering3->Size = System::Drawing::Size(100, 17);
			this->rbEngineering3->TabIndex = 2;
			this->rbEngineering3->TabStop = true;
			this->rbEngineering3->Text = L"A.A. Civil 10908";
			this->rbEngineering3->UseVisualStyleBackColor = true;
			// 
			// rbEngineering2
			// 
			this->rbEngineering2->AutoSize = true;
			this->rbEngineering2->Location = System::Drawing::Point(7, 34);
			this->rbEngineering2->Name = L"rbEngineering2";
			this->rbEngineering2->Size = System::Drawing::Size(124, 17);
			this->rbEngineering2->TabIndex = 1;
			this->rbEngineering2->TabStop = true;
			this->rbEngineering2->Text = L"A.A. Chemical 10906";
			this->rbEngineering2->UseVisualStyleBackColor = true;
			// 
			// gbTechnology
			// 
			this->gbTechnology->Controls->Add(this->tbTechnologyOther);
			this->gbTechnology->Controls->Add(this->rdTechnologyOther);
			this->gbTechnology->Controls->Add(this->rdTechnology10);
			this->gbTechnology->Controls->Add(this->rdTechnology9);
			this->gbTechnology->Controls->Add(this->rdTechnology8);
			this->gbTechnology->Controls->Add(this->rdTechnology7);
			this->gbTechnology->Controls->Add(this->rdTechnology6);
			this->gbTechnology->Controls->Add(this->rdTechnology5);
			this->gbTechnology->Controls->Add(this->rdTechnology4);
			this->gbTechnology->Controls->Add(this->rdTechnology3);
			this->gbTechnology->Controls->Add(this->rdTechnology2);
			this->gbTechnology->Controls->Add(this->rdTechnology1);
			this->gbTechnology->Enabled = false;
			this->gbTechnology->Location = System::Drawing::Point(12, 26);
			this->gbTechnology->Name = L"gbTechnology";
			this->gbTechnology->Size = System::Drawing::Size(225, 321);
			this->gbTechnology->TabIndex = 1;
			this->gbTechnology->TabStop = false;
			// 
			// tbTechnologyOther
			// 
			this->tbTechnologyOther->Location = System::Drawing::Point(27, 238);
			this->tbTechnologyOther->Name = L"tbTechnologyOther";
			this->tbTechnologyOther->Size = System::Drawing::Size(191, 20);
			this->tbTechnologyOther->TabIndex = 16;
			// 
			// rdTechnologyOther
			// 
			this->rdTechnologyOther->AutoSize = true;
			this->rdTechnologyOther->Location = System::Drawing::Point(7, 241);
			this->rdTechnologyOther->Name = L"rdTechnologyOther";
			this->rdTechnologyOther->Size = System::Drawing::Size(14, 13);
			this->rdTechnologyOther->TabIndex = 16;
			this->rdTechnologyOther->TabStop = true;
			this->rdTechnologyOther->UseVisualStyleBackColor = true;
			// 
			// rdTechnology10
			// 
			this->rdTechnology10->AutoSize = true;
			this->rdTechnology10->Location = System::Drawing::Point(7, 218);
			this->rdTechnology10->Name = L"rdTechnology10";
			this->rdTechnology10->Size = System::Drawing::Size(205, 17);
			this->rdTechnology10->TabIndex = 13;
			this->rdTechnology10->TabStop = true;
			this->rdTechnology10->Text = L"A.S. Networking Services Technology";
			this->rdTechnology10->UseVisualStyleBackColor = true;
			// 
			// rdTechnology9
			// 
			this->rdTechnology9->AutoSize = true;
			this->rdTechnology9->Location = System::Drawing::Point(7, 195);
			this->rdTechnology9->Name = L"rdTechnology9";
			this->rdTechnology9->Size = System::Drawing::Size(180, 17);
			this->rdTechnology9->TabIndex = 12;
			this->rdTechnology9->TabStop = true;
			this->rdTechnology9->Text = L"A.S. Oracle Database Developer";
			this->rdTechnology9->UseVisualStyleBackColor = true;
			// 
			// rdTechnology8
			// 
			this->rdTechnology8->AutoSize = true;
			this->rdTechnology8->Location = System::Drawing::Point(7, 172);
			this->rdTechnology8->Name = L"rdTechnology8";
			this->rdTechnology8->Size = System::Drawing::Size(191, 17);
			this->rdTechnology8->TabIndex = 11;
			this->rdTechnology8->TabStop = true;
			this->rdTechnology8->Text = L"A.S. Oracle Database Administrator";
			this->rdTechnology8->UseVisualStyleBackColor = true;
			// 
			// rdTechnology7
			// 
			this->rdTechnology7->AutoSize = true;
			this->rdTechnology7->Location = System::Drawing::Point(7, 149);
			this->rdTechnology7->Name = L"rdTechnology7";
			this->rdTechnology7->Size = System::Drawing::Size(193, 17);
			this->rdTechnology7->TabIndex = 10;
			this->rdTechnology7->TabStop = true;
			this->rdTechnology7->Text = L"A.S. Microsoft Business Intelligence";
			this->rdTechnology7->UseVisualStyleBackColor = true;
			// 
			// rdTechnology6
			// 
			this->rdTechnology6->AutoSize = true;
			this->rdTechnology6->Location = System::Drawing::Point(7, 126);
			this->rdTechnology6->Name = L"rdTechnology6";
			this->rdTechnology6->Size = System::Drawing::Size(203, 17);
			this->rdTechnology6->TabIndex = 9;
			this->rdTechnology6->TabStop = true;
			this->rdTechnology6->Text = L"A.S. Microsoft Database Administrator";
			this->rdTechnology6->UseVisualStyleBackColor = true;
			// 
			// rdTechnology5
			// 
			this->rdTechnology5->AutoSize = true;
			this->rdTechnology5->Location = System::Drawing::Point(6, 101);
			this->rdTechnology5->Name = L"rdTechnology5";
			this->rdTechnology5->Size = System::Drawing::Size(205, 17);
			this->rdTechnology5->TabIndex = 8;
			this->rdTechnology5->TabStop = true;
			this->rdTechnology5->Text = L"A.S. Mobile Applications Development";
			this->rdTechnology5->UseVisualStyleBackColor = true;
			// 
			// rdTechnology4
			// 
			this->rdTechnology4->AutoSize = true;
			this->rdTechnology4->Location = System::Drawing::Point(7, 78);
			this->rdTechnology4->Name = L"rdTechnology4";
			this->rdTechnology4->Size = System::Drawing::Size(185, 17);
			this->rdTechnology4->TabIndex = 7;
			this->rdTechnology4->TabStop = true;
			this->rdTechnology4->Text = L"A.S. Bus Application Programming";
			this->rdTechnology4->UseVisualStyleBackColor = true;
			// 
			// rdTechnology3
			// 
			this->rdTechnology3->AutoSize = true;
			this->rdTechnology3->Location = System::Drawing::Point(7, 55);
			this->rdTechnology3->Name = L"rdTechnology3";
			this->rdTechnology3->Size = System::Drawing::Size(138, 17);
			this->rdTechnology3->TabIndex = 2;
			this->rdTechnology3->TabStop = true;
			this->rdTechnology3->Text = L"A.A. Computer Science ";
			this->rdTechnology3->UseVisualStyleBackColor = true;
			// 
			// rdTechnology2
			// 
			this->rdTechnology2->AutoSize = true;
			this->rdTechnology2->Location = System::Drawing::Point(7, 32);
			this->rdTechnology2->Name = L"rdTechnology2";
			this->rdTechnology2->Size = System::Drawing::Size(204, 17);
			this->rdTechnology2->TabIndex = 1;
			this->rdTechnology2->TabStop = true;
			this->rdTechnology2->Text = L"A.S. Information Systems Technology ";
			this->rdTechnology2->UseVisualStyleBackColor = true;
			// 
			// rdTechnology1
			// 
			this->rdTechnology1->AutoSize = true;
			this->rdTechnology1->Location = System::Drawing::Point(7, 9);
			this->rdTechnology1->Name = L"rdTechnology1";
			this->rdTechnology1->Size = System::Drawing::Size(204, 17);
			this->rdTechnology1->TabIndex = 0;
			this->rdTechnology1->TabStop = true;
			this->rdTechnology1->Text = L"A.A. Information Systems Technology ";
			this->rdTechnology1->UseVisualStyleBackColor = true;
			// 
			// gbMAGIC
			// 
			this->gbMAGIC->Controls->Add(this->rbMAGIC2);
			this->gbMAGIC->Controls->Add(this->rbMAGIC1);
			this->gbMAGIC->Enabled = false;
			this->gbMAGIC->Location = System::Drawing::Point(515, 26);
			this->gbMAGIC->Name = L"gbMAGIC";
			this->gbMAGIC->Size = System::Drawing::Size(225, 321);
			this->gbMAGIC->TabIndex = 2;
			this->gbMAGIC->TabStop = false;
			// 
			// rbMAGIC2
			// 
			this->rbMAGIC2->AutoSize = true;
			this->rbMAGIC2->Location = System::Drawing::Point(7, 34);
			this->rbMAGIC2->Name = L"rbMAGIC2";
			this->rbMAGIC2->Size = System::Drawing::Size(119, 17);
			this->rbMAGIC2->TabIndex = 1;
			this->rbMAGIC2->TabStop = true;
			this->rbMAGIC2->Text = L"Game Development";
			this->rbMAGIC2->UseVisualStyleBackColor = true;
			// 
			// rbMAGIC1
			// 
			this->rbMAGIC1->AutoSize = true;
			this->rbMAGIC1->Location = System::Drawing::Point(7, 11);
			this->rbMAGIC1->Name = L"rbMAGIC1";
			this->rbMAGIC1->Size = System::Drawing::Size(142, 17);
			this->rbMAGIC1->TabIndex = 0;
			this->rbMAGIC1->TabStop = true;
			this->rbMAGIC1->Text = L"Animation and Game Art ";
			this->rbMAGIC1->UseVisualStyleBackColor = true;
			// 
			// rdTechnology
			// 
			this->rdTechnology->AutoSize = true;
			this->rdTechnology->Location = System::Drawing::Point(12, 11);
			this->rdTechnology->Name = L"rdTechnology";
			this->rdTechnology->Size = System::Drawing::Size(81, 17);
			this->rdTechnology->TabIndex = 3;
			this->rdTechnology->TabStop = true;
			this->rdTechnology->Text = L"Technology";
			this->rdTechnology->UseVisualStyleBackColor = true;
			this->rdTechnology->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::rdTechnology_CheckedChanged);
			// 
			// rbEngineering
			// 
			this->rbEngineering->AutoSize = true;
			this->rbEngineering->Location = System::Drawing::Point(258, 11);
			this->rbEngineering->Name = L"rbEngineering";
			this->rbEngineering->Size = System::Drawing::Size(81, 17);
			this->rbEngineering->TabIndex = 4;
			this->rbEngineering->TabStop = true;
			this->rbEngineering->Text = L"Engineering";
			this->rbEngineering->UseVisualStyleBackColor = true;
			this->rbEngineering->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::rbEngineering_CheckedChanged);
			// 
			// rbMAGIC
			// 
			this->rbMAGIC->AutoSize = true;
			this->rbMAGIC->Location = System::Drawing::Point(515, 11);
			this->rbMAGIC->Name = L"rbMAGIC";
			this->rbMAGIC->Size = System::Drawing::Size(59, 17);
			this->rbMAGIC->TabIndex = 5;
			this->rbMAGIC->TabStop = true;
			this->rbMAGIC->Text = L"MAGIC";
			this->rbMAGIC->UseVisualStyleBackColor = true;
			this->rbMAGIC->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::rbMAGIC_CheckedChanged);
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(657, 358);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(83, 23);
			this->btnNext->TabIndex = 6;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &DegreeSelect::btnNext_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(10, 359);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(83, 23);
			this->btnBack->TabIndex = 7;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			// 
			// DegreeSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(752, 393);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->gbEngineering);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->rbMAGIC);
			this->Controls->Add(this->rbEngineering);
			this->Controls->Add(this->rdTechnology);
			this->Controls->Add(this->gbMAGIC);
			this->Controls->Add(this->gbTechnology);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DegreeSelect";
			this->Text = L"EnTec Advisor Apointments";
			this->gbEngineering->ResumeLayout(false);
			this->gbEngineering->PerformLayout();
			this->gbTechnology->ResumeLayout(false);
			this->gbTechnology->PerformLayout();
			this->gbMAGIC->ResumeLayout(false);
			this->gbMAGIC->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}


//Degree Type Radial Button Behavior
private: System::Void rbEngineering_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->gbEngineering->Enabled)
		this->gbEngineering->Enabled = false;
	else
		this->gbEngineering->Enabled = true;
}
private: System::Void rdTechnology_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->gbTechnology->Enabled)
		this->gbTechnology->Enabled = false;
	else
		this->gbTechnology->Enabled = true;
}
private: System::Void rbMAGIC_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->gbMAGIC->Enabled)
		this->gbMAGIC->Enabled = false;
	else
		this->gbMAGIC->Enabled = true;
}
};
}
