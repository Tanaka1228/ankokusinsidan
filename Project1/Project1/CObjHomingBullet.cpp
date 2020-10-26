//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"CObjBulletEnemy.h"
#include"UtilityModule.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjHomingBullet::CObjHomingBullet(float x, float y)//�R���X�g���N�^�Ŏ󂯎��������ϐ��ɑ���
{
	m_x = x;
	m_y = y;

}

//�C�j�V�����C�Y
void CObjHomingBullet::Init()
{
	m_vx = -1.0f;
	m_vy = 0.0f;

	//�����蔻��pHitBox���쐬
	Hits::SetHitBox(this, m_x, m_y, 30, 20, ELEMENT_ENEMY, OBJ_HOMING_BULLET, 1);
}

//�A�N�V����
void CObjHomingBullet::Action()
{

	//��l���@�ƗU���e�ۂŊp�x���Ƃ�
	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float x = obj->GetX() - m_x;
	float y = obj->GetY() - m_y;
	float ar = atan2(-y, x) * 180.0f / 3.14f;
	if (ar < 0)
	{
		ar = 360 - abs(ar);
	}


	//�e�ۂ̌��݂̌����Ă���p�x�����
	float br = atan2(-m_vy, m_vx) * 180.0f / 3.14f;
	if (br < 0)
	{
		br = 360 - abs(br);
	}

	float r = 3.14 / 180.0f;//�p�x�P��
	if (ar < br)
	{
		//�ړ������Ɂ{�P��������
		m_vx = m_vx * cos(r) - m_vx * sin(r);
		m_vy = m_vy * cos(r) + m_vy * sin(r);
	}
	else
	{
	    //�ړ�������-�P��������
		m_vx = m_vx * cos(-r) - m_vx * sin(-r);
		m_vy = m_vy * cos(-r) + m_vy * sin(-r);
	}
	UnitVec(&m_vx, &m_vy);

	//�ړ�
	m_x += m_vx * 5.0f;
	m_y += m_vy * 5.0f;


	//�G�@�e�ۂ�HitBox�X�V�p�|�C���^�[�擾
	CHitBox* hit = Hits::GetHitBox(this); //HitBox�̈ʒu��e�ۂ̈ʒu�ɍX�V
	hit->SetPos(m_x, m_y);


	//�G�@�����S�ɗ̈�O�ɏo����G�@��j������
	bool check = CheckWindow(m_x, m_y, -32.0f, -32.0f, 800.0f, 600.0f);
	if (check == false)
	{
		this->SetStatus(false);//���g�ɍ폜����
		Hits::DeleteHitBox(this);
	}

	//�G�@�I�u�W�F�N�g�ƐڐG������e�ۍ폜
	if (hit->CheckObjNameHit(OBJ_HERO) != nullptr)
	{
		this->SetStatus(false);   //���g�ɍ폜���߂��o���B
		Hits::DeleteHitBox(this); //�e�ۂ����L����HitBox�ɍ폜����B
	}
}

//�h���[
void CObjHomingBullet::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�@
	//�e�ۂ��������ɂ��Ă���
	src.m_top = 0.0f;   //y
	src.m_left = 126.0f;  //x
	src.m_right = 96.0f; //x 
	src.m_bottom = 32.0f; //y

	//�\���ʒu�̐ݒ�
	dst.m_top = -10.0f + m_y;//�c�̈ʒu�ύX
	dst.m_left = -5.0f + m_x;
	dst.m_right = 45.0f + m_x;
	dst.m_bottom = 32.0f + m_y;

	Draw::Draw(3, &src, &dst, c, 0.0f);
}