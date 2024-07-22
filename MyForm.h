#pragma once

namespace salary {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ Salary1;

	private: System::Windows::Forms::Label^ Salary2;
	private: System::Windows::Forms::Label^ Salary3;
	private: System::Windows::Forms::Button^ CalculateTax;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ OrgSalary;
	private: System::Windows::Forms::Label^ Tax;
	private: System::Windows::Forms::Label^ NetSalary;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Salary1 = (gcnew System::Windows::Forms::Label());
			this->Salary2 = (gcnew System::Windows::Forms::Label());
			this->Salary3 = (gcnew System::Windows::Forms::Label());
			this->CalculateTax = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->OrgSalary = (gcnew System::Windows::Forms::Label());
			this->Tax = (gcnew System::Windows::Forms::Label());
			this->NetSalary = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(53, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(176, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(51, 78);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(178, 20);
			this->textBox3->TabIndex = 2;
			// 
			// Salary1
			// 
			this->Salary1->AutoSize = true;
			this->Salary1->Location = System::Drawing::Point(3, 29);
			this->Salary1->Name = L"Salary1";
			this->Salary1->Size = System::Drawing::Size(42, 13);
			this->Salary1->TabIndex = 3;
			this->Salary1->Text = L"Salary1";
			this->Salary1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Salary2
			// 
			this->Salary2->AutoSize = true;
			this->Salary2->Location = System::Drawing::Point(5, 55);
			this->Salary2->Name = L"Salary2";
			this->Salary2->Size = System::Drawing::Size(42, 13);
			this->Salary2->TabIndex = 4;
			this->Salary2->Text = L"Salary2";
			this->Salary2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// Salary3
			// 
			this->Salary3->AutoSize = true;
			this->Salary3->Location = System::Drawing::Point(5, 81);
			this->Salary3->Name = L"Salary3";
			this->Salary3->Size = System::Drawing::Size(42, 13);
			this->Salary3->TabIndex = 5;
			this->Salary3->Text = L"Salary3";
			// 
			// CalculateTax
			// 
			this->CalculateTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CalculateTax->Location = System::Drawing::Point(76, 115);
			this->CalculateTax->Name = L"CalculateTax";
			this->CalculateTax->Size = System::Drawing::Size(109, 40);
			this->CalculateTax->TabIndex = 6;
			this->CalculateTax->Text = L"CalculateTax";
			this->CalculateTax->UseVisualStyleBackColor = true;
			this->CalculateTax->Click += gcnew System::EventHandler(this, &MyForm::CalculateTax_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(71, 173);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(176, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(69, 199);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(178, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(69, 225);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(176, 20);
			this->textBox6->TabIndex = 9;
			// 
			// OrgSalary
			// 
			this->OrgSalary->AutoSize = true;
			this->OrgSalary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrgSalary->Location = System::Drawing::Point(3, 174);
			this->OrgSalary->Name = L"OrgSalary";
			this->OrgSalary->Size = System::Drawing::Size(62, 15);
			this->OrgSalary->TabIndex = 10;
			this->OrgSalary->Text = L"org.Salary";
			// 
			// Tax
			// 
			this->Tax->AutoSize = true;
			this->Tax->Location = System::Drawing::Point(10, 202);
			this->Tax->Name = L"Tax";
			this->Tax->Size = System::Drawing::Size(28, 13);
			this->Tax->TabIndex = 11;
			this->Tax->Text = L"TAX";
			// 
			// NetSalary
			// 
			this->NetSalary->AutoSize = true;
			this->NetSalary->Location = System::Drawing::Point(5, 228);
			this->NetSalary->Name = L"NetSalary";
			this->NetSalary->Size = System::Drawing::Size(53, 13);
			this->NetSalary->TabIndex = 12;
			this->NetSalary->Text = L"NetSalary";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->NetSalary);
			this->Controls->Add(this->Tax);
			this->Controls->Add(this->OrgSalary);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->CalculateTax);
			this->Controls->Add(this->Salary3);
			this->Controls->Add(this->Salary2);
			this->Controls->Add(this->Salary1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void CalculateTax_Click(System::Object^ sender, System::EventArgs^ e) {
	double tax;
 double result = System::Convert::ToDouble(textBox1->Text) + System::Convert::ToDouble(textBox2->Text) + System::Convert::ToDouble(textBox3->Text);
		textBox4->Text = System::Convert::ToString(result);
		if (result > 40000 && result <70000) {
			 tax = result * 0.01;
			textBox5->Text = System::Convert::ToString(tax);
		}
		if (result > 70000 && result < 100000) {
			tax = result * 0.15;
			textBox5->Text = System::Convert::ToString(tax);
		}
		if (result > 100000 && result < 130000) {
			tax = result * 0.20;
			textBox5->Text = System::Convert::ToString(tax);
		}
		if (result > 130000 && result < 160000) {
			tax = result * 0.25;
			textBox5->Text = System::Convert::ToString(tax);
		}
		if (result > 160000 && result < 200000) {
			tax = result * 0.30;
			textBox5->Text = System::Convert::ToString(tax);
		}
		if (result > 200000) {
			tax = result * 0.40;
			textBox5->Text = System::Convert::ToString(tax);
		}
		double netsalary = System::Convert::ToDouble(result) - System::Convert::ToDouble(tax);
		textBox6->Text = System::Convert::ToString(netsalary);

}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
