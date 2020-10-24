//�g�p����w�b�_�\�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"

#include"GameHead.h"
#include"ObjTitle.h"
#include"SceneMain.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjTitle::Init()
{
	bool m_key_flag = false;
	 m_mou_x = 0.0f;
	 m_mou_y = 0.0f;
	 m_mou_r = false;
	 m_mou_l = false;
}

//�A�N�V����
void CObjTitle::Action()
{
	//�}�E�X�̈ʒu�擾
	 m_mou_x = (float)Input::GetPosX();
	 m_mou_y = (float)Input::GetPosY();
	 //�}�E�X�̃{�^���̏��
	 m_mou_r = Input::GetMouButtonR();
	 m_mou_l = Input::GetMouButtonL();

	 //�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	 if (m_mou_x > 250 && m_mou_x < 500 && m_mou_y>340 && m_mou_y < 370)
	 {
		 //�}�E�X�{�^���������ꂽ�烁�C���Ɋ҈�
		 if (m_mou_r == true || m_mou_l == true)
		 {
			 Scene::SetScene(new CSceneMain());
		 }
	 }


	//�G���^�[�L�[�������ăV�[���F�Q�[��Title�Ɉڍs����
	if (Input::GetVKey(VK_RETURN) == true)
	{
		if (m_key_flag == true)
		{
			Scene::SetScene(new CSceneMain());
			m_key_flag = false;
		}

	}
	else
	{
		m_key_flag = true;
	}
}

//�h���[
void CObjTitle::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f, };


	//�^�C�g�����̕\��
	Font::StrDraw(L"ARTIFICIAL HUMAN ", 270, 100, 32, c);
	Font::StrDraw(L" �`���l���E�̗��`", 250, 150, 32, c);

	//�J�[�\���I���ʒu
	//main�Ɉڍs
	Font::StrDraw(L"��  �j���[�Q�[��", 250, 350, 32, c);

	//���[�h��ʂɈڍs
	Font::StrDraw(L"��     ���[�h    ", 250, 400, 32, c);

	//�ݒ��ʂɈڍs
	Font::StrDraw(L"��      �ݒ�     ", 250, 450, 32, c);

	//�V���b�g�_�E��
	Font::StrDraw(L"�� �V���b�g�_�E��", 250, 500, 32, c);

	//���}�E�X�ʒu�\��
	wchar_t str[256];
	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);

	//���}�E�X�̃{�^���̏��
	if(m_mou_r == true)
		Font::StrDraw(L"R=�����Ă���", 20, 30, 12, c);
	else
		Font::StrDraw(L"R=�����Ă��Ȃ�", 20, 30, 12, c);
	if(m_mou_l == true)
		Font::StrDraw(L"L=�����Ă���", 20, 40, 12, c);
	else
		Font::StrDraw(L"L=�����Ă��Ȃ�", 20, 40, 12, c);
	
}