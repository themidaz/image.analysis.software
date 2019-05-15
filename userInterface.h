#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include "opencv2/features2d.hpp"

#include "mw_kwithu_lib.h"

namespace ImageAnalysisSoftware
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace std;
	using namespace cv;
	
	using namespace mw_kwithu_lib;




	/// <summary>
	/// Summary for userInterface
	/// </summary>
	public ref class userInterface : public System::Windows::Forms::Form
	{
	
	public:	
		userInterface(void)
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
		~userInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:



	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::TabPage^  tabPage4;

private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::TabControl^  tabControl1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::RadioButton^  laplacian_Button;






	private: System::Windows::Forms::RadioButton^  sobel_Button;

	private: System::Windows::Forms::RadioButton^  wienerFilter_button;



	private: System::Windows::Forms::RadioButton^  deblurringByDeconvolution_Button;

private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::PictureBox^  pictureBox5;






private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::PictureBox^  pictureBox3;
public: System::Windows::Forms::PictureBox^  pictureBox8;
private: System::Windows::Forms::PictureBox^  pictureBox7;
public:
private:


private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TrackBar^  sharpenImg_sigma_tBar;
	private: System::Windows::Forms::TrackBar^  sharpenImg_ksize_tBar;




private: System::Windows::Forms::Label^  label18;

private: System::Windows::Forms::Label^  label16;

private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  detail_enhancer_button;


private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  pencil_sketch_button;

private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  stylized_effect_button;
	private: System::Windows::Forms::Button^  gray_scale;



private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  apply_kaleidoscope_effect;

	private: System::Windows::Forms::Button^  spinning_effect_button;

	private: System::Windows::Forms::Button^  apply_erode_button;
	private: System::Windows::Forms::Button^  apply_pinch_effect_button;


private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  Negative_effect;

private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  mirrror_horizontally_button;

private: System::Windows::Forms::Button^  rotate90left_button;
private: System::Windows::Forms::Button^  rotate90_right_button;
private: System::Windows::Forms::Button^  mirror_vertically_button;





private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::TrackBar^  blur_tBar;





private: System::Windows::Forms::TrackBar^  hue_value_tbar;
private: System::Windows::Forms::TrackBar^  saturation_value_tbar;


private: System::Windows::Forms::TrackBar^  contrast_level_tbar;

private: System::Windows::Forms::TrackBar^  brightness_level_tbar;

private: System::Windows::Forms::Label^  label11;


private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;

private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Button^  I_Like_Edges_button;

private: System::Windows::Forms::TrackBar^  harris_thresh_trackBar;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TrackBar^  NonLocalMeansDenoising_Color;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TrackBar^  NonLocalMeansDenoising_Grayscale;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TrackBar^  MedianFilter_tbar;
private: System::Windows::Forms::Label^  Medianfilter;
private: System::Windows::Forms::RadioButton^  periodicNoiseRemoval;
private: System::Windows::Forms::TrackBar^  hsv_value_tbar;
private: System::Windows::Forms::Label^  label25;

private: System::Windows::Forms::ToolStripMenuItem^  grabAnImageFromCameraToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  openImageToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  saveImageToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  historyToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
private: System::Windows::Forms::TrackBar^  canny_trackBar;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TrackBar^  prewitt_trackBar;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Button^  minimisebutton;
private: System::Windows::Forms::Button^  exitbutton;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Button^  crop_button;







	private: System::ComponentModel::IContainer^  components;
	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grabAnImageFromCameraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->wienerFilter_button = (gcnew System::Windows::Forms::RadioButton());
			this->deblurringByDeconvolution_Button = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->periodicNoiseRemoval = (gcnew System::Windows::Forms::RadioButton());
			this->MedianFilter_tbar = (gcnew System::Windows::Forms::TrackBar());
			this->Medianfilter = (gcnew System::Windows::Forms::Label());
			this->NonLocalMeansDenoising_Grayscale = (gcnew System::Windows::Forms::TrackBar());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->NonLocalMeansDenoising_Color = (gcnew System::Windows::Forms::TrackBar());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->prewitt_trackBar = (gcnew System::Windows::Forms::TrackBar());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->canny_trackBar = (gcnew System::Windows::Forms::TrackBar());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->harris_thresh_trackBar = (gcnew System::Windows::Forms::TrackBar());
			this->laplacian_Button = (gcnew System::Windows::Forms::RadioButton());
			this->sobel_Button = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->crop_button = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->hsv_value_tbar = (gcnew System::Windows::Forms::TrackBar());
			this->rotate90_right_button = (gcnew System::Windows::Forms::Button());
			this->rotate90left_button = (gcnew System::Windows::Forms::Button());
			this->mirrror_horizontally_button = (gcnew System::Windows::Forms::Button());
			this->mirror_vertically_button = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->sharpenImg_ksize_tBar = (gcnew System::Windows::Forms::TrackBar());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->sharpenImg_sigma_tBar = (gcnew System::Windows::Forms::TrackBar());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->blur_tBar = (gcnew System::Windows::Forms::TrackBar());
			this->hue_value_tbar = (gcnew System::Windows::Forms::TrackBar());
			this->saturation_value_tbar = (gcnew System::Windows::Forms::TrackBar());
			this->contrast_level_tbar = (gcnew System::Windows::Forms::TrackBar());
			this->brightness_level_tbar = (gcnew System::Windows::Forms::TrackBar());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->apply_kaleidoscope_effect = (gcnew System::Windows::Forms::Button());
			this->apply_pinch_effect_button = (gcnew System::Windows::Forms::Button());
			this->pencil_sketch_button = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->stylized_effect_button = (gcnew System::Windows::Forms::Button());
			this->spinning_effect_button = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->apply_erode_button = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Negative_effect = (gcnew System::Windows::Forms::Button());
			this->detail_enhancer_button = (gcnew System::Windows::Forms::Button());
			this->gray_scale = (gcnew System::Windows::Forms::Button());
			this->I_Like_Edges_button = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->minimisebutton = (gcnew System::Windows::Forms::Button());
			this->exitbutton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MedianFilter_tbar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NonLocalMeansDenoising_Grayscale))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NonLocalMeansDenoising_Color))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prewitt_trackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canny_trackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->harris_thresh_trackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hsv_value_tbar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sharpenImg_ksize_tBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sharpenImg_sigma_tBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blur_tBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hue_value_tbar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->saturation_value_tbar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contrast_level_tbar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brightness_level_tbar))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem3
			});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1091, 32);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->grabAnImageFromCameraToolStripMenuItem,
					this->openImageToolStripMenuItem, this->saveImageToolStripMenuItem, this->historyToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(54, 28);
			this->toolStripMenuItem1->Text = L"File";
			// 
			// grabAnImageFromCameraToolStripMenuItem
			// 
			this->grabAnImageFromCameraToolStripMenuItem->Name = L"grabAnImageFromCameraToolStripMenuItem";
			this->grabAnImageFromCameraToolStripMenuItem->Size = System::Drawing::Size(389, 28);
			this->grabAnImageFromCameraToolStripMenuItem->Text = L"Grab An Image From Camera";
			// 
			// openImageToolStripMenuItem
			// 
			this->openImageToolStripMenuItem->Name = L"openImageToolStripMenuItem";
			this->openImageToolStripMenuItem->Size = System::Drawing::Size(389, 28);
			this->openImageToolStripMenuItem->Text = L"Open Image";
			this->openImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &userInterface::openImageToolStripMenuItem_Click);
			// 
			// saveImageToolStripMenuItem
			// 
			this->saveImageToolStripMenuItem->Name = L"saveImageToolStripMenuItem";
			this->saveImageToolStripMenuItem->Size = System::Drawing::Size(389, 28);
			this->saveImageToolStripMenuItem->Text = L"Save Image";
			// 
			// historyToolStripMenuItem
			// 
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(389, 28);
			this->historyToolStripMenuItem->Text = L"History";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(389, 28);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(85, 28);
			this->toolStripMenuItem3->Text = L"About";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(314, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 30);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Select An Image";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(655, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Open";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &userInterface::button1_MouseClick);
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::Black;
			this->tabPage5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage5->Controls->Add(this->wienerFilter_button);
			this->tabPage5->Controls->Add(this->deblurringByDeconvolution_Button);
			this->tabPage5->Controls->Add(this->pictureBox6);
			this->tabPage5->Controls->Add(this->pictureBox5);
			this->tabPage5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage5->ForeColor = System::Drawing::Color::White;
			this->tabPage5->Location = System::Drawing::Point(254, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(833, 772);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"DEBLURRING";
			// 
			// wienerFilter_button
			// 
			this->wienerFilter_button->AutoSize = true;
			this->wienerFilter_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wienerFilter_button->Location = System::Drawing::Point(39, 538);
			this->wienerFilter_button->Name = L"wienerFilter_button";
			this->wienerFilter_button->Size = System::Drawing::Size(135, 26);
			this->wienerFilter_button->TabIndex = 4;
			this->wienerFilter_button->Text = L"Wiener Filter";
			this->wienerFilter_button->UseVisualStyleBackColor = true;
			this->wienerFilter_button->Click += gcnew System::EventHandler(this, &userInterface::wienerFilter_button_Click);
			// 
			// deblurringByDeconvolution_Button
			// 
			this->deblurringByDeconvolution_Button->AutoSize = true;
			this->deblurringByDeconvolution_Button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deblurringByDeconvolution_Button->Location = System::Drawing::Point(39, 479);
			this->deblurringByDeconvolution_Button->Name = L"deblurringByDeconvolution_Button";
			this->deblurringByDeconvolution_Button->Size = System::Drawing::Size(180, 26);
			this->deblurringByDeconvolution_Button->TabIndex = 2;
			this->deblurringByDeconvolution_Button->Text = L"Lucy-Richardson";
			this->deblurringByDeconvolution_Button->UseVisualStyleBackColor = true;
			this->deblurringByDeconvolution_Button->Click += gcnew System::EventHandler(this, &userInterface::deblurringByDeconvolution_Button_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(423, 354);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(400, 400);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Location = System::Drawing::Point(6, 6);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(400, 400);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::Black;
			this->tabPage4->Controls->Add(this->periodicNoiseRemoval);
			this->tabPage4->Controls->Add(this->MedianFilter_tbar);
			this->tabPage4->Controls->Add(this->Medianfilter);
			this->tabPage4->Controls->Add(this->NonLocalMeansDenoising_Grayscale);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->NonLocalMeansDenoising_Color);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->pictureBox4);
			this->tabPage4->Controls->Add(this->pictureBox3);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage4->ForeColor = System::Drawing::Color::White;
			this->tabPage4->Location = System::Drawing::Point(254, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(833, 772);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"DENOISING";
			// 
			// periodicNoiseRemoval
			// 
			this->periodicNoiseRemoval->AutoSize = true;
			this->periodicNoiseRemoval->Location = System::Drawing::Point(38, 484);
			this->periodicNoiseRemoval->Name = L"periodicNoiseRemoval";
			this->periodicNoiseRemoval->Size = System::Drawing::Size(359, 26);
			this->periodicNoiseRemoval->TabIndex = 15;
			this->periodicNoiseRemoval->TabStop = true;
			this->periodicNoiseRemoval->Text = L"Periodic Noise Reducing  Notch Filter";
			this->periodicNoiseRemoval->UseVisualStyleBackColor = true;
			this->periodicNoiseRemoval->Click += gcnew System::EventHandler(this, &userInterface::periodicNoiseRemoval_Click);
			// 
			// MedianFilter_tbar
			// 
			this->MedianFilter_tbar->LargeChange = 1;
			this->MedianFilter_tbar->Location = System::Drawing::Point(244, 541);
			this->MedianFilter_tbar->Maximum = 21;
			this->MedianFilter_tbar->Name = L"MedianFilter_tbar";
			this->MedianFilter_tbar->Size = System::Drawing::Size(123, 45);
			this->MedianFilter_tbar->TabIndex = 14;
			this->MedianFilter_tbar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->MedianFilter_tbar->ValueChanged += gcnew System::EventHandler(this, &userInterface::MedianFilter_tbar_ValueChanged);
			// 
			// Medianfilter
			// 
			this->Medianfilter->Location = System::Drawing::Point(34, 541);
			this->Medianfilter->Name = L"Medianfilter";
			this->Medianfilter->Size = System::Drawing::Size(147, 45);
			this->Medianfilter->TabIndex = 13;
			this->Medianfilter->Text = L"Median Filter";
			// 
			// NonLocalMeansDenoising_Grayscale
			// 
			this->NonLocalMeansDenoising_Grayscale->LargeChange = 1;
			this->NonLocalMeansDenoising_Grayscale->Location = System::Drawing::Point(244, 648);
			this->NonLocalMeansDenoising_Grayscale->Maximum = 30;
			this->NonLocalMeansDenoising_Grayscale->Name = L"NonLocalMeansDenoising_Grayscale";
			this->NonLocalMeansDenoising_Grayscale->Size = System::Drawing::Size(123, 45);
			this->NonLocalMeansDenoising_Grayscale->TabIndex = 12;
			this->NonLocalMeansDenoising_Grayscale->TickStyle = System::Windows::Forms::TickStyle::None;
			this->NonLocalMeansDenoising_Grayscale->ValueChanged += gcnew System::EventHandler(this, &userInterface::NonLocalMeansDenoising_Grayscale_ValueChanged);
			// 
			// label23
			// 
			this->label23->Location = System::Drawing::Point(34, 653);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(212, 45);
			this->label23->TabIndex = 11;
			this->label23->Text = L"NL  Denoising ( Gray)";
			// 
			// NonLocalMeansDenoising_Color
			// 
			this->NonLocalMeansDenoising_Color->LargeChange = 1;
			this->NonLocalMeansDenoising_Color->Location = System::Drawing::Point(244, 597);
			this->NonLocalMeansDenoising_Color->Maximum = 30;
			this->NonLocalMeansDenoising_Color->Name = L"NonLocalMeansDenoising_Color";
			this->NonLocalMeansDenoising_Color->Size = System::Drawing::Size(123, 45);
			this->NonLocalMeansDenoising_Color->TabIndex = 10;
			this->NonLocalMeansDenoising_Color->TickStyle = System::Windows::Forms::TickStyle::None;
			this->NonLocalMeansDenoising_Color->ValueChanged += gcnew System::EventHandler(this, &userInterface::NonLocalMeansDenoising_Color_ValueChanged);
			// 
			// label22
			// 
			this->label22->Location = System::Drawing::Point(34, 597);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(212, 45);
			this->label22->TabIndex = 9;
			this->label22->Text = L"NL  Denoising (Color)";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Location = System::Drawing::Point(425, 367);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(400, 400);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(6, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(400, 400);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Black;
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->prewitt_trackBar);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->canny_trackBar);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->harris_thresh_trackBar);
			this->tabPage2->Controls->Add(this->laplacian_Button);
			this->tabPage2->Controls->Add(this->sobel_Button);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(254, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(833, 772);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"EDGE DETECTION";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(15, 632);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(72, 22);
			this->label17->TabIndex = 14;
			this->label17->Text = L"Prewitt";
			// 
			// prewitt_trackBar
			// 
			this->prewitt_trackBar->Location = System::Drawing::Point(153, 623);
			this->prewitt_trackBar->Maximum = 100;
			this->prewitt_trackBar->Name = L"prewitt_trackBar";
			this->prewitt_trackBar->Size = System::Drawing::Size(175, 45);
			this->prewitt_trackBar->TabIndex = 13;
			this->prewitt_trackBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->prewitt_trackBar->ValueChanged += gcnew System::EventHandler(this, &userInterface::prewitt_trackBar_ValueChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(14, 683);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(73, 22);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Canny";
			// 
			// canny_trackBar
			// 
			this->canny_trackBar->Location = System::Drawing::Point(153, 674);
			this->canny_trackBar->Maximum = 100;
			this->canny_trackBar->Name = L"canny_trackBar";
			this->canny_trackBar->Size = System::Drawing::Size(175, 45);
			this->canny_trackBar->TabIndex = 11;
			this->canny_trackBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->canny_trackBar->ValueChanged += gcnew System::EventHandler(this, &userInterface::canny_trackBar_ValueChanged);
			// 
			// label21
			// 
			this->label21->Location = System::Drawing::Point(15, 584);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(100, 23);
			this->label21->TabIndex = 9;
			this->label21->Text = L"Harris";
			// 
			// harris_thresh_trackBar
			// 
			this->harris_thresh_trackBar->LargeChange = 1;
			this->harris_thresh_trackBar->Location = System::Drawing::Point(153, 584);
			this->harris_thresh_trackBar->Maximum = 255;
			this->harris_thresh_trackBar->Minimum = 50;
			this->harris_thresh_trackBar->Name = L"harris_thresh_trackBar";
			this->harris_thresh_trackBar->Size = System::Drawing::Size(175, 45);
			this->harris_thresh_trackBar->TabIndex = 8;
			this->harris_thresh_trackBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->harris_thresh_trackBar->Value = 50;
			this->harris_thresh_trackBar->ValueChanged += gcnew System::EventHandler(this, &userInterface::harris_thresh_trackBar_ValueChanged);
			// 
			// laplacian_Button
			// 
			this->laplacian_Button->AutoSize = true;
			this->laplacian_Button->Location = System::Drawing::Point(18, 476);
			this->laplacian_Button->Name = L"laplacian_Button";
			this->laplacian_Button->Size = System::Drawing::Size(119, 26);
			this->laplacian_Button->TabIndex = 4;
			this->laplacian_Button->Text = L"Laplacian";
			this->laplacian_Button->UseVisualStyleBackColor = true;
			this->laplacian_Button->CheckedChanged += gcnew System::EventHandler(this, &userInterface::laplacian_Button_CheckedChanged);
			// 
			// sobel_Button
			// 
			this->sobel_Button->AutoSize = true;
			this->sobel_Button->Location = System::Drawing::Point(19, 530);
			this->sobel_Button->Name = L"sobel_Button";
			this->sobel_Button->Size = System::Drawing::Size(77, 26);
			this->sobel_Button->TabIndex = 2;
			this->sobel_Button->Text = L"Sobel";
			this->sobel_Button->UseVisualStyleBackColor = true;
			this->sobel_Button->Click += gcnew System::EventHandler(this, &userInterface::sobel_Button_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(425, 366);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(400, 400);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(6, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 400);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Black;
			this->tabPage1->Controls->Add(this->pictureBox7);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->apply_kaleidoscope_effect);
			this->tabPage1->Controls->Add(this->apply_pinch_effect_button);
			this->tabPage1->Controls->Add(this->pencil_sketch_button);
			this->tabPage1->Controls->Add(this->button15);
			this->tabPage1->Controls->Add(this->button18);
			this->tabPage1->Controls->Add(this->stylized_effect_button);
			this->tabPage1->Controls->Add(this->spinning_effect_button);
			this->tabPage1->Controls->Add(this->button20);
			this->tabPage1->Controls->Add(this->apply_erode_button);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->Negative_effect);
			this->tabPage1->Controls->Add(this->detail_enhancer_button);
			this->tabPage1->Controls->Add(this->gray_scale);
			this->tabPage1->Controls->Add(this->I_Like_Edges_button);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->ForeColor = System::Drawing::Color::White;
			this->tabPage1->Location = System::Drawing::Point(254, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(833, 772);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"BASIC EDITING";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Location = System::Drawing::Point(6, 6);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(400, 400);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &userInterface::pictureBox7_Click);
			this->pictureBox7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &userInterface::pictureBox7_Paint_1);
			this->pictureBox7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &userInterface::pictureBox7_MouseDown);
			this->pictureBox7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &userInterface::pictureBox7_MouseMove);
			this->pictureBox7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &userInterface::pictureBox7_MouseUp);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->crop_button);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->hsv_value_tbar);
			this->panel1->Controls->Add(this->rotate90_right_button);
			this->panel1->Controls->Add(this->rotate90left_button);
			this->panel1->Controls->Add(this->mirrror_horizontally_button);
			this->panel1->Controls->Add(this->mirror_vertically_button);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->sharpenImg_ksize_tBar);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->sharpenImg_sigma_tBar);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->blur_tBar);
			this->panel1->Controls->Add(this->hue_value_tbar);
			this->panel1->Controls->Add(this->saturation_value_tbar);
			this->panel1->Controls->Add(this->contrast_level_tbar);
			this->panel1->Controls->Add(this->brightness_level_tbar);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label2);
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(412, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(425, 760);
			this->panel1->TabIndex = 6;
			// 
			// crop_button
			// 
			this->crop_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->crop_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crop_button->Location = System::Drawing::Point(307, 31);
			this->crop_button->Name = L"crop_button";
			this->crop_button->Size = System::Drawing::Size(83, 36);
			this->crop_button->TabIndex = 43;
			this->crop_button->Text = L"Crop";
			this->crop_button->UseVisualStyleBackColor = true;
			this->crop_button->Click += gcnew System::EventHandler(this, &userInterface::crop_button_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(268, 96);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 31);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Rotate";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox8->Location = System::Drawing::Point(11, 349);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(400, 400);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 8;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &userInterface::pictureBox8_Paint);
			// 
			// hsv_value_tbar
			// 
			this->hsv_value_tbar->AutoSize = false;
			this->hsv_value_tbar->LargeChange = 1;
			this->hsv_value_tbar->Location = System::Drawing::Point(124, 161);
			this->hsv_value_tbar->Maximum = 255;
			this->hsv_value_tbar->Name = L"hsv_value_tbar";
			this->hsv_value_tbar->Size = System::Drawing::Size(140, 32);
			this->hsv_value_tbar->TabIndex = 41;
			this->hsv_value_tbar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->hsv_value_tbar->ValueChanged += gcnew System::EventHandler(this, &userInterface::hsv_value_tbar_ValueChanged);
			// 
			// rotate90_right_button
			// 
			this->rotate90_right_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rotate90_right_button->Location = System::Drawing::Point(339, 161);
			this->rotate90_right_button->Name = L"rotate90_right_button";
			this->rotate90_right_button->Size = System::Drawing::Size(64, 36);
			this->rotate90_right_button->TabIndex = 22;
			this->rotate90_right_button->Text = L">";
			this->rotate90_right_button->UseVisualStyleBackColor = true;
			this->rotate90_right_button->Click += gcnew System::EventHandler(this, &userInterface::rotate90_right_button_Click);
			// 
			// rotate90left_button
			// 
			this->rotate90left_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rotate90left_button->Location = System::Drawing::Point(273, 130);
			this->rotate90left_button->Name = L"rotate90left_button";
			this->rotate90left_button->Size = System::Drawing::Size(67, 36);
			this->rotate90left_button->TabIndex = 23;
			this->rotate90left_button->Text = L"<";
			this->rotate90left_button->UseVisualStyleBackColor = true;
			this->rotate90left_button->Click += gcnew System::EventHandler(this, &userInterface::rotate90left_button_Click);
			// 
			// mirrror_horizontally_button
			// 
			this->mirrror_horizontally_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mirrror_horizontally_button->Location = System::Drawing::Point(339, 251);
			this->mirrror_horizontally_button->Name = L"mirrror_horizontally_button";
			this->mirrror_horizontally_button->Size = System::Drawing::Size(64, 36);
			this->mirrror_horizontally_button->TabIndex = 24;
			this->mirrror_horizontally_button->Text = L"<|>";
			this->mirrror_horizontally_button->UseVisualStyleBackColor = true;
			this->mirrror_horizontally_button->Click += gcnew System::EventHandler(this, &userInterface::mirrror_horizontally_button_Click);
			// 
			// mirror_vertically_button
			// 
			this->mirror_vertically_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mirror_vertically_button->Location = System::Drawing::Point(273, 219);
			this->mirror_vertically_button->Name = L"mirror_vertically_button";
			this->mirror_vertically_button->Size = System::Drawing::Size(67, 36);
			this->mirror_vertically_button->TabIndex = 21;
			this->mirror_vertically_button->Text = L"^|^";
			this->mirror_vertically_button->UseVisualStyleBackColor = true;
			this->mirror_vertically_button->Click += gcnew System::EventHandler(this, &userInterface::mirror_vertically_button_Click);
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(343, 219);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 36);
			this->label12->TabIndex = 18;
			this->label12->Text = L"flip";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(3, 224);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(200, 31);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Sharpen Image";
			// 
			// sharpenImg_ksize_tBar
			// 
			this->sharpenImg_ksize_tBar->AutoSize = false;
			this->sharpenImg_ksize_tBar->Location = System::Drawing::Point(125, 304);
			this->sharpenImg_ksize_tBar->Maximum = 30;
			this->sharpenImg_ksize_tBar->Name = L"sharpenImg_ksize_tBar";
			this->sharpenImg_ksize_tBar->Size = System::Drawing::Size(143, 32);
			this->sharpenImg_ksize_tBar->TabIndex = 33;
			this->sharpenImg_ksize_tBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->sharpenImg_ksize_tBar->Value = 1;
			this->sharpenImg_ksize_tBar->ValueChanged += gcnew System::EventHandler(this, &userInterface::sharpenImg_ksize_tBar_ValueChanged);
			// 
			// label18
			// 
			this->label18->Location = System::Drawing::Point(3, 310);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(107, 36);
			this->label18->TabIndex = 30;
			this->label18->Text = L"Kernel Size";
			// 
			// label16
			// 
			this->label16->Location = System::Drawing::Point(4, 274);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(115, 36);
			this->label16->TabIndex = 28;
			this->label16->Text = L"Sigma";
			// 
			// sharpenImg_sigma_tBar
			// 
			this->sharpenImg_sigma_tBar->AutoSize = false;
			this->sharpenImg_sigma_tBar->Location = System::Drawing::Point(121, 269);
			this->sharpenImg_sigma_tBar->Maximum = 30;
			this->sharpenImg_sigma_tBar->Name = L"sharpenImg_sigma_tBar";
			this->sharpenImg_sigma_tBar->Size = System::Drawing::Size(143, 32);
			this->sharpenImg_sigma_tBar->TabIndex = 34;
			this->sharpenImg_sigma_tBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->sharpenImg_sigma_tBar->ValueChanged += gcnew System::EventHandler(this, &userInterface::sharpenImg_sigma_tBar_ValueChanged);
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(4, 153);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(115, 36);
			this->label25->TabIndex = 40;
			this->label25->Text = L"Value";
			// 
			// blur_tBar
			// 
			this->blur_tBar->AutoSize = false;
			this->blur_tBar->Location = System::Drawing::Point(124, 189);
			this->blur_tBar->Maximum = 30;
			this->blur_tBar->Name = L"blur_tBar";
			this->blur_tBar->Size = System::Drawing::Size(140, 32);
			this->blur_tBar->TabIndex = 15;
			this->blur_tBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->blur_tBar->ValueChanged += gcnew System::EventHandler(this, &userInterface::blur_tBar_ValueChanged_1);
			// 
			// hue_value_tbar
			// 
			this->hue_value_tbar->AutoSize = false;
			this->hue_value_tbar->LargeChange = 1;
			this->hue_value_tbar->Location = System::Drawing::Point(125, 130);
			this->hue_value_tbar->Maximum = 255;
			this->hue_value_tbar->Name = L"hue_value_tbar";
			this->hue_value_tbar->Size = System::Drawing::Size(139, 32);
			this->hue_value_tbar->TabIndex = 14;
			this->hue_value_tbar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->hue_value_tbar->ValueChanged += gcnew System::EventHandler(this, &userInterface::hue_value_tbar_ValueChanged);
			// 
			// saturation_value_tbar
			// 
			this->saturation_value_tbar->AutoSize = false;
			this->saturation_value_tbar->LargeChange = 1;
			this->saturation_value_tbar->Location = System::Drawing::Point(124, 100);
			this->saturation_value_tbar->Maximum = 255;
			this->saturation_value_tbar->Name = L"saturation_value_tbar";
			this->saturation_value_tbar->Size = System::Drawing::Size(140, 32);
			this->saturation_value_tbar->TabIndex = 13;
			this->saturation_value_tbar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->saturation_value_tbar->ValueChanged += gcnew System::EventHandler(this, &userInterface::saturation_value_tbar_ValueChanged);
			// 
			// contrast_level_tbar
			// 
			this->contrast_level_tbar->AutoSize = false;
			this->contrast_level_tbar->LargeChange = 0;
			this->contrast_level_tbar->Location = System::Drawing::Point(124, 62);
			this->contrast_level_tbar->Maximum = 20;
			this->contrast_level_tbar->Name = L"contrast_level_tbar";
			this->contrast_level_tbar->Size = System::Drawing::Size(140, 32);
			this->contrast_level_tbar->TabIndex = 12;
			this->contrast_level_tbar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->contrast_level_tbar->ValueChanged += gcnew System::EventHandler(this, &userInterface::contrast_level_tbar_ValueChanged);
			// 
			// brightness_level_tbar
			// 
			this->brightness_level_tbar->AutoSize = false;
			this->brightness_level_tbar->LargeChange = 0;
			this->brightness_level_tbar->Location = System::Drawing::Point(125, 35);
			this->brightness_level_tbar->Maximum = 40;
			this->brightness_level_tbar->Minimum = -40;
			this->brightness_level_tbar->Name = L"brightness_level_tbar";
			this->brightness_level_tbar->Size = System::Drawing::Size(139, 32);
			this->brightness_level_tbar->TabIndex = 10;
			this->brightness_level_tbar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->brightness_level_tbar->ValueChanged += gcnew System::EventHandler(this, &userInterface::brightness_level_tbar_ValueChanged);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(4, 185);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(115, 36);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Blur";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 126);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 36);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Hue";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(4, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 41);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Saturation";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(4, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 36);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Contrast";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 36);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Brightness";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(280, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Adjust Image Parameters";
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(298, 532);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(77, 62);
			this->button7->TabIndex = 23;
			this->button7->Text = L"Pixelate";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &userInterface::button7_Click);
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(41, 473);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(77, 62);
			this->button10->TabIndex = 26;
			this->button10->Text = L"Sepia";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &userInterface::button10_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(114, 473);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(77, 62);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Black and White";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &userInterface::button9_Click);
			// 
			// apply_kaleidoscope_effect
			// 
			this->apply_kaleidoscope_effect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->apply_kaleidoscope_effect->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apply_kaleidoscope_effect->Location = System::Drawing::Point(229, 532);
			this->apply_kaleidoscope_effect->Name = L"apply_kaleidoscope_effect";
			this->apply_kaleidoscope_effect->Size = System::Drawing::Size(77, 62);
			this->apply_kaleidoscope_effect->TabIndex = 30;
			this->apply_kaleidoscope_effect->Text = L"Kaleidoscope";
			this->apply_kaleidoscope_effect->UseVisualStyleBackColor = true;
			this->apply_kaleidoscope_effect->Click += gcnew System::EventHandler(this, &userInterface::button14_Click);
			// 
			// apply_pinch_effect_button
			// 
			this->apply_pinch_effect_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->apply_pinch_effect_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apply_pinch_effect_button->Location = System::Drawing::Point(298, 473);
			this->apply_pinch_effect_button->Name = L"apply_pinch_effect_button";
			this->apply_pinch_effect_button->Size = System::Drawing::Size(77, 62);
			this->apply_pinch_effect_button->TabIndex = 27;
			this->apply_pinch_effect_button->Text = L"Pinch!";
			this->apply_pinch_effect_button->UseVisualStyleBackColor = true;
			this->apply_pinch_effect_button->Click += gcnew System::EventHandler(this, &userInterface::apply_pinch_effect_button_Click);
			// 
			// pencil_sketch_button
			// 
			this->pencil_sketch_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pencil_sketch_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pencil_sketch_button->Location = System::Drawing::Point(298, 686);
			this->pencil_sketch_button->Name = L"pencil_sketch_button";
			this->pencil_sketch_button->Size = System::Drawing::Size(77, 62);
			this->pencil_sketch_button->TabIndex = 35;
			this->pencil_sketch_button->Text = L"Pencil Sketch";
			this->pencil_sketch_button->UseVisualStyleBackColor = true;
			this->pencil_sketch_button->Click += gcnew System::EventHandler(this, &userInterface::pencil_sketch_button_Click);
			// 
			// button15
			// 
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(298, 629);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(77, 62);
			this->button15->TabIndex = 31;
			this->button15->Text = L"Cartoon Effect";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &userInterface::button15_Click);
			// 
			// button18
			// 
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(229, 686);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(77, 62);
			this->button18->TabIndex = 34;
			this->button18->Text = L"Dilate";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &userInterface::button18_Click);
			// 
			// stylized_effect_button
			// 
			this->stylized_effect_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stylized_effect_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stylized_effect_button->Location = System::Drawing::Point(229, 629);
			this->stylized_effect_button->Name = L"stylized_effect_button";
			this->stylized_effect_button->Size = System::Drawing::Size(77, 62);
			this->stylized_effect_button->TabIndex = 33;
			this->stylized_effect_button->Text = L"Stylized";
			this->stylized_effect_button->UseVisualStyleBackColor = true;
			this->stylized_effect_button->Click += gcnew System::EventHandler(this, &userInterface::stylized_effect_button_Click);
			// 
			// spinning_effect_button
			// 
			this->spinning_effect_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spinning_effect_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spinning_effect_button->Location = System::Drawing::Point(41, 686);
			this->spinning_effect_button->Name = L"spinning_effect_button";
			this->spinning_effect_button->Size = System::Drawing::Size(77, 62);
			this->spinning_effect_button->TabIndex = 29;
			this->spinning_effect_button->Text = L"Spinning Effect";
			this->spinning_effect_button->UseVisualStyleBackColor = true;
			this->spinning_effect_button->Click += gcnew System::EventHandler(this, &userInterface::spinning_effect_button_Click);
			// 
			// button20
			// 
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(114, 686);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(77, 62);
			this->button20->TabIndex = 36;
			this->button20->Text = L"Add Noise (gauss)";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &userInterface::button20_Click);
			// 
			// apply_erode_button
			// 
			this->apply_erode_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->apply_erode_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apply_erode_button->Location = System::Drawing::Point(41, 532);
			this->apply_erode_button->Name = L"apply_erode_button";
			this->apply_erode_button->Size = System::Drawing::Size(77, 62);
			this->apply_erode_button->TabIndex = 28;
			this->apply_erode_button->Text = L"Erode";
			this->apply_erode_button->UseVisualStyleBackColor = true;
			this->apply_erode_button->Click += gcnew System::EventHandler(this, &userInterface::apply_erode_button_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(130, 421);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(197, 36);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Image Filters";
			// 
			// Negative_effect
			// 
			this->Negative_effect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Negative_effect->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Negative_effect->Location = System::Drawing::Point(114, 532);
			this->Negative_effect->Name = L"Negative_effect";
			this->Negative_effect->Size = System::Drawing::Size(77, 62);
			this->Negative_effect->TabIndex = 24;
			this->Negative_effect->Text = L"Negative";
			this->Negative_effect->UseVisualStyleBackColor = true;
			this->Negative_effect->Click += gcnew System::EventHandler(this, &userInterface::Negative_effect_Click);
			// 
			// detail_enhancer_button
			// 
			this->detail_enhancer_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->detail_enhancer_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detail_enhancer_button->Location = System::Drawing::Point(41, 629);
			this->detail_enhancer_button->Name = L"detail_enhancer_button";
			this->detail_enhancer_button->Size = System::Drawing::Size(77, 62);
			this->detail_enhancer_button->TabIndex = 37;
			this->detail_enhancer_button->Text = L"Detail Enhancer";
			this->detail_enhancer_button->UseVisualStyleBackColor = true;
			this->detail_enhancer_button->Click += gcnew System::EventHandler(this, &userInterface::detail_enhancer_button_Click);
			// 
			// gray_scale
			// 
			this->gray_scale->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gray_scale->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gray_scale->Location = System::Drawing::Point(229, 473);
			this->gray_scale->Name = L"gray_scale";
			this->gray_scale->Size = System::Drawing::Size(77, 62);
			this->gray_scale->TabIndex = 32;
			this->gray_scale->Text = L"Gray";
			this->gray_scale->UseVisualStyleBackColor = true;
			this->gray_scale->Click += gcnew System::EventHandler(this, &userInterface::gamma_correct_Click);
			// 
			// I_Like_Edges_button
			// 
			this->I_Like_Edges_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->I_Like_Edges_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->I_Like_Edges_button->Location = System::Drawing::Point(114, 629);
			this->I_Like_Edges_button->Name = L"I_Like_Edges_button";
			this->I_Like_Edges_button->Size = System::Drawing::Size(77, 62);
			this->I_Like_Edges_button->TabIndex = 38;
			this->I_Like_Edges_button->Text = L"Edges!";
			this->I_Like_Edges_button->UseVisualStyleBackColor = true;
			this->I_Like_Edges_button->Click += gcnew System::EventHandler(this, &userInterface::button22_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Left;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->DrawMode = System::Windows::Forms::TabDrawMode::OwnerDrawFixed;
			this->tabControl1->ItemSize = System::Drawing::Size(60, 250);
			this->tabControl1->Location = System::Drawing::Point(0, 70);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1091, 780);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 1;
			this->tabControl1->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &userInterface::tabControl1_DrawItem);
			// 
			// minimisebutton
			// 
			this->minimisebutton->BackColor = System::Drawing::Color::WhiteSmoke;
			this->minimisebutton->FlatAppearance->BorderColor = System::Drawing::SystemColors::Window;
			this->minimisebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minimisebutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minimisebutton->ForeColor = System::Drawing::Color::Black;
			this->minimisebutton->Location = System::Drawing::Point(988, 0);
			this->minimisebutton->Name = L"minimisebutton";
			this->minimisebutton->Size = System::Drawing::Size(53, 32);
			this->minimisebutton->TabIndex = 0;
			this->minimisebutton->Text = L"-";
			this->minimisebutton->UseVisualStyleBackColor = false;
			this->minimisebutton->Click += gcnew System::EventHandler(this, &userInterface::minimisebutton_Click);
			// 
			// exitbutton
			// 
			this->exitbutton->BackColor = System::Drawing::Color::WhiteSmoke;
			this->exitbutton->FlatAppearance->BorderColor = System::Drawing::SystemColors::Window;
			this->exitbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitbutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbutton->ForeColor = System::Drawing::Color::Black;
			this->exitbutton->Location = System::Drawing::Point(1038, -1);
			this->exitbutton->Name = L"exitbutton";
			this->exitbutton->Size = System::Drawing::Size(53, 33);
			this->exitbutton->TabIndex = 1;
			this->exitbutton->Text = L"x";
			this->exitbutton->UseVisualStyleBackColor = false;
			this->exitbutton->Click += gcnew System::EventHandler(this, &userInterface::exitbutton_Click);
			// 
			// userInterface
			// 
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1091, 853);
			this->Controls->Add(this->exitbutton);
			this->Controls->Add(this->minimisebutton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"userInterface";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &userInterface::userInterface_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MedianFilter_tbar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NonLocalMeansDenoising_Grayscale))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NonLocalMeansDenoising_Color))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prewitt_trackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canny_trackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->harris_thresh_trackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hsv_value_tbar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sharpenImg_ksize_tBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sharpenImg_sigma_tBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blur_tBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hue_value_tbar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->saturation_value_tbar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contrast_level_tbar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brightness_level_tbar))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tabControl1_DrawItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e) {

				make_tabcontol_display_tabs_vertically_and_text_horizontally(sender, e);
	}

		//this method will customise the tabcontrol objrct to make it display  tabs vertically with text displayed horizontally
	System::Void make_tabcontol_display_tabs_vertically_and_text_horizontally(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e)
	{
			System::Drawing::Graphics^ g = e->Graphics;

			System::Drawing::Brush^ _textBrush;

			

			// Get the item from the collection.

			TabPage^ _tabPage = tabControl1->TabPages[e->Index];

			//
			

			// Get the real bounds for the tab rectangle.

			System::Drawing::Rectangle _tabBounds = tabControl1->GetTabRect(e->Index);



			if (e->State == System::Windows::Forms::DrawItemState::Selected)

			{
				//Draw a different color for the empty spaces
				
				Rectangle lasttabrect = tabControl1->GetTabRect(tabControl1->TabPages->Count - 1);
				RectangleF^ emptyspacerect = gcnew RectangleF(
					lasttabrect.X + lasttabrect.Width + tabControl1->Left,




					tabControl1->Top + lasttabrect.Y,
					tabControl1->Width - (lasttabrect.X + lasttabrect.Width),
					lasttabrect.Height);

				System::Drawing::Brush^ b = System::Drawing::Brushes::Black; // the color you want
				//g->FillRectangle(b, emptyspacerect);
				// Draw a different background color, and don't paint a focus rectangle.

				_textBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Blue);

				g->FillRectangle(System::Drawing::Brushes::Gray, e->Bounds);

			}

			else

			{
			//	get(e->ForeColor);
			//	e->ForeColor = System::Drawing::Color::White;
				System::Drawing::Brush^ BackBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black); //Set background color
				//System::Drawing::Brush^ ForeBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::White);//Set foreground color*/
			
				_textBrush = gcnew System::Drawing::SolidBrush(e->ForeColor);

				e->DrawBackground();
				
			}

			// Use our own font.

			System::Drawing::Font^ _tabFont = gcnew System::Drawing::Font("Century Gothic", (float)12.0, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel);



			// Draw string. Center the text.

			System::Drawing::StringFormat^ _stringFlags = gcnew System::Drawing::StringFormat();

			_stringFlags->Alignment = System::Drawing::StringAlignment::Center;

			_stringFlags->LineAlignment = System::Drawing::StringAlignment::Center;

			g->DrawString(_tabPage->Text, _tabFont, _textBrush, _tabBounds, gcnew System::Drawing::StringFormat(_stringFlags));
	}

	
	private: System::Void userInterface_Load(System::Object^  sender, System::EventArgs^  e) {
		// Create the ToolTip and associate with the Form container.
	//	ToolTip^ toolTip1 = gcnew ToolTip;

		// Set up the delays for the ToolTip.
	//	toolTip1->AutoPopDelay = 5000;
	//	toolTip1->InitialDelay = 1000;
	//	// Force the ToolTip text to be displayed whether or not the form is active.
	//	toolTip1->ShowAlways = true;

		// Set up the ToolTip text for the Button and Checkbox.
		//toolTip1->SetToolTip(this->image_path_typed_in_textbox, "Type in a path to the image and press 'Enter' on your keyboard when done");
		//toolTip1->SetToolTip(this->checkBox1, "My checkBox1");
	}

	/*//our window is borderless, so by default draggging it to other parts of the screen is disabled. added some code in the MouseDown()
				 //and MouseMove() events of our main window to enable itto be dragged*/
			 System::Drawing::Point lastPoint; //point  variable we shall use to pass mouse coordinates (x,y) for dragging the program window
	private: System::Void menuStrip1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		// Begin dragging the window
		this->lastPoint = System::Drawing::Point(e->X, e->Y);
	}
	private: System::Void menuStrip1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->Left += e->X - lastPoint.X; //drag the screen accordingly
		this->Top += e->Y - lastPoint.Y;
	}
			 /*some code will be added to this objects MouseDwon() and MouseMove() events to enable the program window to be dragged
			private: System::Void main_menuStrip_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				this->lastPoint = System::Drawing::Point(e->X, e->Y);


					 
				 
			private: System::Void userInterface_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				
			}
			private: System::Void userInterface_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				if (e->System::Windows::Forms::MouseEventArgs::Button == System::Windows::Forms::MouseButtons::Left) //check if the button pressed is the left mouse mouse button
				{
					
				}
			}
			private: System::Void main_menuStrip_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				if (e->System::Windows::Forms::MouseEventArgs::Button == System::Windows::Forms::MouseButtons::Left) //check if the button pressed is the left mouse mouse button
				{
					this->Left += e->X - lastPoint.X;
					this->Top += e->Y - lastPoint.Y;
				}
			}
			*/


			 //method to override this button and use it to minimise the program window
	
	private: System::Void minimisebutton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
	}
	

	
		/*	  //method to override this button and use it to maximise the program
	private: System::Void app_maximise_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Maximized;
	}*/
			 //method to override this button and use it to close the program
	private: System::Void exitbutton_Click(System::Object^  sender, System::EventArgs^  e){
		Application::Exit();
	}
	

		
			 //this code will customise the tabcontrol objrct to make it display  tabs vertically with text displayed horizontally

			 
	 		 OpenFileDialog^ dialogOpen = gcnew OpenFileDialog();//for selecting images to process
			 OpenFileDialog^ diapen = gcnew OpenFileDialog();
			 SaveFileDialog^ saveFile = gcnew SaveFileDialog();// for saving images after processing
			  //cv::Mat &forcropping = nullptr;
			
private: System::Void button1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	dialogOpen->Filter = "Image(*.bmp; *.jpg; *.png; *.gif)|*.bmp;*.jpg;*.png;*.gif|All files (*.*)|*.*||";

	if (dialogOpen->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
	{
		return;//if cancel button is pressed return to the previous window
	}
	Bitmap^ bmpSrce = gcnew Bitmap(dialogOpen->FileName); //create bitmap object
	pictureBox1->Image = bmpSrce;
	pictureBox3->Image = bmpSrce;
	pictureBox7->Image = bmpSrce;
	pictureBox5->Image = bmpSrce;
	
	//mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	//cv::Mat Image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName)));
	//cv::Mat Image = imread(funct_coll.ConvertString2Char(dialogOpen->FileName));
	//Image.copyTo(forcropping);
}	
private: System::Void openImageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	/*diapen->Filter = "Image(*.bmp; *.jpg; *.png; *.gif)|*.bmp;*.jpg;*.png;*.gif|All files (*.*)|*.*||";

	if (diapen->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
	{
		return;//if cancel button is pressed return to the previous window
	}
	Bitmap^ bmpSrce = gcnew Bitmap(diapen->FileName); //create bitmap object
	pictureBox2->Image = bmpSrce;
	pictureBox4->Image = bmpSrce;
	pictureBox6->Image = bmpSrce;
	pictureBox8->Image = bmpSrce;*/
}

		
private: System::Void brightness_level_tbar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	int brightness_threshold = userInterface::brightness_level_tbar->Value;
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.change_brightness(brightness_threshold, image);
	pictureBox6->Image = funct_coll.Mat2Bitmap(result);
	pictureBox6->Refresh();
}

private: System::Void contrast_level_tbar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	int contrast_threshold = userInterface::contrast_level_tbar->Value;
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.change_contrast(contrast_threshold, image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}

		 /*apply black&white  effect on an image*/
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = imread(funct_coll.ConvertString2Char(dialogOpen->FileName)); // resize image
	result = funct_coll.convert_rgbimg2binaryimg(image);  
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();

}
		
		 //harris corner detector
		
	private: System::Void harris_thresh_trackBar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		pictureBox2->Controls->Clear();//first Empty the picture box's contents
		int thresh = userInterface::harris_thresh_trackBar->Value;
		Mat image, result;
		mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
		image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
		result = funct_coll.harrisCornerDetector(thresh,image );
		pictureBox2->Image = funct_coll.Mat2Bitmap(result);
		pictureBox2->Refresh();
		
	}

private: System::Void radioButton5_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void radioButton10_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat image, blurredImage;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	// Apply the Gaussian Blur filter. 
	// The Size object determines the size of the filter (the "range" of the blur)
	blurredImage= funct_coll.apply_gaussian_blur(image);
	pictureBox4->Image = funct_coll.Mat2Bitmap(blurredImage);
	pictureBox4->Refresh();
	
}


		
private: System::Void NonLocalMeansDenoising_Color_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox4->Controls->Clear();//first Empty the picture box's contents
	Mat image,result;
	float h = (float)userInterface::NonLocalMeansDenoising_Color->Value;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	
	result=funct_coll.fastNonlocalMeansDenoising_Color(image, h,  10, 7, 21);
	pictureBox4->Image = funct_coll.Mat2Bitmap(result);
	pictureBox4->Refresh();
}
private: System::Void NonLocalMeansDenoising_Grayscale_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox4->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	float h = (float)userInterface::NonLocalMeansDenoising_Grayscale->Value;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image

	result = funct_coll.fastNonlocalMeansDenoising_Grayscale(image, h, 7, 21);
	pictureBox4->Image = funct_coll.Mat2Bitmap(result);
	pictureBox4->Refresh();

}
private: System::Void MedianFilter_tbar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	int kernel_value = userInterface::MedianFilter_tbar->Value;
	pictureBox4->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_median_filter(image, kernel_value);
	pictureBox4->Image = funct_coll.Mat2Bitmap(result);
	pictureBox4->Refresh();
}
private: System::Void periodicNoiseRemoval_Click(System::Object^  sender, System::EventArgs^  e) {
	/*pictureBox4->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName), cv::IMREAD_GRAYSCALE)); // resize image
	result = funct_coll.reduce_periodic_noise(image);
	pictureBox4->Image = funct_coll.Mat2Bitmap(result);
	pictureBox4->Refresh();*/
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.Add_salt_and_pepper_Noise(image,12,16);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}

private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.Add_gaussian_Noise(image, 12, 16);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}

private: System::Void prewitt_trackBar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox2->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	int threshold = userInterface::prewitt_trackBar->Value;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.prewittEdgeDetector(image, threshold);
	pictureBox2->Image = funct_coll.Mat2Bitmap(result);
	pictureBox2->Refresh();
}
private: System::Void sobel_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox2->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.SobelEdgeDetector(image);
	pictureBox2->Image = funct_coll.Mat2Bitmap(result);
	pictureBox2->Refresh();
}

private: System::Void canny_trackBar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox2->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	int threshold = userInterface::canny_trackBar->Value;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.CannyEdgeDetector(image,threshold);
	pictureBox2->Image = funct_coll.Mat2Bitmap(result);
	pictureBox2->Refresh();
}
private: System::Void laplacian_Button_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox2->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.LaplacianEdgeDetector(image);
	pictureBox2->Image = funct_coll.Mat2Bitmap(result);
	pictureBox2->Refresh();
}

private: System::Void hue_value_tbar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	int hue_value = userInterface::hue_value_tbar->Value;
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.change_hue(hue_value,image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void saturation_value_tbar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	int saturation_value = userInterface::saturation_value_tbar->Value;
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.change_saturation(saturation_value, image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void hsv_value_tbar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	int Value_value = userInterface::hsv_value_tbar->Value;
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.change_hsvValue(Value_value, image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
public: System::Void gamma_correct_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
    cv::Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_greyscale_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
 }

private: System::Void Negative_effect_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	cv::Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_negative_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void edgeDetection_SaveImage_Click(System::Object^  sender, System::EventArgs^  e) {
	/*System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
	saveFile->Filter =
		"JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
	
	*/

	//pictureBox2->Image->Save(saveFileDialog1->FileName);
	SaveFileDialog^ saveFile = gcnew SaveFileDialog();
		saveFile->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Png Image|*.png";
		saveFile->Title = "Save an Image File";
		saveFile->FileName = "Untitled";

		saveFile->ShowDialog();
		/*saveFile->AddExtension = System::Windows::Forms::FileDialog::AddExtension:True; //Make sure the extension is added to the FileName
		if (saveFile->ShowDialog = System::Windows::Forms::DialogResult::OK)
		{

			switch (saveFile->FilterIndex)
			{
			case 1: //'If user picks the "Jpg Image" format
				mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
				cv::Mat temp = imread(funct_coll.ConvertString2Char(userInterface::pictureBox2->Image);

				System::String^ temp = saveFile->FileName;
				IntPtr pointer_temp = Marshal::StringToHGlobalAnsi(temp);
				const char* input_location = static_cast<const char*>(pointer_temp.ToPointer());
				imwrite(input_location, temp);
				userInterface::pictureBox2->Image->Save(saveFile->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);
				break;
			case 2: //If the user picks the "Bmp Image" format
				userInterface::pictureBox2->Image->Save(saveFile->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
				break;
			case 3://The user picked the "Png Image" format
				userInterface::pictureBox2->Image->Save(saveFile->FileName, System::Drawing::Imaging::ImageFormat::Png);
				break;
			 //saveFile->Dispose();// 'Dispose the SaveFileDialog when no longer needed
			}
		}*/
	
		
}
private: System::Void sharpenImg_ksize_tBar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	int kernel_size = userInterface::sharpenImg_ksize_tBar->Value;
	int sigma = userInterface::sharpenImg_sigma_tBar->Value;
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.sharpen_image(kernel_size,sigma, image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void sharpenImg_sigma_tBar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	int kernel_size = userInterface::sharpenImg_ksize_tBar->Value;
	int sigma = userInterface::sharpenImg_sigma_tBar->Value;
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.sharpen_image(kernel_size, sigma, image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}

 private: System::Void blur_tBar_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
	 pictureBox8->Controls->Clear();//first Empty the picture box's contents
	 int blur_amount = userInterface::blur_tBar->Value;
	 Mat image, result;
	 mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	 image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	 result = funct_coll.apply_blur(blur_amount, image);
	 pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	 pictureBox8->Refresh();
 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_cartoon_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_pixelate_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}


private: System::Void apply_erode_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_erode_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_dilate_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void detail_enhancer_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_detailEnhancer_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_edgePreserving_filter(image);// 
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}

private: System::Void stylized_effect_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_stylized_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void pencil_sketch_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_pencil_sketch_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void spinning_effect_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_spinning_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}

 private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox8->Controls->Clear();//first Empty the picture box's contents
			 Mat image, result;
			 mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
			 image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
			 result = funct_coll.apply_kaleidoscope_effect(image);
			 pictureBox8->Image = funct_coll.Mat2Bitmap(result);
			 pictureBox8->Refresh();
}

		  //apply sepia effect
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
//	this->button10->ForeColor = System::Drawing::Color::Black;
	//this->button10->BackColor = System::Drawing::Color::Transparent;
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_sepia_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}

private: System::Void apply_pinch_effect_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.apply_pinch_effect(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}

private: System::Void wienerFilter_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = imread(funct_coll.ConvertString2Char(dialogOpen->FileName), CV_LOAD_IMAGE_GRAYSCALE);
	result = funct_coll.wiener_filter(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void deblurringByDeconvolution_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	/*pictureBox6->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	Mat mee = imread("C:\\Users\\kwithu\\Pictures\\blurry.img\\motblurres2.png");
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image,IMREAD_GRAYSCALE
	//result = funct_coll.stochasticcc_deconvolution(image);
	pictureBox6->Image = funct_coll.Mat2Bitmap(mee);
	pictureBox6->Refresh();*/
}

private: System::Void mirror_vertically_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.flip_image_vertically(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void mirrror_horizontally_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.flip_image_horizontally( image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void rotate90left_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.rotate_image_90_left( image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
private: System::Void rotate90_right_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Controls->Clear();//first Empty the picture box's contents
	Mat image, result;
	mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
	image = funct_coll.ToResize(imread(funct_coll.ConvertString2Char(dialogOpen->FileName))); // resize image
	result = funct_coll.rotate_image_90_right(image);
	pictureBox8->Image = funct_coll.Mat2Bitmap(result);
	pictureBox8->Refresh();
}
		 /*the lines of code below are for handling image cropping, and will be used when the mousedown, mousemove,
		   mouseup and paint events are fired on the picturebox asssociated with image cropping*/

		// Image<Bgr, byte> imgInput;
		/* Rectangle rect;
		 System::Drawing::Point StartLocation;
		 System::Drawing::Point EndLocation;
		 bool IsMouseDown = false;
		 bool is_left_mouse_button_down = false;
		 bool is_left_mouse_button_up = false;
		 

		 */
		 Boolean mouseClicked;
		 System::Drawing::Point startPoint;// = new Point();
		 System::Drawing::Point endPoint; //= new Point();
		 Rectangle rectCropArea;

		 Rectangle rect;
		 System::Drawing::Point StartLocation;
		 System::Drawing::Point EndLocation;
		 bool IsMouseDown = false;
		 
		
		 private: Rectangle GetRectangle()// draws a rectangle given start and end cordinates of mouse button press
		 {
			 //rect = gcnew System::Drawing::Rectangle();
			 rect.X = System::Math::Min(StartLocation.X, EndLocation.X);
			 rect.Y = System::Math::Min(StartLocation.Y, EndLocation.Y);
			 rect.Width = System::Math::Abs(StartLocation.X - EndLocation.X);
			 rect.Height = System::Math::Abs(StartLocation.Y - EndLocation.Y);

			 return rect;
		 }

private: System::Void pictureBox7_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	/*IsMouseDown = true;
	StartLocation = e->Location;
	if (e->System::Windows::Forms::MouseEventArgs::Button == System::Windows::Forms::MouseButtons::Left) //check if the button pressed is the left mouse mouse button
	{
		is_left_mouse_button_down = true;
		is_left_mouse_button_up = false;
		StartLocation.X = e->X; //set x coordinate of startlocation to x coordinate of mouse 
		StartLocation.Y = e->Y;// likewise for y coordinate
	}*/

	/*mouseClicked = true;

	startPoint.X = e->X;
	startPoint.Y = e->Y;
	/* Display coordinates 
	X1.Text = startPoint.X.ToString();
	Y1.Text = startPoint.Y.ToString();*/

	/*endPoint.X = -1;
	endPoint.Y = -1;

	rectCropArea =  Rectangle( System::Drawing::Point(e->X, e->Y), System::Drawing::Size());*/

	//////////////////////
	IsMouseDown = true;
	StartLocation = e->Location;
}

private: System::Void pictureBox7_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	/*
	if (IsMouseDown == true)
	{
		EndLocation = e->Location;
		pictureBox1.Invalidate();
	}*/


	/*System::Drawing::Point ptCurrent = System::Drawing::Point(e->X, e->Y);

	/*if (mouseClicked)
	{
		if (endPoint.X != -1)
		{
			// Display Coordinates 
			X1.Text = startPoint.X.ToString();
			Y1.Text = startPoint.Y.ToString();
			X2.Text = e.X.ToString();
			Y2.Text = e.Y.ToString();
		}*/

		/*endPoint = ptCurrent;

		if (e->X > startPoint.X && e->Y > startPoint.Y)
		{
			rectCropArea.Width = e->X - startPoint.X;
			rectCropArea.Height = e->Y - startPoint.Y;
		}
		else if (e->X < startPoint.X && e->Y > startPoint.Y)
		{
			rectCropArea.Width = startPoint.X - e->X;
			rectCropArea.Height = e->Y - startPoint.Y;
			rectCropArea.X = e->X;
			rectCropArea.Y = startPoint.Y;
		}
		else if (e->X > startPoint.X && e->Y < startPoint.Y)
		{
			rectCropArea.Width = e->X - startPoint.X;
			rectCropArea.Height = startPoint.Y - e->Y;
			rectCropArea.X = startPoint.X;
			rectCropArea.Y = e->Y;
		}
		else
		{
			rectCropArea.Width = startPoint.X - e->X;
			rectCropArea.Height = startPoint.Y - e->Y;
			rectCropArea.X = e->X;
			rectCropArea.Y = e->Y;
		}
		//pictureBox7->Refresh();*/

		///////////////////////
		if (IsMouseDown == true)
		{
			EndLocation = e->Location;
			int myarr[1][2];
			myarr[0][0] = StartLocation.X;
			myarr[0][1] = StartLocation.Y;
			myarr[1][0] = EndLocation.X;
			myarr[1][1] = EndLocation.Y;
			
			
			cv::Point start = (myarr[0][0], myarr[0][1]);
			cv::Point end = (myarr[1][0], myarr[1][1]);
			mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
			Mat original_image = imread(funct_coll.ConvertString2Char(dialogOpen->FileName));
			Mat temp_img = original_image.clone();
			cv::rectangle(temp_img, start,end, Scalar(0, 0, 255)); //drawing a rectangle continuously

			//pictureBox7->Invalidate();
		}
		
	}

private: System::Void pictureBox7_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	/*if (rect != nullptr)
	{
		// Create pen.GetRectangle()
		Rectangle rrr;
		Pen^ Pencil = gcnew Pen(Color::DarkCyan, 3.0f);
		e->Graphics->DrawRectangle(Pencil, GetRectangle());
	}*/
	/*System::Drawing::Brush^ _textBrush; System::Drawing::Brush^ b = System::Drawing::Brushes::Black; // the color you want
				//g->FillRectangle(b, emptyspacerect);
				// Draw a different background color, and don't paint a focus rectangle.

	_textBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Blue);*/
	
	/*if (pictureBox7->Image != nullptr)
	{
		Pen^ drawLine = gcnew Pen(System::Drawing::Color::PaleVioletRed, 4.0F);
		drawLine->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot;
		e->Graphics->DrawRectangle(drawLine, rectCropArea);
	}*/
	////////////////////////
	/*if (rect.Width != 0 && rect.Height != 0)
	{
		Pen^ drawLine = gcnew Pen(System::Drawing::Color::PaleVioletRed, 4.0F);
		drawLine->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot;
		//eGraphics.DrawRectangle(Pens.Red, GetRectangle());
		e->Graphics->DrawRectangle(drawLine, GetRectangle());
	}*/
	

}
private: System::Void pictureBox8_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	/*if (pictureBox7->Image != nullptr)
	{
		/*Bitmap^ sourceBitmap = gcnew Bitmap(pictureBox7->Image, pictureBox7->Width, pictureBox7->Height);
		//pictureBox7->Refresh(); // This repositions the dashed box to new location as per coordinates entered. 

		e->Graphics->DrawImage(sourceBitmap, Rectangle(0, 0, pictureBox7->Width, pictureBox7->Height), rectCropArea, System::Drawing::GraphicsUnit::Pixel);

		//sourceBitmap->Dispose();

		pictureBox8->Image = sourceBitmap;*/

		 //Bitmap^ sourceBitmap = gcnew Bitmap(pictureBox7->Image, pictureBox7->Width, pictureBox7->Height);
		//pictureBox7->Refresh(); // This repositions the dashed box to new location as per coordinates entered. 

		//e->Graphics->DrawImage(sourceBitmap, Rectangle(0, 0, pictureBox7->Width, pictureBox7->Height), GetRectangle(), System::Drawing::GraphicsUnit::Pixel);

		//sourceBitmap->Dispose();

		//pictureBox8->Image = sourceBitmap;

	//}*/
}
private: System::Void crop_button_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox7->Refresh();
	pictureBox8->Invalidate();/*Bitmap sourceBitmap = new Bitmap(pictureBox1.Image, pictureBox1.Width, pictureBox1.Height);
	Graphics g = pictureBox2.CreateGraphics();
	pictureBox1.Refresh(); // This repositions the dashed box to new location as per coordinates entered. 

	g.DrawImage(sourceBitmap, new Rectangle(0, 0, pictureBox2.Width, pictureBox2.Height), rectCropArea, GraphicsUnit.Pixel);
	sourceBitmap.Dispose();*/
	
}
private: System::Void pictureBox7_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	/*mouseClicked = false;

	if (endPoint.X != -1)
	{
		System::Drawing::Point currentPoint = System::Drawing::Point(e->X, e->Y);
		// Display coordinates 
		//X2.Text = e.X.ToString();
		//Y2.Text = e.Y.ToString();

	}
	endPoint.X = -1;
	endPoint.Y = -1;
	startPoint.X = -1;
	startPoint.Y = -1;
	/////////
	//pictureBox7->Refresh();

	//Bitmap^ sourceBitmap;// = gcnew Bitmap;// (pictureBox1.Image, pictureBox1.Width, pictureBox1.Height);
	//Graphics^ g = pictureBox7->CreateGraphics();

	//if (!checkBox1.Checked)
	//{
	//g->Graphics->DrawImage(sourceBitmap, new Rectangle(0, 0, pictureBox7->Width, pictureBox7->Height), rectCropArea, System::Drawing::GraphicsUnit::Pixel);
		//sourceBitmap.Dispose();
	//}*/

	////////////////////
	if (IsMouseDown == true)
	{
		EndLocation = e->Location;
		IsMouseDown = false;
		if (rect.Width != 0 && rect.Height != 0)
		{
			/*imgInput.ROI = rect;
			Image<Bgr, byte> temp = imgInput.CopyBlank();
			imgInput.CopyTo(temp);
			imgInput.ROI = Rectangle.Empty;
			pictureBox2.Image = temp.Bitmap;*/
			//pictureBox8->Invalidate();
			cv::Rect box;
			box.width = rect.Width;
			box.height = rect.Height;

			int myarre[1][2];
			myarre[0][0] = StartLocation.X;
			myarre[0][1] = StartLocation.Y;
			myarre[1][0] = EndLocation.X;
			myarre[1][1] = EndLocation.Y;


			cv::Point start = (myarre[0][0], myarre[0][1]);
			cv::Point end = (myarre[1][0], myarre[1][1]);

			box.x = min(start.x, end.x);
			box.y = min(start.y, start.y);

			mw_kwithu_lib::collection_of_improcessing_functions funct_coll;
			Mat original_image = imread(funct_coll.ConvertString2Char(dialogOpen->FileName));
			Mat temp_img = original_image.clone();

			Mat crop(temp_img, box); //
			pictureBox8->Image = funct_coll.Mat2Bitmap(crop);

		}
	}
}

private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
	// to remove the dashes 
	//pictureBox7->Refresh();
}
private: System::Void grabAnImageFromCameraToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	/*VideoCapture cap;
	// open the default camera, use something different from 0 otherwise;
	// Check VideoCapture documentation.
	if (!cap.open(0))
		namedWindow("");
	for (;;)
	{
		Mat frame;
		
		//if (frame.empty()) break; // end of video stream
		while (1) {
			cap >> frame;//the captured image will be sent to the frame which will open in a new window

			DrawCVImage(pictureBox7, frame);
			if (waitKey(10) == 27)
				break;
		}
		cap.release();

	}*/
}
	// the camera will be closed automatically upon exit
	// cap.close();
	















};
}