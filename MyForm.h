#pragma once
#include <math.h>
#include <stdio.h>
#include"iostream"
#include"ctime"
#include<vector>
#include <algorithm>
#include <msclr\marshal_cppstd.h>

std::vector<double> v;
std::vector<double> v2;
std::vector<double> generated_x;
namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
	using namespace std;

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


	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ qi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ni;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label16;



	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->X, this->F_1,
					this->F_2
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->Location = System::Drawing::Point(449, 11);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(228, 271);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// X
			// 
			this->X->FillWeight = 120;
			this->X->HeaderText = L"n";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"X";
			this->F_1->MinimumWidth = 6;
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			this->F_1->Width = 125;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"P(X< x)";
			this->F_2->MinimumWidth = 6;
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			this->F_2->Width = 125;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(435, 272);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(692, 288);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 27);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 304);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"n";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 301);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 14;
			this->textBox1->Text = L"10";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(118, 304);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"а";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(135, 301);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 16;
			this->textBox2->Text = L"2";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(239, 306);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Right border";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(309, 301);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 18;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column2,
					this->Column1, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->i, this->qi, this->ni
			});
			this->dataGridView2->Location = System::Drawing::Point(12, 325);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(432, 62);
			this->dataGridView2->TabIndex = 19;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"En";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"`x";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"|En - `x|";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Dn";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"S^2";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"|Dn-S^2|";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Me^";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Re^";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->MinimumWidth = 6;
			this->i->Name = L"i";
			this->i->Width = 125;
			// 
			// qi
			// 
			this->qi->HeaderText = L"qi";
			this->qi->MinimumWidth = 6;
			this->qi->Name = L"qi";
			this->qi->Width = 125;
			// 
			// ni
			// 
			this->ni->HeaderText = L"ni";
			this->ni->MinimumWidth = 6;
			this->ni->Name = L"ni";
			this->ni->Width = 125;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(450, 350);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 2;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = -2;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(565, 254);
			this->zedGraphControl1->TabIndex = 20;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(398, 301);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"D";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(416, 303);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 20);
			this->textBox4->TabIndex = 23;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1103, 303);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(90, 20);
			this->textBox5->TabIndex = 24;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 537);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Границы отрезка";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1018, 187);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 27);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(9, 392);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(432, 129);
			this->dataGridView3->TabIndex = 29;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(112, 560);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 23);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Show_Gtable";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(682, 10);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(332, 271);
			this->chart1->TabIndex = 31;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click_2);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(350, 540);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(74, 20);
			this->textBox6->TabIndex = 32;
			this->textBox6->Text = L"0";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1100, 288);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"аlpha";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(686, 354);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 32;
			this->label7->Text = L"left";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(939, 354);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 13);
			this->label8->TabIndex = 33;
			this->label8->Text = L"right";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(939, 373);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 34;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(686, 375);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 35;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1082, 469);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(27, 13);
			this->label11->TabIndex = 36;
			this->label11->Text = L"R0: ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1100, 469);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 37;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1073, 570);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 38;
			this->label13->Text = L"H0: ";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1098, 570);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 39;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1102, 533);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 20);
			this->textBox7->TabIndex = 42;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged_1);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1034, 536);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(64, 13);
			this->label15->TabIndex = 40;
			this->label15->Text = L"1 - F_xi(R0):";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(800, 536);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 41;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(546, 299);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(76, 20);
			this->textBox8->TabIndex = 43;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1315, 650);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"Random value modeling";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:

	private: double rand_search()
	{

		return (((double)rand()) / RAND_MAX);

	}
	private:  double find_bor(float& a)
	{
		double p;
		p = double(acosf(1 - a / 2) / a);
		return p;
	}
	private:  double get_continuous_value(double& F, float& a)
	{
		double x;

		if (F == 0)
		{
			x = -pow(2, 0.25);
			return x;
		}
		if (F == 1)
		{

			return find_bor(a);
		}
		if (F < 0.5)
		{

			x = -pow((2 - 4 * F), 0.25);
			return x;
		}
		if (F >= 0.5)
		{
			if (F == 0.5)
			{
				return 0;
			}
			float k = float(1 - a * (F - 0.5));
			x = double(acosf(k) / a);
			return x;
		}


	}
	 private: double search_f(double m, float a)
	 {
		 double res;
		 if (m > -pow(2, 1.25) && m <= 0)
		 {
			 res = -pow(m, 3);
		 }
		 if (m > 0 && m < find_bor(a))
		 {
			 res = sinf(a * m);
		 }
		 return res;
	 }
	
	private: double searh_En(float& a, double& p)// поиск мат.ожидания
	{
		double En;
		En = (-pow(2, 1.25)) / 5 - p / a * cosf(a * p) + sinf(a * p) / pow(a, 2);
		return En;

	}
	private: double search_Dn(float& a, double& p)// поиск дисперсии
	{
		double Dn;
		Dn = pow(2, 1.5) / 6 - pow(p, 2) * cosf(a * p) / a + 2 * p * sinf(a * p) / pow(a, 2) + 2 / pow(a, 3) * cosf(a * p) - 2 / pow(a, 3) - pow(searh_En(a, p), 2);
		return Dn;
	}

	private: double func(const double y, double* arr, const int n)
	{
		int id = 0;
		for (int i = 0; i < n; i++)
		{
			if (y >= arr[i])
			{
				++id;
			}
		}
		return (double)(id) / (double)(n);
	}

		   void get_line_segment(char* s, vector<double>& temp,int& n)
		   {
			   char s2[20] = "";
			   int key = 0;
			   double m;
			   const int N = strlen(s);
			   std::cout << "N: " << N << "\n";
			   for (int i = 0; i < N; i++)
			   {
				   if (s[i] != ',')
				   {
					   s2[key] = s[i];
					   key++;
				   }

				   else
				   {
					   m = atof(s2);
					   temp.push_back(m);
					   n++;
					   for (size_t j = 0; j < key; ++j)
						   s2[j] = 0;
					   key = 0;
				   }
			   }
			   m = atof(s2);
			   temp.push_back(m);


		   }
	
		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	srand(time(0));
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
	float a = (float)(Convert::ToDouble(textBox2->Text));
	int n = (Convert::ToDouble(textBox1->Text));
	const int number_splits = 10;// число разбиений 
	double F = find_bor(a);
	double Y;
	this->textBox3->Text = Convert::ToString(F);
	double  sum = 0;
	double xq; // выборочное среднее 
	double* arr = new double[n];
	 double temp;
	double S; // выборочная дисперсия 
	double R;//размах выборки 
	double D = 0; // Мера расхождения
	double max = 0;
	int count = 0;
	this->dataGridView1->ColumnCount = 3;
	this->dataGridView1->RowCount = n;
	v.push_back(-pow(2, 0.25));
	label10->Text = Convert::ToString(-pow(2, 0.25));
	label9->Text = Convert::ToString(find_bor(a));

	double* yy = new double[n];
	for (int i = 0; i < n; i++)
	{
		yy[i] = rand_search();
	}
	std::sort(yy, yy + (n));
	for (int i = 0; i < n; i++)
	{
		dataGridView1->Rows[i]->Cells[2]->Value = yy[i];
	}
	for (int i = 0; i < n; i++)
	{
		dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
		arr[i] = get_continuous_value(yy[i], a);
		sum += arr[i];
	}
	
	/*for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// меняем элементы местами
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		
	}*/
	
	/*int i = 0;
	int j = 1;
	while (j - 1 < n / 100)
	{
		while (i  < 100*j)
		{
			dataGridView1->Rows[i]->Cells[1]->Value = arr[i];
			i++;
		}
		j++;
	}
	*/
	
	
	int i = 0;
	while (i < n)
	{
		generated_x.push_back(arr[i]);
		dataGridView1->Rows[i]->Cells[1]->Value = arr[i];
		i++;
	}
	
	
	/*for (int i = 0; i < n; i++)
	{
		if (arr[i] <= 0)
		{
			max = fabs(1.0 / n * (i + 1) - 0.5 + pow(arr[i], 4) / 4);
			if (max > D)
			{
				D = max;
			}
		}
		else
		{
			max = fabs(1.0 / n * (i + 1) - 0.5 + 1 / a * (cosf(a * arr[i]) - 1));
			if (max > D)
			{
				D = max;
			}
		}
		
	}
	*/
	for (double y = -pow(2, 0.25); y < find_bor(a); y += 0.01)
	{
		if ( y <= 0)
		{
			max = fabs(func(y, arr, n) - 0.5 + pow(y, 4) / 4);
			if (max > D)
			{
				D = max;
			}
		}
		else
		{
			max = fabs(func(y, arr, n) - 0.5 + 1 / a * (cosf(a * y) - 1));
			if (max > D)
			{
				D = max;
			}
		}

	}
	
	
	for (double y = -pow(2, 0.25); y < 0; y += 0.01)
	{


		f1_list->Add(y, 0.5 - pow(y,4)/4);
	}
	for (double y = 0; y < find_bor(a); y += 0.01)
	{
		f1_list->Add(y, 0.5 - 1 / a * (cosf(a * y) - 1));
	}
	for (double y = -pow(2, 0.25); y < find_bor(a); y += 0.01)
	{
		f2_list->Add(y, func(y, arr, n));
	}

	
	
	xq = sum / n;
	for (int i = 0; i < n; i++)
	{
		double temp = (double )dataGridView1->Rows[i]->Cells[1]->Value;
		S += (temp - xq) * (temp - xq);
	}

	S = S / n; 
	R = (double )dataGridView1->Rows[n-1]->Cells[1]->Value - (double) dataGridView1->Rows[1]->Cells[1]->Value;
	double X = searh_En(a, F) - sum / n; // |En - x`| |мат. ожидание - выоборочное среднее|
	
	double Me = 0; // выборочная медиана
	if (n % 2 == 1)
	{
		Me = arr[n / 2];
	}
	if (n % 2 == 0)
	{
		Me = (arr[(n-1)/ 2] + arr[n / 2]) / 2;
	}
	this->dataGridView2->Rows[0]->Cells[0]->Value = searh_En(a, F);
	this->dataGridView2->Rows[0]->Cells[1]->Value = xq;
	this->dataGridView2->Rows[0]->Cells[2]->Value = fabsf(X);
	this->dataGridView2->Rows[0]->Cells[3]->Value = search_Dn(a, F);
	this->dataGridView2->Rows[0]->Cells[4]->Value = S; //выборочная дисперсия
	this->dataGridView2->Rows[0]->Cells[5]->Value = fabs((double)this->dataGridView2->Rows[0]->Cells[3]->Value - (double)this->dataGridView2->Rows[0]->Cells[4]->Value);
	this->dataGridView2->Rows[0]->Cells[6]->Value = Me;
	this->dataGridView2->Rows[0]->Cells[7]->Value = R;
	LineItem Curve1 = panel->AddCurve("", f1_list, Color::Red, SymbolType::None);
	LineItem Curve2 = panel->AddCurve("", f2_list, Color::Blue, SymbolType::None);
	zedGraphControl1->Invalidate();
	this->textBox4->Text = Convert::ToString(D);
	delete[] arr;
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		 }
				  void StringToDouble(std::vector<double>& bounders, const std::string& s)
				  {
					  std::string tmp = "";
					  tmp.resize(20);
					  size_t it = 0;
					  for (size_t i = 0; i < s.size(); ++i)
					  {
						  if (s[i] != ';')
						  {
							  tmp[it++] = s[i];
						  }
						  else
						  {
							  bounders.push_back(atof(tmp.c_str()));
							  it = 0;
							  tmp = "";
							  tmp.resize(20);
						  }
					  }
					  bounders.push_back(atof(tmp.c_str()));
				  }
				  double F(double x, double a)
				  {
					  if (x < 0)
					  {
						  return 0.5 - pow(x, 4) / (double)4;
					  }
					  else
					  {
						  return 0.5 - (cosf(a * x) - 1) / a;
					  }
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			 std::string s = msclr::interop::marshal_as<std::string>(textBox6->Text);
			 std::vector<double> bounders;
			 int n = 1000;
			 bounders.push_back(-pow(2, 0.25)); // add left bound
			 StringToDouble(bounders, s);
			 float a = (float)(Convert::ToDouble(textBox2->Text));
			 bounders.push_back(find_bor(a));  // add right bound
			 size_t n_intervals = bounders.size() - 1;

			 double alpha = Convert::ToDouble(textBox5->Text); // need for comparison with F^(R0)!
			 this->dataGridView2->ColumnCount = 3;
			 this->dataGridView2->RowCount = n_intervals + 1;

			 // qi
			 std::vector<double> qi(n_intervals, 0);
			 for (int i = 0; i < n_intervals; ++i)
			 {
				 qi[i] = F(bounders[i + 1], a) - F(bounders[i], a);  // Should be checked that F - is valid, and change it if there is mistake!!!
				 dataGridView2->Rows[i]->Cells[1]->Value = Convert::ToString(qi[i]);
				 dataGridView2->Rows[i]->Cells[0]->Value = i + 1;
			 }
			 std::vector<int> ni(n_intervals, 0);
			 for (int i = 0; i < n_intervals; ++i)
			 {
				 double left = bounders[i];
				 double right = bounders[i + 1];
				 for (int j = 0; j < generated_x.size(); ++j)
				 {
					 if (generated_x[j] >= left && generated_x[j] < right)
					 {
						 ni[i]++;
					 }
				 }
			 }
			 //3 часть

			 // ni
			 for (int i = 0; i < n_intervals; ++i)
			 {
				 dataGridView2->Rows[i]->Cells[2]->Value = Convert::ToString(ni[i]);
			 }

			 double r0 = 0;

			 for (size_t i = 0; i < n_intervals; ++i)
			 {
				 double a = (ni[i] - generated_x.size() * qi[i]) * (ni[i] - generated_x.size() * qi[i]);
				 double b = generated_x.size() * qi[i];
				 r0 += a / b;
			 }
			 double h = (r0 - 0) / n;
			 double result = (f_hi(0, n_intervals) + f_hi(r0, n_intervals)) / 2;
			 for (int i = 1; i < n; i++)
			 {
				 result += f_hi(0 + i * h, n_intervals);
			 }
			 result *= h;
			 this->textBox7->Text = Convert::ToString(result);

			 label12->Text = Convert::ToString(r0);

			 label14->Text = "false";

			 //double F_hi = CDF(r0, n_intervals, true);
			 // Here we should compute 1 - F(r0), and if 1 - F_xi(r0, n_intervals - 1) < alpha - we can conclude that H0 hipotise is true!!!
			 //if (1 - F_xi(r0, n_intervals - 1) < alpha)
			 if (result > alpha)
			 {
				 label14->Text = "true";
			 }


			 // labele16->Text = ConvertToString(1 - F_xi(r0, n_intervals - 1));
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	float a = (float)(Convert::ToDouble(textBox2->Text));
	int n = (Convert::ToDouble(textBox1->Text));
	int p = (int)(Convert::ToDouble(textBox6->Text));
	double F = find_bor(a);
	double right_border = find_bor(a);
	double max = 0;
	double D = 0;
	if (p != 0)
	{
		double interval_length = (right_border - v[0])/p;
		for (int i = 1; i < p; ++i)
		{
			v.push_back(v[0] + i* interval_length);
		}

	}
	v.push_back(right_border);
	double left = 0;
	double right = 0;
	double Midle = 0;
	int count = 0;
	double res;
	this->dataGridView3->ColumnCount = v.size();
	this->dataGridView3->RowCount = 4;
	dataGridView3->Columns[0]->HeaderText = "0";
	dataGridView3->Rows[0]->HeaderCell->Value = "zj";
	dataGridView3->Rows[1]->HeaderCell->Value = "fn(zj)";
	dataGridView3->Rows[2]->HeaderCell->Value = "nj/(n|deltaj|";
	dataGridView3->Rows[3]->HeaderCell->Value = "|deltaj|";
	for (int i = 1; i <= v.size() - 1; i++)
	{
		dataGridView3->Columns[i]->HeaderText = Convert::ToString(i);
	}
		for (int j = 0; j < v.size() - 1; j++)
		{
			left = v[j];
			right = v[j + 1];
			Midle = (right - left) / 2;
			dataGridView3->Rows[3]->Cells[j]->Value = right - left;
			dataGridView3->Rows[0]->Cells[j]->Value = Midle + left;
			dataGridView3->Rows[1]->Cells[j]->Value =  search_f(Midle + left, a);
			for (int i = 0; i < v2.size(); i++)
			{
				if (v2[i] > left && v2[i] <= right)
				{
					count++;
				}
			}
			res = right - left;
			dataGridView3->Rows[2]->Cells[j]->Value = (double)count/((double)v2.size()* (abs(res)));
			chart1->Series[0]->Points->AddXY(Midle + left, (double)count / ((double)v2.size()  *(abs(res))));
			count = 0;
			
		}
		for (int i = 0; i < v.size() - 1; i++)
		{
				max = fabs((double)(dataGridView3->Rows[2]->Cells[i]->Value)  - (double)(dataGridView3->Rows[1]->Cells[i]->Value));
				if (max > D)
				{
					D = max;
				}

		}
		this->textBox8->Text = Convert::ToString(D);

	

}
private: System::Void chart1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		
		
}

private: System::Void textBox6_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged_2(System::Object^  sender, System::EventArgs^  e) {
		 }


		 
		 double f_hi(double x, int k)
		 {
			 return pow(2, -k / 2) * pow(x, k / 2 - 1) * exp(-x / 2) / tgamma(k / 2);
		 }

private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
		 }
};
}
