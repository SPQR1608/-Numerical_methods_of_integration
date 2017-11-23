#pragma once
#include <cmath>

namespace lab1 {

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;



	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;







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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(198, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(369, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Численные методы интегрирования";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Начало отрезка";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Конец отрезка";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(215, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(215, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(197, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Количество разбиений, n";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(215, 114);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(392, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"f(x)=cos(x+2)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(392, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Функция";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(281, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 20);
			this->label7->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(276, 268);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 20);
			this->label8->TabIndex = 12;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(15, 201);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(237, 24);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Метод прямоугольников";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(12, 268);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(169, 24);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"Метод трапеций";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(12, 338);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(172, 24);
			this->checkBox3->TabIndex = 18;
			this->checkBox3->Text = L"Метод Симпсона";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(276, 342);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(11, 155);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 20);
			this->label10->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(392, 103);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(294, 20);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Точное значение = -1.1000442827";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(501, 166);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(123, 20);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Погрешность";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(502, 201);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 20);
			this->label14->TabIndex = 25;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(496, 269);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 20);
			this->label15->TabIndex = 26;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(502, 342);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 20);
			this->label16->TabIndex = 27;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label11->Location = System::Drawing::Point(497, 305);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 16);
			this->label11->TabIndex = 28;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label17->Location = System::Drawing::Point(497, 370);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 16);
			this->label17->TabIndex = 29;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label18->Location = System::Drawing::Point(502, 234);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 16);
			this->label18->TabIndex = 30;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label19->Location = System::Drawing::Point(336, 370);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(154, 16);
			this->label19->TabIndex = 31;
			this->label19->Text = L"Остаточный член = ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label20->Location = System::Drawing::Point(336, 305);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(154, 16);
			this->label20->TabIndex = 32;
			this->label20->Text = L"Остаточный член = ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label21->Location = System::Drawing::Point(336, 234);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(154, 16);
			this->label21->TabIndex = 33;
			this->label21->Text = L"Остаточный член = ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 395);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double a, b, n, h;
		double Tr = -1.1000442827;

		double func_y(double x)
		{
			return cos(x + 2);
		}

		double M1(double x){
			return -sin(x + 2);
		}
		double M2(double x){
			return -cos(x + 2);
		}
		double M4(double x){
			return cos(x + 2);
		}

		double Rect_Solve(double a, double b, double n)
		{
			double F=0;
			double h1;
			if (a>b)
			{
				return 0;
			}
			double x = a;

			double S = 0;
			double L = 0, R = 0;
			double M0;
			
			/*do{
				h = (b - a) / n;
				for (int i = 0; i < n - 1; i++){
					h1 = a + i*h;
					S += h*func_y(h1);
				}
				F = eps / abs(func_y(b) - func_y(a));
				n += 100;
			} while (h < F);*/
			while (x <= b){
				S += h*(func_y(x + h / 2.));
				x += h;
			}
			label14->Text = Convert::ToString(abs(abs(Tr) - abs(S)));
			/*x = a;
			for (int i = 0; i < n-1; i++){
				L += h*func_y(x);
				x += h;
			}
			x = a;
			for (int i = 1; i < n; i++){
				R += h*func_y(x);
				x += h;
			}
			label18->Text = Convert::ToString(abs(L-R));*/
			M0 = M1(a);
			for (int i = 0; i < n; i++){
				h1 += h;
				if (M1(h1)>M0){
					M0 = M1(h1);
				}
			}
			F = -((pow((b - a), 2)) / (24*n*n))*M0;
			label18->Text = Convert::ToString(F);
			
			return S;
		}

		double Trap_Solve(double a, double b, double n)
		{
			if (a>b)
			{
				return 0;
			}
			double x = a;
			double S = 0;
			double M0, M, h1, F=0;
			M0 = M2(a);
			for (int i = 0; i < n; i++){
				h1 += h;
				if (M2(h1)>M0){
					M0 = M2(h1);
				}
			}
			F = -((pow((b - a), 3)) / (12 * n*n))*M0;

			label11->Text = Convert::ToString(F);

			while (x <= b)
			{
				S += h*(func_y(x) + func_y(x + h)) / 2;
				x += h;
			}
			label15->Text = Convert::ToString(abs(abs(Tr) - abs(S)));

			return S;
		}


		double Simpson(double a, double b, double n)
		{
			double sum = 0;
			double S = 0;
			double x0 = a;
			double x1 = a + h;
			double F = 0, M0, h1;
			/*for (unsigned i = 0; i <= n - 1; i++) {
				sum += func_y(x0) + 4 * func_y(x0 + h/ 2) + func_y(x1);
				x0 += h;
				x1 += h;
			}
			S = (h / 6)*sum;*/

			for (int i = 0; i <= n - 1; i++){
				if (i == 0 || i == n){
					S += h / 3 * func_y(x0);
				}
				if (i % 2 == 1){
					S += h / 3 *(4*func_y(x0));
				}
				if (i % 2 == 0){
					S += h / 3 * (2*func_y(x0));
				}
				x0 += h;
			}
			label16->Text = Convert::ToString(abs(abs(Tr) - abs(S)));

			M0 = M2(a);
			for (int i = 0; i < n; i++){
				h1 += h;
				if (M4(h1)>M0){
					M0 = M4(h1);
				}
			}
			F = (-(pow((b - a), 5) )/ (180 * pow(n,4)))*M0;
			label17->Text = Convert::ToString(F);
			return S;
		}

		void Vvod(){
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			n = Convert::ToDouble(textBox3->Text);
		}

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (checkBox1->Checked == false){
				 label7->Text = Convert::ToString("");
				 label14->Text = Convert::ToString("");
				 label18->Text = Convert::ToString("");
			 }
			 else{
				 Vvod();
				 Pass();
				 label7->Text = Convert::ToString(round((Rect_Solve(a, b, n)) * 10000000000) / 10000000000);
				 //label7->Text = Convert::ToString(Rect_Solve(a, b, n));
			 }
			
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox2->Checked == false){
				 label8->Text = Convert::ToString("");
				 label15->Text = Convert::ToString("");
				 label11->Text = Convert::ToString("");
			 }
			 else{
				 Vvod();
				 Pass();
				 label8->Text = Convert::ToString(round((Trap_Solve(a, b, n)) * 10000000000) / 10000000000);
			 }
				
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (checkBox3->Checked == false){
				 label9->Text = Convert::ToString("");
				 label16->Text = Convert::ToString("");
				 label17->Text = Convert::ToString("");
			 }
			 else{
				 Vvod();
				 Pass();
				 label9->Text = Convert::ToString(round((Simpson(a, b, n)) * 10000000000) / 10000000000);
			 }
				 
}
		 void Pass(){
			 h = (b - a) / n;
			 label10->Text = Convert::ToString("Шаг = "+h);
		 }

};
}
