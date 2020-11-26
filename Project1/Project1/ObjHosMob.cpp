

//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjHosMob.h"
#include"UtilityModule.h"
#include<fstream>


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjHosMob::CObjHosMob()
{
	//Heroine�̃w�b�_�[��������킩��
	m_sp = false;
	key_flag = 1;
	sp_flag = false;
	m_key_control = true;
	mob_flag = 0;
}


//�C�j�V�����C�Y
void CObjHosMob::Init()
{

}

//�A�N�V����
void CObjHosMob::Action()
{
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjHospital* hospital = (CObjHospital*)Objs::GetObj(OBJ_HOSPITAL);//�a�@�̈�K
	CObjHospital2* hospital2 = (CObjHospital2*)Objs::GetObj(OBJ_HOSPITAL2);//�a�@�̓�K

	if (hospital != nullptr)
	{
		if (hero->GetBT() == 36)
		{
			mob_flag = 1;
			if (Input::GetVKey(VK_RETURN) == true) {

				if (m_key_control == true)
				{
					if (key_flag == 1)
					{
						m_sp = 1;

					}

					if (key_flag == 2)
					{
						m_sp = 2;

					}
					if ((key_flag == 3))
					{

						m_sp = 3;

					}
					if ((key_flag == 4))
					{
						m_sp = 4;

					}
					if ((key_flag == 5))
					{
						m_sp = 5;

					}
					if ((key_flag == 6))
					{
						m_sp = 6;

					}
					m_key_control = false;
				}

			}
			else
			{
				m_key_control = true;

			}
		}
		if (hero->GetBT() == 37)
		{
			mob_flag = 2;
			if (Input::GetVKey(VK_RETURN) == true) {

				if (m_key_control == true)
				{
					if (key_flag == 1)
					{
						m_sp = 1;

					}

					if (key_flag == 2)
					{
						m_sp = 2;

					}
					if ((key_flag == 3))
					{

						m_sp = 3;

					}
					if ((key_flag == 4))
					{
						m_sp = 4;

					}
					if ((key_flag == 5))
					{
						m_sp = 5;

					}
					if ((key_flag == 6))
					{
						m_sp = 6;

					}
					m_key_control = false;
				}

			}
			else
			{
				m_key_control = true;

			}
		}
	}







	if (hospital2 != nullptr)
	{
		if (hero->GetBT() == 99)
		{
			if (Input::GetVKey(VK_RETURN) == true) {

				if (m_key_control == true)
				{
					if (key_flag == 1)
					{
						m_sp = 1;

					}

					if (key_flag == 2)
					{
						m_sp = 2;

					}
					if ((key_flag == 3))
					{

						m_sp = 3;

					}
					if ((key_flag == 4))
					{
						m_sp = 4;

					}
					if ((key_flag == 5))
					{
						m_sp = 5;

					}
					if ((key_flag == 6))
					{
						m_sp = 6;

					}
					m_key_control = false;
				}

			}
			else
			{
				m_key_control = true;
			}
		}
		if (hero->GetBT() == 9)
		{
			if (Input::GetVKey(VK_RETURN) == true) {

				if (m_key_control == true)
				{
					if (key_flag == 1)
					{
						m_sp = 1;

					}

					if (key_flag == 2)
					{
						m_sp = 2;

					}
					if ((key_flag == 3))
					{

						m_sp = 3;

					}
					if ((key_flag == 4))
					{
						m_sp = 4;

					}
					if ((key_flag == 5))
					{
						m_sp = 5;

					}
					if ((key_flag == 6))
					{
						m_sp = 6;

					}
					m_key_control = false;
				}

			}
			else
			{
				m_key_control = true;
			}
		}
	}


}

//�h���[
void CObjHosMob::Draw()
{
	////�`��J���[���@R=RED G=Green B=Blue A=alpha(���ߏ��)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjHospital* hospital = (CObjHospital*)Objs::GetObj(OBJ_HOSPITAL);//�a�@�̈�K
	CObjHospital2* hospital2 = (CObjHospital2*)Objs::GetObj(OBJ_HOSPITAL2);//�a�@�̓�K

	if (hospital != nullptr && mob_flag == 1)
	{
		if (m_sp == 1)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�a�@1�K.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(24, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 500, 30, c);// X  Y  �傫��     


			key_flag = 2;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 2)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�a�@1�K.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(74, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  �傫��     


			key_flag = 3;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 2)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�a�@1�K.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(130, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 200.0f, 530, 25, c);// X  Y  �傫��     


			key_flag = 3;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 3)
		{
			Font::StrDraw(L"", 200.0f, 530, 25, c);// X  Y  �傫��    
			key_flag = 1;
		}
	}
	if (hospital != nullptr && mob_flag == 2)
	{
		if (m_sp == 1)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�a�@1�K.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(162, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  �傫��     


			key_flag = 2;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 2)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�a�@1�K.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(222, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  �傫��     


			key_flag = 3;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 3)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�a�@1�K.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[100];//�����̔z��
			wchar_t wstr1[100];
			fin.seekg(260, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 100, wstr1, 100);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 40.0f, 500, 22, c);// X  Y  �傫��     


			key_flag = 4;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 4)
		{
			Font::StrDraw(L"", 200.0f, 530, 25, c);// X  Y  �傫��    
			key_flag = 1;
		}
	}


	if (hospital2 != nullptr)
	{
		if (m_sp == 1)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�`���C�i�^�E���{�X��t�B�[���h�̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(0, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 500, 30, c);// X  Y  �傫��     


			key_flag = 2;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 2)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�`���C�i�^�E���{�X��t�B�[���h�̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(18, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  �傫��     


			key_flag = 3;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 2)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�`���C�i�^�E���{�X��t�B�[���h�̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(66, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 530, 25, c);// X  Y  �傫��     


			key_flag = 3;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 3)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�`���C�i�^�E���{�X��t�B�[���h�̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(110, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  �傫��     



			fin.close();//�t�@�C�������
		}
		if (m_sp == 4)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�`���C�i�^�E���{�X��t�B�[���h�̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(158, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  �傫��     



			fin.close();//�t�@�C�������
		}
	}
}
