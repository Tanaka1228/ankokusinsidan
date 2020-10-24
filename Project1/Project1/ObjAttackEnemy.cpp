//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"

#include"GameHead.h"
#include"ObjAttackEnemy.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjAttackEnemy::CObjAttackEnemy(float x, float y)
{
	m_x = x;
	m_y = y;
}

//�C�j�V�����C�Y
void CObjAttackEnemy::Init()
{
	
	m_vx = 0.0f;
	m_vy = 0.0f;
	m_time = 0.0f;

	//�����蔻��pHitBox���쐬
	Hits::SetHitBox(this, m_x, m_y, 82, 82, ELEMENT_ENEMY, OBJ_ATTACK_ENEMY, 1);
}

//�A�N�V����
void CObjAttackEnemy::Action()
{

	m_time++;//1���Z

	if (m_time > 30)//�e�ۂ𔭎˂���Ԋu
	{
		m_time = 0;

		//�e�ۓG�@�I�u�W�F�N�g
		CObjBulletEnemy* obj_bullte_enemy = new CObjBulletEnemy(m_x,m_y);
		Objs::InsertObj(obj_bullte_enemy, OBJ_BULLET_ENEMY, 1);
	}



	//HitBox�̓��e���X�V
	CHitBox* hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	//�e�ۂƐڐG���Ă邩�ǂ������ׂ�
	if (hit->CheckObjNameHit(OBJ_BULLET) != nullptr)
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);
	}
}

//�h���[
void CObjAttackEnemy::Draw()
{
	//�`��J���[���@R=RED G=Green B=Blue A=alpha(���ߏ��)
	float c[4] = { 0.5f,2.5f,1.5f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f; //y
	src.m_left = 0.0f; //x
	src.m_right = 139.0f; //x
	src.m_bottom = 131.0f; //y

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f + m_y;
	dst.m_left = 32.0f + 50.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 32.0f + 50.0f + m_y; 

	//0�Ԗڂɓo�^�����O���t�B�b�N��stc�Edst�Ec�̏������ɕ`��
	Draw::Draw(1, &src, &dst, c, 0.0f);
}