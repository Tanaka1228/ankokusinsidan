//STL�̃f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0);
#define _HAS_ITERATOR_DEBUGGING (0);

//GameL�Ŏg�p����w�b�_�[
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include"GameL/DrawTexture.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[
#include"GameHead.h"
#include "SceneChinaTown_d.h"



//�R���X�g���N�^
CSceneChinaTown_d::CSceneChinaTown_d()
{
}

//�f�X�g���N�^
CSceneChinaTown_d::~CSceneChinaTown_d()
{
}



//�Q�[���X�e�[�W���������\�b�h
void CSceneChinaTown_d::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"Hero.png", 0, TEX_SIZE_512);//��l���O���t�B�b�N

	//�O���O���t�B�b�N�t�@�C����ǂݍ���1�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�n���h�K��.png", 2, TEX_SIZE_512);//�n���h�K���O���t�B�b�N

	//�O���O���t�B�b�N�t�@�C����ǂݍ���3�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�e�ہQ�E.png", 3, TEX_SIZE_512);//�e�ۃO���t�B�b�N

	//�O���O���t�B�b�N�t�@�C����ǂݍ���4�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�`���C�i�^�E��.png", 4, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���16�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�`���C�i�^�E���̃{�X��t�B�[���h.png", 16, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���17�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�`���C�i�^�E���{�X��t�B�[���h�̑f��.png", 17, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���3�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�����Ё@��.png", 5, TEX_SIZE_512);//�O���t�B�b�N

	//��l���I�u�W�F�N�g�쐬
	CObjHero* obj = new CObjHero(400, 280); //��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 5); //�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^


	//�`���C�i�^�E���I�u�W�F�N�g�쐬
	CObjChinaTown_d* objc = new CObjChinaTown_d(); //�`���C�i�^�E���I�u�W�F�N�g�쐬
	Objs::InsertObj(objc, OBJ_CHINA_TOWN, 4); //������`���C�i�^�E���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�e�I�u�W�F�N�g�쐬
	CObjGun* objg = new CObjGun();
	Objs::InsertObj(objg, OBJ_GUN, 6);
}


//�Q�[���X�e�[�W���s�����\�b�h
void CSceneChinaTown_d::Scene()
{
}