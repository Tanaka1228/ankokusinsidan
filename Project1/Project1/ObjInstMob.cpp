//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjInstMob.h"
#include"UtilityModule.h"
#include<fstream>


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjInstMob::CObjInstMob()
{
	//Heroine�̃w�b�_�[��������킩��
	m_sp = false;
	key_flag = 1;
	sp_flag = false;
	m_key_control = true;
	mob_flag = 0;
}


//�C�j�V�����C�Y
void CObjInstMob::Init()
{

}

//�A�N�V����
void CObjInstMob::Action()
{
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjInstitute* inst = (CObjInstitute*)Objs::GetObj(OBJ_INSTITUTE);//������1�K
	CObjInstitute13* inst13 = (CObjInstitute13*)Objs::GetObj(OBJ_INSTITUTE13);//�������n��2�K


	//------------------������1�K�̉�b�t���O-----------------------
	if (inst != nullptr)
	{
		if (hero->GetBT() == 73)//���̐����ɂ͌������Őݒ肵�����u�̔ԍ���
		{
			mob_flag = 1;//���u��̖ڂ̃t���O
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

		//-------------2�̖ڂ̃��u�t���O--------------------------------------
		//if (hero->GetBT() == 37)
		//{
		//	mob_flag = 2;//���u2�̖ڂ̃t���O
		//	if (Input::GetVKey(VK_RETURN) == true) {

		//		if (m_key_control == true)
		//		{
		//			if (key_flag == 1)
		//			{
		//				m_sp = 1;

		//			}

		//			if (key_flag == 2)
		//			{
		//				m_sp = 2;

		//			}
		//			if ((key_flag == 3))
		//			{

		//				m_sp = 3;

		//			}
		//			if ((key_flag == 4))
		//			{
		//				m_sp = 4;

		//			}
		//			if ((key_flag == 5))
		//			{
		//				m_sp = 5;

		//			}
		//			if ((key_flag == 6))
		//			{
		//				m_sp = 6;

		//			}
		//			m_key_control = false;
		//		}

		//	}
		//	else
		//	{
		//		m_key_control = true;

		//	}
		//}
	}
	//----------------------------------------------------------------





	//----------�n��2�K�̉�b�t���O----------------------------------
	if (inst13 != nullptr)
	{
		if (hero->GetBT() == 70)//��l��������(�u���b�N)�ɐG��Ă����
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

		
	}
	//---------------------------------------------------------------

}

//�h���[
void CObjInstMob::Draw()
{
	////�`��J���[���@R=RED G=Green B=Blue A=alpha(���ߏ��)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjInstitute* inst = (CObjInstitute*)Objs::GetObj(OBJ_INSTITUTE);//������1�K
	CObjInstitute13* inst13 = (CObjInstitute13*)Objs::GetObj(OBJ_INSTITUTE13);//�������n��2�K

	//------�G�����́u�Z�v��t���Ă��܂�----------------------------------------------------


	//------------�n��1�K�̈�̖�----------------------------------------------------------------------------
	if (inst != nullptr && mob_flag == 1)
	{
		if (m_sp == 1)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�������̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���------------------�Z
			char str1[100];//�����̔z��----------�������������Ȃ�����v�f����ς��Ă悢
			wchar_t wstr1[100];
			fin.seekg(0, ios::cur);//0�o�C�g���i�߂�-----------�Z------------------
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 100, wstr1, 100);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 470, 30, c);// X  Y  �傫��     ---------------�Z-------------------


			key_flag = 2;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 1)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�������̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(50, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 250.0f, 500, 30, c);// X  Y  �傫��     


			key_flag = 2;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 2)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�������̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(70, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 470, 30, c);// X  Y  �傫��     


			key_flag = 3;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 3)
		{
			Font::StrDraw(L"", 200.0f, 530, 25, c);// X  Y  �傫��    
			key_flag = 1;
		}
	}
	//----------------2�̖ڂ̉�b-----------------------------------------------------------------------
	//if (inst != nullptr && mob_flag == 2)
	//{
	//	if (m_sp == 1)//�G���^�[�L�[����񉟂����Ƃ�
	//	{
	//		sp_flag == true;

	//		ifstream fin("�������̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
	//		char str1[64];//�����̔z��
	//		wchar_t wstr1[64];
	//		fin.seekg(162, ios::cur);//0�o�C�g���i�߂�
	//		fin >> str1;//str1�Ƀe�L�X�g������

	//		sprintf_s(str1, "%s", str1);//�o��
	//		MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
	//		Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  �傫��     


	//		key_flag = 2;
	//		fin.close();//�t�@�C�������
	//	}
	//	if (m_sp == 2)//�G���^�[�L�[����񉟂����Ƃ�
	//	{
	//		sp_flag == true;

	//		ifstream fin("�������̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
	//		char str1[64];//�����̔z��
	//		wchar_t wstr1[64];
	//		fin.seekg(222, ios::cur);//0�o�C�g���i�߂�
	//		fin >> str1;//str1�Ƀe�L�X�g������

	//		sprintf_s(str1, "%s", str1);//�o��
	//		MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
	//		Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  �傫��     


	//		key_flag = 3;
	//		fin.close();//�t�@�C�������
	//	}
	//	if (m_sp == 3)//�G���^�[�L�[����񉟂����Ƃ�
	//	{
	//		sp_flag == true;

	//		ifstream fin("�������̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
	//		char str1[100];//�����̔z��
	//		wchar_t wstr1[100];
	//		fin.seekg(260, ios::cur);//0�o�C�g���i�߂�
	//		fin >> str1;//str1�Ƀe�L�X�g������

	//		sprintf_s(str1, "%s", str1);//�o��
	//		MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 100, wstr1, 100);//���������j�R�[�h�ɕϊ�����
	//		Font::StrDraw(wstr1, 40.0f, 500, 22, c);// X  Y  �傫��     


	//		key_flag = 4;
	//		fin.close();//�t�@�C�������
	//	}
	//	if (m_sp == 4)
	//	{
	//		Font::StrDraw(L"", 200.0f, 530, 25, c);// X  Y  �傫��    
	//		key_flag = 1;
	//	}
	//}

	//------�n��2�K--------------------------------------------------------------------------------------------------
	if (inst13 != nullptr && mob_flag == 1)
	{
		if (m_sp == 1)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�������̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(118, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 40.0f, 500, 30, c);// X  Y  �傫��     


			key_flag = 2;
			fin.close();//�t�@�C�������
		}
		if (m_sp == 2)//�G���^�[�L�[����񉟂����Ƃ�
		{
			sp_flag == true;

			ifstream fin("�������̉�b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
			char str1[64];//�����̔z��
			wchar_t wstr1[64];
			fin.seekg(170, ios::cur);//0�o�C�g���i�߂�
			fin >> str1;//str1�Ƀe�L�X�g������

			sprintf_s(str1, "%s", str1);//�o��
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
			Font::StrDraw(wstr1, 50.0f, 500, 30, c);// X  Y  �傫��     


			key_flag = 3;
			fin.close();//�t�@�C�������
		}
	
		if (m_sp == 3)//�G���^�[�L�[����񉟂����Ƃ�
		{
			
			Font::StrDraw(L"", 50.0f, 500, 25, c);// X  Y  �傫��     

			key_flag = 1;
		}
	}
	//----------------------------------------------------------------------------------------
}