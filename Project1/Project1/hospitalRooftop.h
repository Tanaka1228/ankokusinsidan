#pragma once
//�g�p����w�b�_�[
#include"GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�u���b�N���w�i
class CObjhospitalRooftop :public CObj
{
public:
	CObjhospitalRooftop() {};
	~CObjhospitalRooftop() {};
	void Init(); //�C�j�V�����C�Y
	void Action(); //�A�N�V����
	void Draw(); //�h���[



private:
	int m_map[10][10]; //�}�b�v���(���j


};