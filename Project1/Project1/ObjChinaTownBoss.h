#pragma once
//�g�p����w�b�_�[
#include"GameL\SceneObjManager.h"
#include"GameL\SceneManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�u���b�N���w�i
class CObjChinaTownBoss :public CObj
{
public:
	CObjChinaTownBoss() {};
	~CObjChinaTownBoss() {};
	void Init(); //�C�j�V�����C�Y
	void Action(); //�A�N�V����
	void Draw(); //�h���[

	void SetScroll3(float s) { mx_scroll = s; }
	float GetScroll3() { return mx_scroll; }//X

	void SetScroll4(float s) { my_scroll = s; }
	float GetScroll4() { return my_scroll; }//Y



private:

	int m_map[100][100]; //�}�b�v���

	float mx_scroll; //���E�X�N���[���p
	float my_scroll; //���E�X�N���[���p

};