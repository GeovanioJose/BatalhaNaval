#pragma once

namespace BatalhaNaval {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaJogo
	/// </summary>
	public ref class TelaJogo : public System::Windows::Forms::Form
	{
	public:
		TelaJogo(void)
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
		~TelaJogo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;








	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox56;
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox61;
	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::PictureBox^  pictureBox63;
	private: System::Windows::Forms::PictureBox^  pictureBox64;
	private: System::Windows::Forms::PictureBox^  pictureBox65;
	private: System::Windows::Forms::PictureBox^  pictureBox66;
	private: System::Windows::Forms::PictureBox^  pictureBox67;
	private: System::Windows::Forms::PictureBox^  pictureBox68;
	private: System::Windows::Forms::PictureBox^  pictureBox69;
	private: System::Windows::Forms::PictureBox^  pictureBox70;
	private: System::Windows::Forms::PictureBox^  pictureBox71;
	private: System::Windows::Forms::PictureBox^  pictureBox72;
	private: System::Windows::Forms::PictureBox^  pictureBox73;
	private: System::Windows::Forms::PictureBox^  pictureBox74;
	private: System::Windows::Forms::PictureBox^  pictureBox75;
	private: System::Windows::Forms::PictureBox^  pictureBox76;
	private: System::Windows::Forms::PictureBox^  pictureBox77;
	private: System::Windows::Forms::PictureBox^  pictureBox78;
	private: System::Windows::Forms::PictureBox^  pictureBox79;
	private: System::Windows::Forms::PictureBox^  pictureBox80;
	private: System::Windows::Forms::PictureBox^  pictureBox81;
	private: System::Windows::Forms::PictureBox^  pictureBox82;
	private: System::Windows::Forms::PictureBox^  pictureBox83;
	private: System::Windows::Forms::PictureBox^  pictureBox84;
	private: System::Windows::Forms::PictureBox^  pictureBox85;
	private: System::Windows::Forms::PictureBox^  pictureBox86;
	private: System::Windows::Forms::PictureBox^  pictureBox87;
	private: System::Windows::Forms::PictureBox^  pictureBox88;
	private: System::Windows::Forms::PictureBox^  pictureBox89;
	private: System::Windows::Forms::PictureBox^  pictureBox90;
	private: System::Windows::Forms::PictureBox^  pictureBox91;
	private: System::Windows::Forms::PictureBox^  pictureBox92;
	private: System::Windows::Forms::PictureBox^  pictureBox93;
	private: System::Windows::Forms::PictureBox^  pictureBox94;
	private: System::Windows::Forms::PictureBox^  pictureBox95;
	private: System::Windows::Forms::PictureBox^  pictureBox96;
	private: System::Windows::Forms::PictureBox^  pictureBox97;
	private: System::Windows::Forms::PictureBox^  pictureBox98;
	private: System::Windows::Forms::PictureBox^  pictureBox99;
	private: System::Windows::Forms::PictureBox^  pictureBox100;
	private: System::Windows::Forms::PictureBox^  pictureBox101;
	private: System::Windows::Forms::PictureBox^  pictureBox102;
	private: System::Windows::Forms::PictureBox^  pictureBox103;
	private: System::Windows::Forms::PictureBox^  pictureBox104;
	private: System::Windows::Forms::PictureBox^  pictureBox105;
	private: System::Windows::Forms::PictureBox^  pictureBox106;
	private: System::Windows::Forms::PictureBox^  pictureBox107;
	private: System::Windows::Forms::PictureBox^  pictureBox108;
	private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
private: System::Windows::Forms::PictureBox^  pictureBox109;
private: System::Windows::Forms::PictureBox^  pictureBox110;
private: System::Windows::Forms::PictureBox^  pictureBox111;
private: System::Windows::Forms::PictureBox^  pictureBox112;
private: System::Windows::Forms::PictureBox^  pictureBox113;
private: System::Windows::Forms::PictureBox^  pictureBox114;
private: System::Windows::Forms::PictureBox^  pictureBox115;
private: System::Windows::Forms::PictureBox^  pictureBox116;
private: System::Windows::Forms::PictureBox^  pictureBox117;
private: System::Windows::Forms::PictureBox^  pictureBox118;
private: System::Windows::Forms::PictureBox^  pictureBox119;
private: System::Windows::Forms::PictureBox^  pictureBox120;
private: System::Windows::Forms::PictureBox^  pictureBox121;
private: System::Windows::Forms::PictureBox^  pictureBox122;
private: System::Windows::Forms::PictureBox^  pictureBox123;
private: System::Windows::Forms::PictureBox^  pictureBox124;
private: System::Windows::Forms::PictureBox^  pictureBox125;
private: System::Windows::Forms::PictureBox^  pictureBox126;
private: System::Windows::Forms::PictureBox^  pictureBox127;
private: System::Windows::Forms::PictureBox^  pictureBox128;
private: System::Windows::Forms::PictureBox^  pictureBox129;
private: System::Windows::Forms::PictureBox^  pictureBox130;
private: System::Windows::Forms::PictureBox^  pictureBox131;
private: System::Windows::Forms::PictureBox^  pictureBox132;
private: System::Windows::Forms::PictureBox^  pictureBox133;
private: System::Windows::Forms::PictureBox^  pictureBox134;
private: System::Windows::Forms::PictureBox^  pictureBox135;
private: System::Windows::Forms::PictureBox^  pictureBox136;
private: System::Windows::Forms::PictureBox^  pictureBox137;
private: System::Windows::Forms::PictureBox^  pictureBox138;
private: System::Windows::Forms::PictureBox^  pictureBox139;
private: System::Windows::Forms::PictureBox^  pictureBox140;
private: System::Windows::Forms::PictureBox^  pictureBox141;
private: System::Windows::Forms::PictureBox^  pictureBox142;
private: System::Windows::Forms::PictureBox^  pictureBox143;
private: System::Windows::Forms::PictureBox^  pictureBox144;
private: System::Windows::Forms::PictureBox^  pictureBox145;
private: System::Windows::Forms::PictureBox^  pictureBox146;
private: System::Windows::Forms::PictureBox^  pictureBox147;
private: System::Windows::Forms::PictureBox^  pictureBox148;
private: System::Windows::Forms::PictureBox^  pictureBox149;
private: System::Windows::Forms::PictureBox^  pictureBox150;
private: System::Windows::Forms::PictureBox^  pictureBox151;
private: System::Windows::Forms::PictureBox^  pictureBox152;
private: System::Windows::Forms::PictureBox^  pictureBox153;
private: System::Windows::Forms::PictureBox^  pictureBox154;
private: System::Windows::Forms::PictureBox^  pictureBox155;
private: System::Windows::Forms::PictureBox^  pictureBox156;
private: System::Windows::Forms::PictureBox^  pictureBox157;
private: System::Windows::Forms::PictureBox^  pictureBox158;
private: System::Windows::Forms::PictureBox^  pictureBox159;
private: System::Windows::Forms::PictureBox^  pictureBox160;
private: System::Windows::Forms::PictureBox^  pictureBox161;
private: System::Windows::Forms::PictureBox^  pictureBox162;
private: System::Windows::Forms::PictureBox^  pictureBox163;
private: System::Windows::Forms::PictureBox^  pictureBox164;
private: System::Windows::Forms::PictureBox^  pictureBox165;
private: System::Windows::Forms::PictureBox^  pictureBox166;
private: System::Windows::Forms::PictureBox^  pictureBox167;
private: System::Windows::Forms::PictureBox^  pictureBox168;
private: System::Windows::Forms::PictureBox^  pictureBox169;
private: System::Windows::Forms::PictureBox^  pictureBox170;
private: System::Windows::Forms::PictureBox^  pictureBox171;
private: System::Windows::Forms::PictureBox^  pictureBox172;
private: System::Windows::Forms::PictureBox^  pictureBox173;
private: System::Windows::Forms::PictureBox^  pictureBox174;
private: System::Windows::Forms::PictureBox^  pictureBox175;
private: System::Windows::Forms::PictureBox^  pictureBox176;
private: System::Windows::Forms::PictureBox^  pictureBox177;
private: System::Windows::Forms::PictureBox^  pictureBox178;
private: System::Windows::Forms::PictureBox^  pictureBox179;
private: System::Windows::Forms::PictureBox^  pictureBox180;
private: System::Windows::Forms::PictureBox^  pictureBox181;
private: System::Windows::Forms::PictureBox^  pictureBox182;
private: System::Windows::Forms::PictureBox^  pictureBox183;
private: System::Windows::Forms::PictureBox^  pictureBox184;
private: System::Windows::Forms::PictureBox^  pictureBox185;
private: System::Windows::Forms::PictureBox^  pictureBox186;
private: System::Windows::Forms::PictureBox^  pictureBox187;
private: System::Windows::Forms::PictureBox^  pictureBox188;
private: System::Windows::Forms::PictureBox^  pictureBox189;
private: System::Windows::Forms::PictureBox^  pictureBox190;
private: System::Windows::Forms::PictureBox^  pictureBox191;
private: System::Windows::Forms::PictureBox^  pictureBox192;
private: System::Windows::Forms::PictureBox^  pictureBox193;
private: System::Windows::Forms::PictureBox^  pictureBox194;
private: System::Windows::Forms::PictureBox^  pictureBox195;
private: System::Windows::Forms::PictureBox^  pictureBox196;
private: System::Windows::Forms::PictureBox^  pictureBox197;
private: System::Windows::Forms::PictureBox^  pictureBox198;
private: System::Windows::Forms::PictureBox^  pictureBox199;
private: System::Windows::Forms::PictureBox^  pictureBox200;
private: System::Windows::Forms::PictureBox^  pictureBox201;
private: System::Windows::Forms::PictureBox^  pictureBox202;
private: System::Windows::Forms::PictureBox^  pictureBox203;
private: System::Windows::Forms::PictureBox^  pictureBox204;
private: System::Windows::Forms::PictureBox^  pictureBox205;
private: System::Windows::Forms::PictureBox^  pictureBox206;
private: System::Windows::Forms::PictureBox^  pictureBox207;
private: System::Windows::Forms::PictureBox^  pictureBox208;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;


















private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::PictureBox^  pictureBox1;














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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaJogo::typeid));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox83 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox87 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox88 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox89 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox90 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox91 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox92 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox93 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox94 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox95 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox96 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox97 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox98 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox99 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox100 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox101 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox102 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox103 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox104 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox105 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox106 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox107 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox108 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox109 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox110 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox111 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox112 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox113 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox114 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox115 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox116 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox117 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox118 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox119 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox120 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox121 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox122 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox123 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox124 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox125 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox126 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox127 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox128 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox129 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox130 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox131 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox132 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox133 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox134 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox135 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox136 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox137 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox138 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox139 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox140 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox141 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox142 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox143 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox144 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox145 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox146 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox147 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox148 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox149 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox150 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox151 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox152 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox153 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox154 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox155 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox156 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox157 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox158 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox159 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox160 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox161 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox162 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox163 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox164 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox165 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox166 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox167 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox168 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox169 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox170 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox171 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox172 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox173 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox174 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox175 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox176 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox177 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox178 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox179 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox180 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox181 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox182 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox183 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox184 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox185 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox186 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox187 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox188 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox189 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox190 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox191 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox192 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox193 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox194 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox195 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox196 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox197 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox198 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox199 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox200 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox201 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox202 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox203 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox204 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox205 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox206 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox207 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox208 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox102))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox103))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox104))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox105))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox106))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox107))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox108))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel2->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox109))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox110))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox111))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox112))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox113))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox114))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox115))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox116))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox117))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox118))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox119))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox120))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox121))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox122))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox123))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox124))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox125))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox126))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox127))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox128))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox129))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox130))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox131))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox132))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox133))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox134))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox135))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox136))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox137))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox138))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox139))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox140))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox141))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox142))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox143))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox144))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox145))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox146))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox147))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox148))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox149))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox150))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox151))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox152))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox153))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox154))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox155))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox156))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox157))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox158))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox159))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox160))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox161))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox162))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox163))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox164))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox165))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox166))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox167))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox168))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox169))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox170))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox171))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox172))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox173))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox174))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox175))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox176))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox177))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox178))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox179))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox180))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox181))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox182))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox183))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox184))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox185))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox186))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox187))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox188))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox189))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox190))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox191))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox192))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox193))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox194))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox195))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox196))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox197))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox198))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox199))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox200))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox201))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox202))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox203))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox204))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox205))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox206))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox207))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox208))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(1164, 4);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(32, 23);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			this->axWindowsMediaPlayer1->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(46, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(503, 500);
			this->panel1->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				51)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox10, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox11, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox12, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox13, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox14, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox15, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox16, 7, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox17, 8, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox18, 9, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox19, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox20, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox21, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox22, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox23, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox24, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox25, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox26, 7, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox27, 8, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox28, 9, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox29, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox30, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox31, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox32, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox33, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox34, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox35, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox36, 7, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox37, 8, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox38, 9, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox39, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox40, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox41, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox42, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox43, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox44, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox45, 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox46, 7, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox47, 8, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox48, 9, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox49, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox50, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox51, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox52, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox53, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox54, 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox55, 6, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox56, 7, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox57, 8, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox58, 9, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox59, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox60, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox61, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox62, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox63, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox64, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox65, 6, 5);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox66, 7, 5);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox67, 8, 5);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox68, 9, 5);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox69, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox70, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox71, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox72, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox73, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox74, 5, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox75, 6, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox76, 7, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox77, 8, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox78, 9, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox79, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox80, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox81, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox82, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox83, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox84, 5, 7);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox85, 6, 7);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox86, 7, 7);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox87, 8, 7);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox88, 9, 7);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox89, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox90, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox91, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox92, 3, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox93, 4, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox94, 5, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox95, 6, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox96, 7, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox97, 8, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox98, 9, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox99, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox100, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox101, 2, 9);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox102, 3, 9);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox103, 4, 9);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox104, 5, 9);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox105, 6, 9);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox106, 7, 9);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox107, 8, 9);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox108, 9, 9);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox9, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(2, 1);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(501, 497);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(53, 3);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(44, 44);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 1;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(103, 3);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(44, 44);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 2;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(153, 3);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(44, 44);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 3;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(203, 3);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(44, 44);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 4;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(253, 3);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(44, 44);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 5;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(303, 3);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(44, 44);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 6;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(353, 3);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(44, 44);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 7;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(403, 3);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(44, 44);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 8;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(453, 3);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(44, 44);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 9;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(3, 53);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(44, 44);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 10;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(53, 53);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(44, 44);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 11;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(103, 53);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(44, 44);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 12;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(153, 53);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(44, 44);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 13;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(203, 53);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(44, 44);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 14;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(253, 53);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(44, 44);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 15;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(303, 53);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(44, 44);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 16;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(353, 53);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(44, 44);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 17;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(403, 53);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(44, 44);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 18;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(453, 53);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(44, 44);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 19;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(3, 103);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(44, 44);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 20;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(53, 103);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(44, 44);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 21;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(103, 103);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(44, 44);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 22;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(153, 103);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(44, 44);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 23;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(203, 103);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(44, 44);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox33->TabIndex = 24;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(253, 103);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(44, 44);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 25;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(303, 103);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(44, 44);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 26;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(353, 103);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(44, 44);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 27;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(403, 103);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(44, 44);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 28;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(453, 103);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(44, 44);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 29;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(3, 153);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(44, 44);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox39->TabIndex = 30;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(53, 153);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(44, 44);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox40->TabIndex = 31;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(103, 153);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(44, 44);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox41->TabIndex = 32;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(153, 153);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(44, 44);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox42->TabIndex = 33;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(203, 153);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(44, 44);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox43->TabIndex = 34;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(253, 153);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(44, 44);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox44->TabIndex = 35;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(303, 153);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(44, 44);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox45->TabIndex = 36;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(353, 153);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(44, 44);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox46->TabIndex = 37;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(403, 153);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(44, 44);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox47->TabIndex = 38;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(453, 153);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(44, 44);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox48->TabIndex = 39;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(3, 203);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(44, 44);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox49->TabIndex = 40;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(53, 203);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(44, 44);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox50->TabIndex = 41;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(103, 203);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(44, 44);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox51->TabIndex = 42;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox52
			// 
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(153, 203);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(44, 44);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox52->TabIndex = 43;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(203, 203);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(44, 44);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox53->TabIndex = 44;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox54
			// 
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(253, 203);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(44, 44);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox54->TabIndex = 45;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox55
			// 
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(303, 203);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(44, 44);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox55->TabIndex = 46;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox56
			// 
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(353, 203);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(44, 44);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox56->TabIndex = 47;
			this->pictureBox56->TabStop = false;
			this->pictureBox56->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox57
			// 
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(403, 203);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(44, 44);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox57->TabIndex = 48;
			this->pictureBox57->TabStop = false;
			this->pictureBox57->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox58
			// 
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(453, 203);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(44, 44);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox58->TabIndex = 49;
			this->pictureBox58->TabStop = false;
			this->pictureBox58->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox59
			// 
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(3, 253);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(44, 44);
			this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox59->TabIndex = 50;
			this->pictureBox59->TabStop = false;
			this->pictureBox59->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox60
			// 
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(53, 253);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(44, 44);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox60->TabIndex = 51;
			this->pictureBox60->TabStop = false;
			this->pictureBox60->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox61
			// 
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(103, 253);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(44, 44);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox61->TabIndex = 52;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox62
			// 
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(153, 253);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(44, 44);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox62->TabIndex = 53;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox63
			// 
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(203, 253);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(44, 44);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox63->TabIndex = 54;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox64
			// 
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(253, 253);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(44, 44);
			this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox64->TabIndex = 55;
			this->pictureBox64->TabStop = false;
			this->pictureBox64->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox65
			// 
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(303, 253);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(44, 44);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox65->TabIndex = 56;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox66
			// 
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(353, 253);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(44, 44);
			this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox66->TabIndex = 57;
			this->pictureBox66->TabStop = false;
			this->pictureBox66->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox67
			// 
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(403, 253);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(44, 44);
			this->pictureBox67->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox67->TabIndex = 58;
			this->pictureBox67->TabStop = false;
			this->pictureBox67->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox68
			// 
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(453, 253);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(44, 44);
			this->pictureBox68->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox68->TabIndex = 59;
			this->pictureBox68->TabStop = false;
			this->pictureBox68->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox69
			// 
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(3, 303);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(44, 44);
			this->pictureBox69->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox69->TabIndex = 60;
			this->pictureBox69->TabStop = false;
			this->pictureBox69->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox70
			// 
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(53, 303);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(44, 44);
			this->pictureBox70->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox70->TabIndex = 61;
			this->pictureBox70->TabStop = false;
			this->pictureBox70->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox71
			// 
			this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
			this->pictureBox71->Location = System::Drawing::Point(103, 303);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(44, 44);
			this->pictureBox71->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox71->TabIndex = 62;
			this->pictureBox71->TabStop = false;
			this->pictureBox71->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox72
			// 
			this->pictureBox72->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
			this->pictureBox72->Location = System::Drawing::Point(153, 303);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(44, 44);
			this->pictureBox72->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox72->TabIndex = 63;
			this->pictureBox72->TabStop = false;
			this->pictureBox72->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox73
			// 
			this->pictureBox73->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.Image")));
			this->pictureBox73->Location = System::Drawing::Point(203, 303);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(44, 44);
			this->pictureBox73->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox73->TabIndex = 64;
			this->pictureBox73->TabStop = false;
			this->pictureBox73->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox74
			// 
			this->pictureBox74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.Image")));
			this->pictureBox74->Location = System::Drawing::Point(253, 303);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(44, 44);
			this->pictureBox74->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox74->TabIndex = 65;
			this->pictureBox74->TabStop = false;
			this->pictureBox74->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox75
			// 
			this->pictureBox75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.Image")));
			this->pictureBox75->Location = System::Drawing::Point(303, 303);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(44, 44);
			this->pictureBox75->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox75->TabIndex = 66;
			this->pictureBox75->TabStop = false;
			this->pictureBox75->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox76
			// 
			this->pictureBox76->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.Image")));
			this->pictureBox76->Location = System::Drawing::Point(353, 303);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(44, 44);
			this->pictureBox76->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox76->TabIndex = 67;
			this->pictureBox76->TabStop = false;
			this->pictureBox76->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox77
			// 
			this->pictureBox77->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox77.Image")));
			this->pictureBox77->Location = System::Drawing::Point(403, 303);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(44, 44);
			this->pictureBox77->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox77->TabIndex = 68;
			this->pictureBox77->TabStop = false;
			this->pictureBox77->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox78
			// 
			this->pictureBox78->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox78.Image")));
			this->pictureBox78->Location = System::Drawing::Point(453, 303);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(44, 44);
			this->pictureBox78->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox78->TabIndex = 69;
			this->pictureBox78->TabStop = false;
			this->pictureBox78->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox79
			// 
			this->pictureBox79->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox79.Image")));
			this->pictureBox79->Location = System::Drawing::Point(3, 353);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(44, 44);
			this->pictureBox79->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox79->TabIndex = 70;
			this->pictureBox79->TabStop = false;
			this->pictureBox79->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox80
			// 
			this->pictureBox80->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.Image")));
			this->pictureBox80->Location = System::Drawing::Point(53, 353);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(44, 44);
			this->pictureBox80->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox80->TabIndex = 71;
			this->pictureBox80->TabStop = false;
			this->pictureBox80->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox81
			// 
			this->pictureBox81->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox81.Image")));
			this->pictureBox81->Location = System::Drawing::Point(103, 353);
			this->pictureBox81->Name = L"pictureBox81";
			this->pictureBox81->Size = System::Drawing::Size(44, 44);
			this->pictureBox81->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox81->TabIndex = 72;
			this->pictureBox81->TabStop = false;
			this->pictureBox81->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox82
			// 
			this->pictureBox82->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox82.Image")));
			this->pictureBox82->Location = System::Drawing::Point(153, 353);
			this->pictureBox82->Name = L"pictureBox82";
			this->pictureBox82->Size = System::Drawing::Size(44, 44);
			this->pictureBox82->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox82->TabIndex = 73;
			this->pictureBox82->TabStop = false;
			this->pictureBox82->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox83
			// 
			this->pictureBox83->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox83.Image")));
			this->pictureBox83->Location = System::Drawing::Point(203, 353);
			this->pictureBox83->Name = L"pictureBox83";
			this->pictureBox83->Size = System::Drawing::Size(44, 44);
			this->pictureBox83->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox83->TabIndex = 74;
			this->pictureBox83->TabStop = false;
			this->pictureBox83->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox84
			// 
			this->pictureBox84->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox84.Image")));
			this->pictureBox84->Location = System::Drawing::Point(253, 353);
			this->pictureBox84->Name = L"pictureBox84";
			this->pictureBox84->Size = System::Drawing::Size(44, 44);
			this->pictureBox84->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox84->TabIndex = 75;
			this->pictureBox84->TabStop = false;
			this->pictureBox84->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox85
			// 
			this->pictureBox85->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox85.Image")));
			this->pictureBox85->Location = System::Drawing::Point(303, 353);
			this->pictureBox85->Name = L"pictureBox85";
			this->pictureBox85->Size = System::Drawing::Size(44, 44);
			this->pictureBox85->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox85->TabIndex = 76;
			this->pictureBox85->TabStop = false;
			this->pictureBox85->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox86
			// 
			this->pictureBox86->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox86.Image")));
			this->pictureBox86->Location = System::Drawing::Point(353, 353);
			this->pictureBox86->Name = L"pictureBox86";
			this->pictureBox86->Size = System::Drawing::Size(44, 44);
			this->pictureBox86->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox86->TabIndex = 77;
			this->pictureBox86->TabStop = false;
			this->pictureBox86->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox87
			// 
			this->pictureBox87->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox87.Image")));
			this->pictureBox87->Location = System::Drawing::Point(403, 353);
			this->pictureBox87->Name = L"pictureBox87";
			this->pictureBox87->Size = System::Drawing::Size(44, 44);
			this->pictureBox87->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox87->TabIndex = 78;
			this->pictureBox87->TabStop = false;
			this->pictureBox87->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox88
			// 
			this->pictureBox88->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox88->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox88.Image")));
			this->pictureBox88->Location = System::Drawing::Point(453, 353);
			this->pictureBox88->Name = L"pictureBox88";
			this->pictureBox88->Size = System::Drawing::Size(45, 44);
			this->pictureBox88->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox88->TabIndex = 79;
			this->pictureBox88->TabStop = false;
			this->pictureBox88->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox89
			// 
			this->pictureBox89->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox89.Image")));
			this->pictureBox89->Location = System::Drawing::Point(3, 403);
			this->pictureBox89->Name = L"pictureBox89";
			this->pictureBox89->Size = System::Drawing::Size(44, 44);
			this->pictureBox89->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox89->TabIndex = 80;
			this->pictureBox89->TabStop = false;
			this->pictureBox89->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox90
			// 
			this->pictureBox90->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox90.Image")));
			this->pictureBox90->Location = System::Drawing::Point(53, 403);
			this->pictureBox90->Name = L"pictureBox90";
			this->pictureBox90->Size = System::Drawing::Size(44, 44);
			this->pictureBox90->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox90->TabIndex = 81;
			this->pictureBox90->TabStop = false;
			this->pictureBox90->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox91
			// 
			this->pictureBox91->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox91.Image")));
			this->pictureBox91->Location = System::Drawing::Point(103, 403);
			this->pictureBox91->Name = L"pictureBox91";
			this->pictureBox91->Size = System::Drawing::Size(44, 44);
			this->pictureBox91->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox91->TabIndex = 82;
			this->pictureBox91->TabStop = false;
			this->pictureBox91->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox92
			// 
			this->pictureBox92->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox92.Image")));
			this->pictureBox92->Location = System::Drawing::Point(153, 403);
			this->pictureBox92->Name = L"pictureBox92";
			this->pictureBox92->Size = System::Drawing::Size(44, 44);
			this->pictureBox92->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox92->TabIndex = 83;
			this->pictureBox92->TabStop = false;
			this->pictureBox92->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox93
			// 
			this->pictureBox93->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox93->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox93.Image")));
			this->pictureBox93->Location = System::Drawing::Point(203, 403);
			this->pictureBox93->Name = L"pictureBox93";
			this->pictureBox93->Size = System::Drawing::Size(44, 44);
			this->pictureBox93->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox93->TabIndex = 84;
			this->pictureBox93->TabStop = false;
			// 
			// pictureBox94
			// 
			this->pictureBox94->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox94.Image")));
			this->pictureBox94->Location = System::Drawing::Point(253, 403);
			this->pictureBox94->Name = L"pictureBox94";
			this->pictureBox94->Size = System::Drawing::Size(44, 44);
			this->pictureBox94->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox94->TabIndex = 85;
			this->pictureBox94->TabStop = false;
			this->pictureBox94->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox95
			// 
			this->pictureBox95->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox95.Image")));
			this->pictureBox95->Location = System::Drawing::Point(303, 403);
			this->pictureBox95->Name = L"pictureBox95";
			this->pictureBox95->Size = System::Drawing::Size(44, 44);
			this->pictureBox95->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox95->TabIndex = 86;
			this->pictureBox95->TabStop = false;
			this->pictureBox95->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox96
			// 
			this->pictureBox96->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox96.Image")));
			this->pictureBox96->Location = System::Drawing::Point(353, 403);
			this->pictureBox96->Name = L"pictureBox96";
			this->pictureBox96->Size = System::Drawing::Size(44, 44);
			this->pictureBox96->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox96->TabIndex = 87;
			this->pictureBox96->TabStop = false;
			this->pictureBox96->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox97
			// 
			this->pictureBox97->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox97.Image")));
			this->pictureBox97->Location = System::Drawing::Point(403, 403);
			this->pictureBox97->Name = L"pictureBox97";
			this->pictureBox97->Size = System::Drawing::Size(44, 44);
			this->pictureBox97->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox97->TabIndex = 88;
			this->pictureBox97->TabStop = false;
			this->pictureBox97->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox98
			// 
			this->pictureBox98->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox98.Image")));
			this->pictureBox98->Location = System::Drawing::Point(453, 403);
			this->pictureBox98->Name = L"pictureBox98";
			this->pictureBox98->Size = System::Drawing::Size(44, 44);
			this->pictureBox98->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox98->TabIndex = 89;
			this->pictureBox98->TabStop = false;
			this->pictureBox98->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox99
			// 
			this->pictureBox99->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox99.Image")));
			this->pictureBox99->Location = System::Drawing::Point(3, 453);
			this->pictureBox99->Name = L"pictureBox99";
			this->pictureBox99->Size = System::Drawing::Size(44, 44);
			this->pictureBox99->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox99->TabIndex = 90;
			this->pictureBox99->TabStop = false;
			this->pictureBox99->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox100
			// 
			this->pictureBox100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox100.Image")));
			this->pictureBox100->Location = System::Drawing::Point(53, 453);
			this->pictureBox100->Name = L"pictureBox100";
			this->pictureBox100->Size = System::Drawing::Size(44, 44);
			this->pictureBox100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox100->TabIndex = 91;
			this->pictureBox100->TabStop = false;
			this->pictureBox100->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox101
			// 
			this->pictureBox101->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox101.Image")));
			this->pictureBox101->Location = System::Drawing::Point(103, 453);
			this->pictureBox101->Name = L"pictureBox101";
			this->pictureBox101->Size = System::Drawing::Size(44, 44);
			this->pictureBox101->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox101->TabIndex = 92;
			this->pictureBox101->TabStop = false;
			this->pictureBox101->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox102
			// 
			this->pictureBox102->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox102.Image")));
			this->pictureBox102->Location = System::Drawing::Point(153, 453);
			this->pictureBox102->Name = L"pictureBox102";
			this->pictureBox102->Size = System::Drawing::Size(44, 44);
			this->pictureBox102->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox102->TabIndex = 93;
			this->pictureBox102->TabStop = false;
			this->pictureBox102->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox103
			// 
			this->pictureBox103->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox103.Image")));
			this->pictureBox103->Location = System::Drawing::Point(203, 453);
			this->pictureBox103->Name = L"pictureBox103";
			this->pictureBox103->Size = System::Drawing::Size(44, 44);
			this->pictureBox103->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox103->TabIndex = 94;
			this->pictureBox103->TabStop = false;
			this->pictureBox103->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox104
			// 
			this->pictureBox104->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox104.Image")));
			this->pictureBox104->Location = System::Drawing::Point(253, 453);
			this->pictureBox104->Name = L"pictureBox104";
			this->pictureBox104->Size = System::Drawing::Size(44, 44);
			this->pictureBox104->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox104->TabIndex = 95;
			this->pictureBox104->TabStop = false;
			this->pictureBox104->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox105
			// 
			this->pictureBox105->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox105.Image")));
			this->pictureBox105->Location = System::Drawing::Point(303, 453);
			this->pictureBox105->Name = L"pictureBox105";
			this->pictureBox105->Size = System::Drawing::Size(44, 44);
			this->pictureBox105->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox105->TabIndex = 96;
			this->pictureBox105->TabStop = false;
			this->pictureBox105->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox106
			// 
			this->pictureBox106->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox106.Image")));
			this->pictureBox106->Location = System::Drawing::Point(353, 453);
			this->pictureBox106->Name = L"pictureBox106";
			this->pictureBox106->Size = System::Drawing::Size(44, 44);
			this->pictureBox106->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox106->TabIndex = 97;
			this->pictureBox106->TabStop = false;
			this->pictureBox106->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox107
			// 
			this->pictureBox107->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox107.Image")));
			this->pictureBox107->Location = System::Drawing::Point(403, 453);
			this->pictureBox107->Name = L"pictureBox107";
			this->pictureBox107->Size = System::Drawing::Size(44, 44);
			this->pictureBox107->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox107->TabIndex = 98;
			this->pictureBox107->TabStop = false;
			this->pictureBox107->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox108
			// 
			this->pictureBox108->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox108.Image")));
			this->pictureBox108->Location = System::Drawing::Point(453, 453);
			this->pictureBox108->Name = L"pictureBox108";
			this->pictureBox108->Size = System::Drawing::Size(44, 44);
			this->pictureBox108->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox108->TabIndex = 99;
			this->pictureBox108->TabStop = false;
			this->pictureBox108->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(3, 3);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(44, 44);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 0;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tableLayoutPanel2);
			this->panel2->Location = System::Drawing::Point(653, 48);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(500, 500);
			this->panel2->TabIndex = 2;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 10;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->pictureBox109, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox110, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox111, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox112, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox113, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox114, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox115, 6, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox116, 7, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox117, 8, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox118, 9, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox119, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox120, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox121, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox122, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox123, 4, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox124, 5, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox125, 6, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox126, 7, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox127, 8, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox128, 9, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox129, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox130, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox131, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox132, 3, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox133, 4, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox134, 5, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox135, 6, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox136, 7, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox137, 8, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox138, 9, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox139, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox140, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox141, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox142, 3, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox143, 4, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox144, 5, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox145, 6, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox146, 7, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox147, 8, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox148, 9, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox149, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox150, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox151, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox152, 3, 4);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox153, 4, 4);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox154, 5, 4);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox155, 6, 4);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox156, 7, 4);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox157, 8, 4);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox158, 9, 4);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox159, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox160, 1, 5);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox161, 2, 5);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox162, 3, 5);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox163, 4, 5);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox164, 5, 5);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox165, 6, 5);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox166, 7, 5);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox167, 8, 5);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox168, 9, 5);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox169, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox170, 1, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox171, 2, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox172, 3, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox173, 4, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox174, 5, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox175, 6, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox176, 7, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox177, 8, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox178, 9, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox179, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox180, 1, 7);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox181, 2, 7);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox182, 3, 7);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox183, 4, 7);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox184, 5, 7);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox185, 6, 7);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox186, 7, 7);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox187, 8, 7);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox188, 9, 7);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox189, 0, 8);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox190, 1, 8);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox191, 2, 8);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox192, 3, 8);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox193, 4, 8);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox194, 5, 8);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox195, 6, 8);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox196, 7, 8);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox197, 8, 8);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox198, 9, 8);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox199, 0, 9);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox200, 1, 9);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox201, 2, 9);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox202, 3, 9);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox203, 4, 9);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox204, 5, 9);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox205, 6, 9);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox206, 7, 9);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox207, 8, 9);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox208, 9, 9);
			this->tableLayoutPanel2->Location = System::Drawing::Point(1, 2);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 10;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(498, 497);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// pictureBox109
			// 
			this->pictureBox109->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox109.Image")));
			this->pictureBox109->Location = System::Drawing::Point(3, 3);
			this->pictureBox109->Name = L"pictureBox109";
			this->pictureBox109->Size = System::Drawing::Size(44, 44);
			this->pictureBox109->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox109->TabIndex = 0;
			this->pictureBox109->TabStop = false;
			// 
			// pictureBox110
			// 
			this->pictureBox110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox110.Image")));
			this->pictureBox110->Location = System::Drawing::Point(53, 3);
			this->pictureBox110->Name = L"pictureBox110";
			this->pictureBox110->Size = System::Drawing::Size(44, 44);
			this->pictureBox110->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox110->TabIndex = 1;
			this->pictureBox110->TabStop = false;
			// 
			// pictureBox111
			// 
			this->pictureBox111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox111.Image")));
			this->pictureBox111->Location = System::Drawing::Point(103, 3);
			this->pictureBox111->Name = L"pictureBox111";
			this->pictureBox111->Size = System::Drawing::Size(44, 44);
			this->pictureBox111->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox111->TabIndex = 2;
			this->pictureBox111->TabStop = false;
			// 
			// pictureBox112
			// 
			this->pictureBox112->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox112.Image")));
			this->pictureBox112->Location = System::Drawing::Point(153, 3);
			this->pictureBox112->Name = L"pictureBox112";
			this->pictureBox112->Size = System::Drawing::Size(44, 44);
			this->pictureBox112->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox112->TabIndex = 3;
			this->pictureBox112->TabStop = false;
			// 
			// pictureBox113
			// 
			this->pictureBox113->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox113.Image")));
			this->pictureBox113->Location = System::Drawing::Point(203, 3);
			this->pictureBox113->Name = L"pictureBox113";
			this->pictureBox113->Size = System::Drawing::Size(44, 44);
			this->pictureBox113->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox113->TabIndex = 4;
			this->pictureBox113->TabStop = false;
			// 
			// pictureBox114
			// 
			this->pictureBox114->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox114.Image")));
			this->pictureBox114->Location = System::Drawing::Point(253, 3);
			this->pictureBox114->Name = L"pictureBox114";
			this->pictureBox114->Size = System::Drawing::Size(44, 44);
			this->pictureBox114->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox114->TabIndex = 5;
			this->pictureBox114->TabStop = false;
			// 
			// pictureBox115
			// 
			this->pictureBox115->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox115.Image")));
			this->pictureBox115->Location = System::Drawing::Point(303, 3);
			this->pictureBox115->Name = L"pictureBox115";
			this->pictureBox115->Size = System::Drawing::Size(44, 44);
			this->pictureBox115->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox115->TabIndex = 6;
			this->pictureBox115->TabStop = false;
			// 
			// pictureBox116
			// 
			this->pictureBox116->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox116.Image")));
			this->pictureBox116->Location = System::Drawing::Point(353, 3);
			this->pictureBox116->Name = L"pictureBox116";
			this->pictureBox116->Size = System::Drawing::Size(44, 44);
			this->pictureBox116->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox116->TabIndex = 7;
			this->pictureBox116->TabStop = false;
			// 
			// pictureBox117
			// 
			this->pictureBox117->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox117.Image")));
			this->pictureBox117->Location = System::Drawing::Point(403, 3);
			this->pictureBox117->Name = L"pictureBox117";
			this->pictureBox117->Size = System::Drawing::Size(44, 44);
			this->pictureBox117->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox117->TabIndex = 8;
			this->pictureBox117->TabStop = false;
			// 
			// pictureBox118
			// 
			this->pictureBox118->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox118.Image")));
			this->pictureBox118->Location = System::Drawing::Point(453, 3);
			this->pictureBox118->Name = L"pictureBox118";
			this->pictureBox118->Size = System::Drawing::Size(44, 44);
			this->pictureBox118->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox118->TabIndex = 9;
			this->pictureBox118->TabStop = false;
			// 
			// pictureBox119
			// 
			this->pictureBox119->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox119.Image")));
			this->pictureBox119->Location = System::Drawing::Point(3, 53);
			this->pictureBox119->Name = L"pictureBox119";
			this->pictureBox119->Size = System::Drawing::Size(44, 44);
			this->pictureBox119->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox119->TabIndex = 10;
			this->pictureBox119->TabStop = false;
			// 
			// pictureBox120
			// 
			this->pictureBox120->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox120.Image")));
			this->pictureBox120->Location = System::Drawing::Point(53, 53);
			this->pictureBox120->Name = L"pictureBox120";
			this->pictureBox120->Size = System::Drawing::Size(44, 44);
			this->pictureBox120->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox120->TabIndex = 11;
			this->pictureBox120->TabStop = false;
			// 
			// pictureBox121
			// 
			this->pictureBox121->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox121.Image")));
			this->pictureBox121->Location = System::Drawing::Point(103, 53);
			this->pictureBox121->Name = L"pictureBox121";
			this->pictureBox121->Size = System::Drawing::Size(44, 44);
			this->pictureBox121->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox121->TabIndex = 12;
			this->pictureBox121->TabStop = false;
			// 
			// pictureBox122
			// 
			this->pictureBox122->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox122.Image")));
			this->pictureBox122->Location = System::Drawing::Point(153, 53);
			this->pictureBox122->Name = L"pictureBox122";
			this->pictureBox122->Size = System::Drawing::Size(44, 44);
			this->pictureBox122->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox122->TabIndex = 13;
			this->pictureBox122->TabStop = false;
			// 
			// pictureBox123
			// 
			this->pictureBox123->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox123.Image")));
			this->pictureBox123->Location = System::Drawing::Point(203, 53);
			this->pictureBox123->Name = L"pictureBox123";
			this->pictureBox123->Size = System::Drawing::Size(44, 44);
			this->pictureBox123->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox123->TabIndex = 14;
			this->pictureBox123->TabStop = false;
			// 
			// pictureBox124
			// 
			this->pictureBox124->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox124.Image")));
			this->pictureBox124->Location = System::Drawing::Point(253, 53);
			this->pictureBox124->Name = L"pictureBox124";
			this->pictureBox124->Size = System::Drawing::Size(44, 44);
			this->pictureBox124->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox124->TabIndex = 15;
			this->pictureBox124->TabStop = false;
			// 
			// pictureBox125
			// 
			this->pictureBox125->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox125.Image")));
			this->pictureBox125->Location = System::Drawing::Point(303, 53);
			this->pictureBox125->Name = L"pictureBox125";
			this->pictureBox125->Size = System::Drawing::Size(44, 44);
			this->pictureBox125->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox125->TabIndex = 16;
			this->pictureBox125->TabStop = false;
			// 
			// pictureBox126
			// 
			this->pictureBox126->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox126.Image")));
			this->pictureBox126->Location = System::Drawing::Point(353, 53);
			this->pictureBox126->Name = L"pictureBox126";
			this->pictureBox126->Size = System::Drawing::Size(44, 44);
			this->pictureBox126->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox126->TabIndex = 17;
			this->pictureBox126->TabStop = false;
			// 
			// pictureBox127
			// 
			this->pictureBox127->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox127.Image")));
			this->pictureBox127->Location = System::Drawing::Point(403, 53);
			this->pictureBox127->Name = L"pictureBox127";
			this->pictureBox127->Size = System::Drawing::Size(44, 44);
			this->pictureBox127->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox127->TabIndex = 18;
			this->pictureBox127->TabStop = false;
			// 
			// pictureBox128
			// 
			this->pictureBox128->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox128.Image")));
			this->pictureBox128->Location = System::Drawing::Point(453, 53);
			this->pictureBox128->Name = L"pictureBox128";
			this->pictureBox128->Size = System::Drawing::Size(44, 44);
			this->pictureBox128->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox128->TabIndex = 19;
			this->pictureBox128->TabStop = false;
			// 
			// pictureBox129
			// 
			this->pictureBox129->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox129.Image")));
			this->pictureBox129->Location = System::Drawing::Point(3, 103);
			this->pictureBox129->Name = L"pictureBox129";
			this->pictureBox129->Size = System::Drawing::Size(44, 44);
			this->pictureBox129->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox129->TabIndex = 20;
			this->pictureBox129->TabStop = false;
			// 
			// pictureBox130
			// 
			this->pictureBox130->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox130.Image")));
			this->pictureBox130->Location = System::Drawing::Point(53, 103);
			this->pictureBox130->Name = L"pictureBox130";
			this->pictureBox130->Size = System::Drawing::Size(44, 44);
			this->pictureBox130->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox130->TabIndex = 21;
			this->pictureBox130->TabStop = false;
			// 
			// pictureBox131
			// 
			this->pictureBox131->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox131.Image")));
			this->pictureBox131->Location = System::Drawing::Point(103, 103);
			this->pictureBox131->Name = L"pictureBox131";
			this->pictureBox131->Size = System::Drawing::Size(44, 44);
			this->pictureBox131->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox131->TabIndex = 22;
			this->pictureBox131->TabStop = false;
			// 
			// pictureBox132
			// 
			this->pictureBox132->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox132.Image")));
			this->pictureBox132->Location = System::Drawing::Point(153, 103);
			this->pictureBox132->Name = L"pictureBox132";
			this->pictureBox132->Size = System::Drawing::Size(44, 44);
			this->pictureBox132->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox132->TabIndex = 23;
			this->pictureBox132->TabStop = false;
			// 
			// pictureBox133
			// 
			this->pictureBox133->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox133.Image")));
			this->pictureBox133->Location = System::Drawing::Point(203, 103);
			this->pictureBox133->Name = L"pictureBox133";
			this->pictureBox133->Size = System::Drawing::Size(44, 44);
			this->pictureBox133->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox133->TabIndex = 24;
			this->pictureBox133->TabStop = false;
			// 
			// pictureBox134
			// 
			this->pictureBox134->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox134.Image")));
			this->pictureBox134->Location = System::Drawing::Point(253, 103);
			this->pictureBox134->Name = L"pictureBox134";
			this->pictureBox134->Size = System::Drawing::Size(44, 44);
			this->pictureBox134->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox134->TabIndex = 25;
			this->pictureBox134->TabStop = false;
			// 
			// pictureBox135
			// 
			this->pictureBox135->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox135.Image")));
			this->pictureBox135->Location = System::Drawing::Point(303, 103);
			this->pictureBox135->Name = L"pictureBox135";
			this->pictureBox135->Size = System::Drawing::Size(44, 44);
			this->pictureBox135->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox135->TabIndex = 26;
			this->pictureBox135->TabStop = false;
			// 
			// pictureBox136
			// 
			this->pictureBox136->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox136.Image")));
			this->pictureBox136->Location = System::Drawing::Point(353, 103);
			this->pictureBox136->Name = L"pictureBox136";
			this->pictureBox136->Size = System::Drawing::Size(44, 44);
			this->pictureBox136->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox136->TabIndex = 27;
			this->pictureBox136->TabStop = false;
			// 
			// pictureBox137
			// 
			this->pictureBox137->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox137.Image")));
			this->pictureBox137->Location = System::Drawing::Point(403, 103);
			this->pictureBox137->Name = L"pictureBox137";
			this->pictureBox137->Size = System::Drawing::Size(44, 44);
			this->pictureBox137->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox137->TabIndex = 28;
			this->pictureBox137->TabStop = false;
			// 
			// pictureBox138
			// 
			this->pictureBox138->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox138.Image")));
			this->pictureBox138->Location = System::Drawing::Point(453, 103);
			this->pictureBox138->Name = L"pictureBox138";
			this->pictureBox138->Size = System::Drawing::Size(44, 44);
			this->pictureBox138->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox138->TabIndex = 29;
			this->pictureBox138->TabStop = false;
			// 
			// pictureBox139
			// 
			this->pictureBox139->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox139.Image")));
			this->pictureBox139->Location = System::Drawing::Point(3, 153);
			this->pictureBox139->Name = L"pictureBox139";
			this->pictureBox139->Size = System::Drawing::Size(44, 44);
			this->pictureBox139->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox139->TabIndex = 30;
			this->pictureBox139->TabStop = false;
			// 
			// pictureBox140
			// 
			this->pictureBox140->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox140.Image")));
			this->pictureBox140->Location = System::Drawing::Point(53, 153);
			this->pictureBox140->Name = L"pictureBox140";
			this->pictureBox140->Size = System::Drawing::Size(44, 44);
			this->pictureBox140->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox140->TabIndex = 31;
			this->pictureBox140->TabStop = false;
			// 
			// pictureBox141
			// 
			this->pictureBox141->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox141.Image")));
			this->pictureBox141->Location = System::Drawing::Point(103, 153);
			this->pictureBox141->Name = L"pictureBox141";
			this->pictureBox141->Size = System::Drawing::Size(44, 44);
			this->pictureBox141->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox141->TabIndex = 32;
			this->pictureBox141->TabStop = false;
			// 
			// pictureBox142
			// 
			this->pictureBox142->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox142.Image")));
			this->pictureBox142->Location = System::Drawing::Point(153, 153);
			this->pictureBox142->Name = L"pictureBox142";
			this->pictureBox142->Size = System::Drawing::Size(44, 44);
			this->pictureBox142->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox142->TabIndex = 33;
			this->pictureBox142->TabStop = false;
			// 
			// pictureBox143
			// 
			this->pictureBox143->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox143.Image")));
			this->pictureBox143->Location = System::Drawing::Point(203, 153);
			this->pictureBox143->Name = L"pictureBox143";
			this->pictureBox143->Size = System::Drawing::Size(44, 44);
			this->pictureBox143->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox143->TabIndex = 34;
			this->pictureBox143->TabStop = false;
			// 
			// pictureBox144
			// 
			this->pictureBox144->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox144.Image")));
			this->pictureBox144->Location = System::Drawing::Point(253, 153);
			this->pictureBox144->Name = L"pictureBox144";
			this->pictureBox144->Size = System::Drawing::Size(44, 44);
			this->pictureBox144->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox144->TabIndex = 35;
			this->pictureBox144->TabStop = false;
			// 
			// pictureBox145
			// 
			this->pictureBox145->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox145.Image")));
			this->pictureBox145->Location = System::Drawing::Point(303, 153);
			this->pictureBox145->Name = L"pictureBox145";
			this->pictureBox145->Size = System::Drawing::Size(44, 44);
			this->pictureBox145->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox145->TabIndex = 36;
			this->pictureBox145->TabStop = false;
			// 
			// pictureBox146
			// 
			this->pictureBox146->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox146.Image")));
			this->pictureBox146->Location = System::Drawing::Point(353, 153);
			this->pictureBox146->Name = L"pictureBox146";
			this->pictureBox146->Size = System::Drawing::Size(44, 44);
			this->pictureBox146->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox146->TabIndex = 37;
			this->pictureBox146->TabStop = false;
			// 
			// pictureBox147
			// 
			this->pictureBox147->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox147.Image")));
			this->pictureBox147->Location = System::Drawing::Point(403, 153);
			this->pictureBox147->Name = L"pictureBox147";
			this->pictureBox147->Size = System::Drawing::Size(44, 44);
			this->pictureBox147->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox147->TabIndex = 38;
			this->pictureBox147->TabStop = false;
			// 
			// pictureBox148
			// 
			this->pictureBox148->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox148.Image")));
			this->pictureBox148->Location = System::Drawing::Point(453, 153);
			this->pictureBox148->Name = L"pictureBox148";
			this->pictureBox148->Size = System::Drawing::Size(44, 44);
			this->pictureBox148->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox148->TabIndex = 39;
			this->pictureBox148->TabStop = false;
			// 
			// pictureBox149
			// 
			this->pictureBox149->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox149.Image")));
			this->pictureBox149->Location = System::Drawing::Point(3, 203);
			this->pictureBox149->Name = L"pictureBox149";
			this->pictureBox149->Size = System::Drawing::Size(44, 44);
			this->pictureBox149->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox149->TabIndex = 40;
			this->pictureBox149->TabStop = false;
			// 
			// pictureBox150
			// 
			this->pictureBox150->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox150.Image")));
			this->pictureBox150->Location = System::Drawing::Point(53, 203);
			this->pictureBox150->Name = L"pictureBox150";
			this->pictureBox150->Size = System::Drawing::Size(44, 44);
			this->pictureBox150->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox150->TabIndex = 41;
			this->pictureBox150->TabStop = false;
			// 
			// pictureBox151
			// 
			this->pictureBox151->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox151.Image")));
			this->pictureBox151->Location = System::Drawing::Point(103, 203);
			this->pictureBox151->Name = L"pictureBox151";
			this->pictureBox151->Size = System::Drawing::Size(44, 44);
			this->pictureBox151->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox151->TabIndex = 42;
			this->pictureBox151->TabStop = false;
			// 
			// pictureBox152
			// 
			this->pictureBox152->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox152.Image")));
			this->pictureBox152->Location = System::Drawing::Point(153, 203);
			this->pictureBox152->Name = L"pictureBox152";
			this->pictureBox152->Size = System::Drawing::Size(44, 44);
			this->pictureBox152->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox152->TabIndex = 43;
			this->pictureBox152->TabStop = false;
			// 
			// pictureBox153
			// 
			this->pictureBox153->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox153.Image")));
			this->pictureBox153->Location = System::Drawing::Point(203, 203);
			this->pictureBox153->Name = L"pictureBox153";
			this->pictureBox153->Size = System::Drawing::Size(44, 44);
			this->pictureBox153->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox153->TabIndex = 44;
			this->pictureBox153->TabStop = false;
			// 
			// pictureBox154
			// 
			this->pictureBox154->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox154.Image")));
			this->pictureBox154->Location = System::Drawing::Point(253, 203);
			this->pictureBox154->Name = L"pictureBox154";
			this->pictureBox154->Size = System::Drawing::Size(44, 44);
			this->pictureBox154->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox154->TabIndex = 45;
			this->pictureBox154->TabStop = false;
			// 
			// pictureBox155
			// 
			this->pictureBox155->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox155.Image")));
			this->pictureBox155->Location = System::Drawing::Point(303, 203);
			this->pictureBox155->Name = L"pictureBox155";
			this->pictureBox155->Size = System::Drawing::Size(44, 44);
			this->pictureBox155->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox155->TabIndex = 46;
			this->pictureBox155->TabStop = false;
			// 
			// pictureBox156
			// 
			this->pictureBox156->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox156.Image")));
			this->pictureBox156->Location = System::Drawing::Point(353, 203);
			this->pictureBox156->Name = L"pictureBox156";
			this->pictureBox156->Size = System::Drawing::Size(44, 44);
			this->pictureBox156->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox156->TabIndex = 47;
			this->pictureBox156->TabStop = false;
			// 
			// pictureBox157
			// 
			this->pictureBox157->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox157.Image")));
			this->pictureBox157->Location = System::Drawing::Point(403, 203);
			this->pictureBox157->Name = L"pictureBox157";
			this->pictureBox157->Size = System::Drawing::Size(44, 44);
			this->pictureBox157->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox157->TabIndex = 48;
			this->pictureBox157->TabStop = false;
			// 
			// pictureBox158
			// 
			this->pictureBox158->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox158.Image")));
			this->pictureBox158->Location = System::Drawing::Point(453, 203);
			this->pictureBox158->Name = L"pictureBox158";
			this->pictureBox158->Size = System::Drawing::Size(44, 44);
			this->pictureBox158->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox158->TabIndex = 49;
			this->pictureBox158->TabStop = false;
			// 
			// pictureBox159
			// 
			this->pictureBox159->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox159.Image")));
			this->pictureBox159->Location = System::Drawing::Point(3, 253);
			this->pictureBox159->Name = L"pictureBox159";
			this->pictureBox159->Size = System::Drawing::Size(44, 44);
			this->pictureBox159->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox159->TabIndex = 50;
			this->pictureBox159->TabStop = false;
			// 
			// pictureBox160
			// 
			this->pictureBox160->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox160.Image")));
			this->pictureBox160->Location = System::Drawing::Point(53, 253);
			this->pictureBox160->Name = L"pictureBox160";
			this->pictureBox160->Size = System::Drawing::Size(44, 44);
			this->pictureBox160->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox160->TabIndex = 51;
			this->pictureBox160->TabStop = false;
			// 
			// pictureBox161
			// 
			this->pictureBox161->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox161.Image")));
			this->pictureBox161->Location = System::Drawing::Point(103, 253);
			this->pictureBox161->Name = L"pictureBox161";
			this->pictureBox161->Size = System::Drawing::Size(44, 44);
			this->pictureBox161->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox161->TabIndex = 52;
			this->pictureBox161->TabStop = false;
			// 
			// pictureBox162
			// 
			this->pictureBox162->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox162.Image")));
			this->pictureBox162->Location = System::Drawing::Point(153, 253);
			this->pictureBox162->Name = L"pictureBox162";
			this->pictureBox162->Size = System::Drawing::Size(44, 44);
			this->pictureBox162->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox162->TabIndex = 53;
			this->pictureBox162->TabStop = false;
			// 
			// pictureBox163
			// 
			this->pictureBox163->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox163.Image")));
			this->pictureBox163->Location = System::Drawing::Point(203, 253);
			this->pictureBox163->Name = L"pictureBox163";
			this->pictureBox163->Size = System::Drawing::Size(44, 44);
			this->pictureBox163->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox163->TabIndex = 54;
			this->pictureBox163->TabStop = false;
			// 
			// pictureBox164
			// 
			this->pictureBox164->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox164.Image")));
			this->pictureBox164->Location = System::Drawing::Point(253, 253);
			this->pictureBox164->Name = L"pictureBox164";
			this->pictureBox164->Size = System::Drawing::Size(44, 44);
			this->pictureBox164->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox164->TabIndex = 55;
			this->pictureBox164->TabStop = false;
			// 
			// pictureBox165
			// 
			this->pictureBox165->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox165.Image")));
			this->pictureBox165->Location = System::Drawing::Point(303, 253);
			this->pictureBox165->Name = L"pictureBox165";
			this->pictureBox165->Size = System::Drawing::Size(44, 44);
			this->pictureBox165->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox165->TabIndex = 56;
			this->pictureBox165->TabStop = false;
			// 
			// pictureBox166
			// 
			this->pictureBox166->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox166.Image")));
			this->pictureBox166->Location = System::Drawing::Point(353, 253);
			this->pictureBox166->Name = L"pictureBox166";
			this->pictureBox166->Size = System::Drawing::Size(44, 44);
			this->pictureBox166->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox166->TabIndex = 57;
			this->pictureBox166->TabStop = false;
			// 
			// pictureBox167
			// 
			this->pictureBox167->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox167.Image")));
			this->pictureBox167->Location = System::Drawing::Point(403, 253);
			this->pictureBox167->Name = L"pictureBox167";
			this->pictureBox167->Size = System::Drawing::Size(44, 44);
			this->pictureBox167->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox167->TabIndex = 58;
			this->pictureBox167->TabStop = false;
			// 
			// pictureBox168
			// 
			this->pictureBox168->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox168.Image")));
			this->pictureBox168->Location = System::Drawing::Point(453, 253);
			this->pictureBox168->Name = L"pictureBox168";
			this->pictureBox168->Size = System::Drawing::Size(44, 44);
			this->pictureBox168->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox168->TabIndex = 59;
			this->pictureBox168->TabStop = false;
			// 
			// pictureBox169
			// 
			this->pictureBox169->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox169.Image")));
			this->pictureBox169->Location = System::Drawing::Point(3, 303);
			this->pictureBox169->Name = L"pictureBox169";
			this->pictureBox169->Size = System::Drawing::Size(44, 44);
			this->pictureBox169->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox169->TabIndex = 60;
			this->pictureBox169->TabStop = false;
			// 
			// pictureBox170
			// 
			this->pictureBox170->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox170.Image")));
			this->pictureBox170->Location = System::Drawing::Point(53, 303);
			this->pictureBox170->Name = L"pictureBox170";
			this->pictureBox170->Size = System::Drawing::Size(44, 44);
			this->pictureBox170->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox170->TabIndex = 61;
			this->pictureBox170->TabStop = false;
			// 
			// pictureBox171
			// 
			this->pictureBox171->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox171.Image")));
			this->pictureBox171->Location = System::Drawing::Point(103, 303);
			this->pictureBox171->Name = L"pictureBox171";
			this->pictureBox171->Size = System::Drawing::Size(44, 44);
			this->pictureBox171->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox171->TabIndex = 62;
			this->pictureBox171->TabStop = false;
			// 
			// pictureBox172
			// 
			this->pictureBox172->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox172->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox172.Image")));
			this->pictureBox172->Location = System::Drawing::Point(153, 303);
			this->pictureBox172->Name = L"pictureBox172";
			this->pictureBox172->Size = System::Drawing::Size(44, 44);
			this->pictureBox172->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox172->TabIndex = 63;
			this->pictureBox172->TabStop = false;
			// 
			// pictureBox173
			// 
			this->pictureBox173->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox173.Image")));
			this->pictureBox173->Location = System::Drawing::Point(203, 303);
			this->pictureBox173->Name = L"pictureBox173";
			this->pictureBox173->Size = System::Drawing::Size(44, 44);
			this->pictureBox173->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox173->TabIndex = 64;
			this->pictureBox173->TabStop = false;
			// 
			// pictureBox174
			// 
			this->pictureBox174->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox174.Image")));
			this->pictureBox174->Location = System::Drawing::Point(253, 303);
			this->pictureBox174->Name = L"pictureBox174";
			this->pictureBox174->Size = System::Drawing::Size(44, 44);
			this->pictureBox174->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox174->TabIndex = 65;
			this->pictureBox174->TabStop = false;
			// 
			// pictureBox175
			// 
			this->pictureBox175->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox175.Image")));
			this->pictureBox175->Location = System::Drawing::Point(303, 303);
			this->pictureBox175->Name = L"pictureBox175";
			this->pictureBox175->Size = System::Drawing::Size(44, 44);
			this->pictureBox175->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox175->TabIndex = 66;
			this->pictureBox175->TabStop = false;
			// 
			// pictureBox176
			// 
			this->pictureBox176->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox176.Image")));
			this->pictureBox176->Location = System::Drawing::Point(353, 303);
			this->pictureBox176->Name = L"pictureBox176";
			this->pictureBox176->Size = System::Drawing::Size(44, 44);
			this->pictureBox176->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox176->TabIndex = 67;
			this->pictureBox176->TabStop = false;
			// 
			// pictureBox177
			// 
			this->pictureBox177->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox177.Image")));
			this->pictureBox177->Location = System::Drawing::Point(403, 303);
			this->pictureBox177->Name = L"pictureBox177";
			this->pictureBox177->Size = System::Drawing::Size(44, 44);
			this->pictureBox177->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox177->TabIndex = 68;
			this->pictureBox177->TabStop = false;
			// 
			// pictureBox178
			// 
			this->pictureBox178->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox178.Image")));
			this->pictureBox178->Location = System::Drawing::Point(453, 303);
			this->pictureBox178->Name = L"pictureBox178";
			this->pictureBox178->Size = System::Drawing::Size(44, 44);
			this->pictureBox178->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox178->TabIndex = 69;
			this->pictureBox178->TabStop = false;
			// 
			// pictureBox179
			// 
			this->pictureBox179->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox179.Image")));
			this->pictureBox179->Location = System::Drawing::Point(3, 353);
			this->pictureBox179->Name = L"pictureBox179";
			this->pictureBox179->Size = System::Drawing::Size(44, 44);
			this->pictureBox179->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox179->TabIndex = 70;
			this->pictureBox179->TabStop = false;
			// 
			// pictureBox180
			// 
			this->pictureBox180->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox180.Image")));
			this->pictureBox180->Location = System::Drawing::Point(53, 353);
			this->pictureBox180->Name = L"pictureBox180";
			this->pictureBox180->Size = System::Drawing::Size(44, 44);
			this->pictureBox180->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox180->TabIndex = 71;
			this->pictureBox180->TabStop = false;
			// 
			// pictureBox181
			// 
			this->pictureBox181->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox181.Image")));
			this->pictureBox181->Location = System::Drawing::Point(103, 353);
			this->pictureBox181->Name = L"pictureBox181";
			this->pictureBox181->Size = System::Drawing::Size(44, 44);
			this->pictureBox181->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox181->TabIndex = 72;
			this->pictureBox181->TabStop = false;
			// 
			// pictureBox182
			// 
			this->pictureBox182->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox182.Image")));
			this->pictureBox182->Location = System::Drawing::Point(153, 353);
			this->pictureBox182->Name = L"pictureBox182";
			this->pictureBox182->Size = System::Drawing::Size(44, 44);
			this->pictureBox182->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox182->TabIndex = 73;
			this->pictureBox182->TabStop = false;
			// 
			// pictureBox183
			// 
			this->pictureBox183->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox183.Image")));
			this->pictureBox183->Location = System::Drawing::Point(203, 353);
			this->pictureBox183->Name = L"pictureBox183";
			this->pictureBox183->Size = System::Drawing::Size(44, 44);
			this->pictureBox183->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox183->TabIndex = 74;
			this->pictureBox183->TabStop = false;
			// 
			// pictureBox184
			// 
			this->pictureBox184->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox184.Image")));
			this->pictureBox184->Location = System::Drawing::Point(253, 353);
			this->pictureBox184->Name = L"pictureBox184";
			this->pictureBox184->Size = System::Drawing::Size(44, 44);
			this->pictureBox184->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox184->TabIndex = 75;
			this->pictureBox184->TabStop = false;
			// 
			// pictureBox185
			// 
			this->pictureBox185->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox185.Image")));
			this->pictureBox185->Location = System::Drawing::Point(303, 353);
			this->pictureBox185->Name = L"pictureBox185";
			this->pictureBox185->Size = System::Drawing::Size(44, 44);
			this->pictureBox185->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox185->TabIndex = 76;
			this->pictureBox185->TabStop = false;
			// 
			// pictureBox186
			// 
			this->pictureBox186->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox186.Image")));
			this->pictureBox186->Location = System::Drawing::Point(353, 353);
			this->pictureBox186->Name = L"pictureBox186";
			this->pictureBox186->Size = System::Drawing::Size(44, 44);
			this->pictureBox186->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox186->TabIndex = 77;
			this->pictureBox186->TabStop = false;
			// 
			// pictureBox187
			// 
			this->pictureBox187->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox187.Image")));
			this->pictureBox187->Location = System::Drawing::Point(403, 353);
			this->pictureBox187->Name = L"pictureBox187";
			this->pictureBox187->Size = System::Drawing::Size(44, 44);
			this->pictureBox187->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox187->TabIndex = 78;
			this->pictureBox187->TabStop = false;
			// 
			// pictureBox188
			// 
			this->pictureBox188->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox188->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox188.Image")));
			this->pictureBox188->Location = System::Drawing::Point(453, 353);
			this->pictureBox188->Name = L"pictureBox188";
			this->pictureBox188->Size = System::Drawing::Size(44, 44);
			this->pictureBox188->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox188->TabIndex = 79;
			this->pictureBox188->TabStop = false;
			// 
			// pictureBox189
			// 
			this->pictureBox189->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox189.Image")));
			this->pictureBox189->Location = System::Drawing::Point(3, 403);
			this->pictureBox189->Name = L"pictureBox189";
			this->pictureBox189->Size = System::Drawing::Size(44, 44);
			this->pictureBox189->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox189->TabIndex = 80;
			this->pictureBox189->TabStop = false;
			// 
			// pictureBox190
			// 
			this->pictureBox190->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox190.Image")));
			this->pictureBox190->Location = System::Drawing::Point(53, 403);
			this->pictureBox190->Name = L"pictureBox190";
			this->pictureBox190->Size = System::Drawing::Size(44, 44);
			this->pictureBox190->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox190->TabIndex = 81;
			this->pictureBox190->TabStop = false;
			// 
			// pictureBox191
			// 
			this->pictureBox191->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox191.Image")));
			this->pictureBox191->Location = System::Drawing::Point(103, 403);
			this->pictureBox191->Name = L"pictureBox191";
			this->pictureBox191->Size = System::Drawing::Size(44, 44);
			this->pictureBox191->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox191->TabIndex = 82;
			this->pictureBox191->TabStop = false;
			// 
			// pictureBox192
			// 
			this->pictureBox192->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox192.Image")));
			this->pictureBox192->Location = System::Drawing::Point(153, 403);
			this->pictureBox192->Name = L"pictureBox192";
			this->pictureBox192->Size = System::Drawing::Size(44, 44);
			this->pictureBox192->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox192->TabIndex = 83;
			this->pictureBox192->TabStop = false;
			// 
			// pictureBox193
			// 
			this->pictureBox193->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox193->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox193.Image")));
			this->pictureBox193->Location = System::Drawing::Point(203, 403);
			this->pictureBox193->Name = L"pictureBox193";
			this->pictureBox193->Size = System::Drawing::Size(44, 44);
			this->pictureBox193->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox193->TabIndex = 84;
			this->pictureBox193->TabStop = false;
			// 
			// pictureBox194
			// 
			this->pictureBox194->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox194.Image")));
			this->pictureBox194->Location = System::Drawing::Point(253, 403);
			this->pictureBox194->Name = L"pictureBox194";
			this->pictureBox194->Size = System::Drawing::Size(44, 44);
			this->pictureBox194->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox194->TabIndex = 85;
			this->pictureBox194->TabStop = false;
			// 
			// pictureBox195
			// 
			this->pictureBox195->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox195.Image")));
			this->pictureBox195->Location = System::Drawing::Point(303, 403);
			this->pictureBox195->Name = L"pictureBox195";
			this->pictureBox195->Size = System::Drawing::Size(44, 44);
			this->pictureBox195->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox195->TabIndex = 86;
			this->pictureBox195->TabStop = false;
			// 
			// pictureBox196
			// 
			this->pictureBox196->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox196.Image")));
			this->pictureBox196->Location = System::Drawing::Point(353, 403);
			this->pictureBox196->Name = L"pictureBox196";
			this->pictureBox196->Size = System::Drawing::Size(44, 44);
			this->pictureBox196->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox196->TabIndex = 87;
			this->pictureBox196->TabStop = false;
			// 
			// pictureBox197
			// 
			this->pictureBox197->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox197.Image")));
			this->pictureBox197->Location = System::Drawing::Point(403, 403);
			this->pictureBox197->Name = L"pictureBox197";
			this->pictureBox197->Size = System::Drawing::Size(44, 44);
			this->pictureBox197->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox197->TabIndex = 88;
			this->pictureBox197->TabStop = false;
			// 
			// pictureBox198
			// 
			this->pictureBox198->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox198.Image")));
			this->pictureBox198->Location = System::Drawing::Point(453, 403);
			this->pictureBox198->Name = L"pictureBox198";
			this->pictureBox198->Size = System::Drawing::Size(44, 44);
			this->pictureBox198->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox198->TabIndex = 89;
			this->pictureBox198->TabStop = false;
			// 
			// pictureBox199
			// 
			this->pictureBox199->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox199.Image")));
			this->pictureBox199->Location = System::Drawing::Point(3, 453);
			this->pictureBox199->Name = L"pictureBox199";
			this->pictureBox199->Size = System::Drawing::Size(44, 44);
			this->pictureBox199->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox199->TabIndex = 90;
			this->pictureBox199->TabStop = false;
			// 
			// pictureBox200
			// 
			this->pictureBox200->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox200.Image")));
			this->pictureBox200->Location = System::Drawing::Point(53, 453);
			this->pictureBox200->Name = L"pictureBox200";
			this->pictureBox200->Size = System::Drawing::Size(44, 44);
			this->pictureBox200->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox200->TabIndex = 91;
			this->pictureBox200->TabStop = false;
			// 
			// pictureBox201
			// 
			this->pictureBox201->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox201.Image")));
			this->pictureBox201->Location = System::Drawing::Point(103, 453);
			this->pictureBox201->Name = L"pictureBox201";
			this->pictureBox201->Size = System::Drawing::Size(44, 44);
			this->pictureBox201->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox201->TabIndex = 92;
			this->pictureBox201->TabStop = false;
			// 
			// pictureBox202
			// 
			this->pictureBox202->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox202.Image")));
			this->pictureBox202->Location = System::Drawing::Point(153, 453);
			this->pictureBox202->Name = L"pictureBox202";
			this->pictureBox202->Size = System::Drawing::Size(44, 44);
			this->pictureBox202->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox202->TabIndex = 93;
			this->pictureBox202->TabStop = false;
			// 
			// pictureBox203
			// 
			this->pictureBox203->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox203.Image")));
			this->pictureBox203->Location = System::Drawing::Point(203, 453);
			this->pictureBox203->Name = L"pictureBox203";
			this->pictureBox203->Size = System::Drawing::Size(44, 44);
			this->pictureBox203->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox203->TabIndex = 94;
			this->pictureBox203->TabStop = false;
			// 
			// pictureBox204
			// 
			this->pictureBox204->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox204.Image")));
			this->pictureBox204->Location = System::Drawing::Point(253, 453);
			this->pictureBox204->Name = L"pictureBox204";
			this->pictureBox204->Size = System::Drawing::Size(44, 44);
			this->pictureBox204->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox204->TabIndex = 95;
			this->pictureBox204->TabStop = false;
			// 
			// pictureBox205
			// 
			this->pictureBox205->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox205.Image")));
			this->pictureBox205->Location = System::Drawing::Point(303, 453);
			this->pictureBox205->Name = L"pictureBox205";
			this->pictureBox205->Size = System::Drawing::Size(44, 44);
			this->pictureBox205->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox205->TabIndex = 96;
			this->pictureBox205->TabStop = false;
			// 
			// pictureBox206
			// 
			this->pictureBox206->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox206.Image")));
			this->pictureBox206->Location = System::Drawing::Point(353, 453);
			this->pictureBox206->Name = L"pictureBox206";
			this->pictureBox206->Size = System::Drawing::Size(44, 44);
			this->pictureBox206->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox206->TabIndex = 97;
			this->pictureBox206->TabStop = false;
			// 
			// pictureBox207
			// 
			this->pictureBox207->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox207.Image")));
			this->pictureBox207->Location = System::Drawing::Point(403, 453);
			this->pictureBox207->Name = L"pictureBox207";
			this->pictureBox207->Size = System::Drawing::Size(44, 44);
			this->pictureBox207->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox207->TabIndex = 98;
			this->pictureBox207->TabStop = false;
			// 
			// pictureBox208
			// 
			this->pictureBox208->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox208.Image")));
			this->pictureBox208->Location = System::Drawing::Point(453, 453);
			this->pictureBox208->Name = L"pictureBox208";
			this->pictureBox208->Size = System::Drawing::Size(44, 44);
			this->pictureBox208->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox208->TabIndex = 99;
			this->pictureBox208->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(25, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"PC";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(650, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"VOC� ";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->ImageKey = L"(none)";
			this->label3->Location = System::Drawing::Point(41, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(501, 23);
			this->label3->TabIndex = 13;
			this->label3->Text = L" A     B     C    D     E     F     G     H     I     J\r\n\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->ImageKey = L"(none)";
			this->label4->Location = System::Drawing::Point(648, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(501, 23);
			this->label4->TabIndex = 14;
			this->label4->Text = L" A     B     C    D     E     F     G     H     I     J\r\n\r\n";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(616, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 475);
			this->label5->TabIndex = 15;
			this->label5->Text = L"1\r\n\r\n2\r\n\r\n3\r\n\r\n4\r\n\r\n5\r\n\r\n6\r\n\r\n7\r\n\r\n8\r\n\r\n9\r\n\r\n10";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(4, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 475);
			this->label6->TabIndex = 16;
			this->label6->Text = L"1\r\n\r\n2\r\n\r\n3\r\n\r\n4\r\n\r\n5\r\n\r\n6\r\n\r\n7\r\n\r\n8\r\n\r\n9\r\n\r\n10";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1770, 1316);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 33;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(661, 569);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// TelaJogo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1192, 701);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TelaJogo";
			this->Click += gcnew System::EventHandler(this, &TelaJogo::pictureBox4_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox102))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox103))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox104))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox105))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox106))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox107))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox108))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel2->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox109))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox110))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox111))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox112))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox113))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox114))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox115))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox116))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox117))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox118))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox119))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox120))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox121))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox122))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox123))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox124))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox125))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox126))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox127))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox128))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox129))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox130))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox131))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox132))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox133))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox134))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox135))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox136))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox137))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox138))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox139))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox140))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox141))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox142))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox143))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox144))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox145))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox146))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox147))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox148))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox149))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox150))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox151))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox152))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox153))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox154))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox155))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox156))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox157))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox158))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox159))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox160))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox161))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox162))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox163))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox164))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox165))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox166))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox167))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox168))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox169))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox170))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox171))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox172))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox173))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox174))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox175))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox176))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox177))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox178))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox179))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox180))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox181))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox182))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox183))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox184))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox185))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox186))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox187))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox188))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox189))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox190))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox191))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox192))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox193))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox194))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox195))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox196))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox197))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox198))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox199))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox200))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox201))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox202))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox203))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox204))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox205))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox206))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox207))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox208))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (tableLayoutPanel2->GetCellPosition == 5){
		tableLayoutPanel1->Visible = false;
	}

}
};
}