//�g�p����w�b�_�[�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameL/DrawFont.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\SceneObjManager.h"

#include"GameHead.h"
#include "ObjHospital2.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjHospital2::Init()
{
	mx_scroll = -420.0f;
	my_scroll = 0.0f;

	//�}�b�v���
	int block_data[25][50] =
	{
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,32,32,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,31,31,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,1,1,1,1,1,1,1,1,1.1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,31,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{0,1,2,2,2,2,2,2,2,35,35,2,2,2,2,2,2,2,2,2,2,2,2,2,31,31,0,2,2,2,2,2,2,2,2,2,2,2,2,2,34,34,2,2,2,2,2,2,2,1},
		{0,1,2,2,2,2,2,2,2,31,31,2,2,2,2,2,2,2,2,2,2,2,2,2,31,31,0,2,2,2,2,2,2,2,2,2,2,2,2,2,31,31,2,2,2,2,2,2,2,1},
		{0,1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1},
		{0,1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1},
		{0,1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1},
		{0,1,1,1,1,1,1,1,1,1,1,1,31,31,1,1,1,1,1,1,1,1,1,1,31,31,31,1,1,1,1,1,1,1,1,1,1,31,31,1,1,1,1,1,1,1,1,1,1,1},
		{0,2,2,2,2,2,2,2,2,2,2,2,34,34,2,2,2,2,2,2,2,2,2,1,33,33,1,1,2,2,2,2,2,2,2,2,2,34,34,2,2,2,2,2,2,2,2,2,2,2},
		{0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},


	};
	//�}�b�v�f�[�^���R�s�[
	memcpy(m_map, block_data, sizeof(int) * (25 * 50));

}
//�A�N�V����
void CObjHospital2::Action()
{
	//��l���̈ʒu���擾
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float hx = hero->GetX2();//�X�N���[��
	float hy = hero->GetY2();


	if (hero->GetRight() == false)
	{
		//����X�N���[�����C���@��
		if (hx < 400)
		{
			hero->SetX2(400); //��l���̓��C���𒴂��Ȃ��悤�ɂ���
			mx_scroll -= -6.0f + hero->GetVX(); //��l���͖{�������ׂ����̒l��m_scroll�ɉ�����
		}
	}

	if (hero->GetLeft() == false)
	{
		//�O���X�N���[�����C�� ��
		if (hx > 400)
		{
			hero->SetX2(400); //��l���̓��C���𒴂��Ȃ��悤�ɂ���
			mx_scroll -= 6.0f + hero->GetVX(); //��l���͖{�������ׂ����̒l��m_scroll�ɉ�����

		}
	}

	if (hero->GetDown() == false)
	{
		//�X�N���[�����C���@��
		if (hy > 300)
		{
			hero->SetY2(300); //��l���̓��C���𒴂��Ȃ��悤�ɂ���
			my_scroll -= 6.0f + hero->GetVY(); //��l���͖{�������ׂ����̒l��m_scroll�ɉ�����

		}
	}

	if (hero->GetUp() == false)
	{
		//�X�N���[�����C���@��
		if (hy < 300)
		{
			hero->SetY2(300); //��l���̓��C���𒴂��Ȃ��悤�ɂ���
			my_scroll -= -6.0f + hero->GetVY(); //��l���͖{�������ׂ����̒l��m_scroll�ɉ�����
		}
	}





	//��l���̏Փˏ�Ԋm�F�p�t���O�̏�����
	hero->SetUp(false);
	hero->SetDown(false);
	hero->SetLeft(false);
	hero->SetRight(false);






	//m_map�̑S�v�f�ɃA�N�Z�X
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			if (m_map[i][j] > 0 && m_map[i][j] != 31)
			{

				//�v�f�ԍ������W�ɕύX
				float x = j * 32.0f;
				float y = i * 32.0f;

				//��l���ƃu���b�N�̓����蔻��
				if ((hx + (-mx_scroll) + 64.0f > x) && (hx + (-mx_scroll) < x + 64.0f) && (hy + (-my_scroll) + 64.0f > y) && (hy + (-my_scroll) < y + 64.0f))
				{

					//�㉺���E����

					//vector�̍쐬
					float vx = (hx + (-mx_scroll)) - x;
					float vy = (hy + (-my_scroll)) - y;

					//���������߂�
					float len = sqrt(vx * vx + vy * vy);//sqrt�֐��́A��������Ԃ�

					//�p�x�����߂�
					float r = atan2(vy, vx);//atan2�֐��̓A�[�N�^���W�F���g��Ԃ�
					r = r * 180.0f / 3.14f;

					if (r <= 0.0f)//abs�֐��́A�l�̐�Βl�����߂� �����𖳎������l
						r = abs(r);
					else
						r = 360.0f - abs(r);

					//len��������̒����̂��Z���ꍇ����ɓ���
					if (len < 44.0f)
					{

						//�p�x�ŏ㉺���E�𔻒�
						if ((r < 45 && r >= 0) || r > 315)
						{
							//�E
							hero->SetRight(true);//��l���̍��̕������Փ˂��Ă���
							hero->SetX2(x + 40.0f + (mx_scroll));//�u���b�N�̈ʒu+��l���̕�
							hero->SetBT(m_map[i][j]);
							hero->SetVX(0.0f);//-VX*�����W��
						}
						if (r > 45 && r < 135)
						{
							//��
							hero->SetDown(true);//��l���̉��̕������Փ˂��Ă���
							hero->SetY2(y - 40.0f + (my_scroll));//�u���b�N�̈ʒu-��l���̕�
							hero->SetBT(m_map[i][j]);
							hero->SetVY(0.0f);//-VX*�����W��

						}
						if (r > 135 && r < 225)
						{
							//��
							hero->SetLeft(true);//��l���̉E�̕������Փ˂��Ă���
							hero->SetX2(x - 40.0f + (mx_scroll));//�u���b�N�̈ʒu-��l���̕�
							hero->SetBT(m_map[i][j]);
							hero->SetVX(0.0f);//-VX*�����W��
						}
						if (r > 225 && r < 315)
						{
							//��
							hero->SetUp(true);//��l���̏�̕������Փ˂��Ă���
							hero->SetY2(y + 40.0f + (my_scroll));//�u���b�N�̈ʒu+��l���̕�
							hero->SetBT(m_map[i][j]);
							hero->SetVY(0.0f);//-VX*�����W��
						}
						if (m_map[i][j] ==32)//�h�A�ɓ���ƕa�@3�K�Ɉړ�
						{
							Scene::SetScene(new CSceneHospital3());
						}
						if (m_map[i][j] == 33)//�h�A�ɓ���ƕa�@1�K�Ɉړ�
						{
							Scene::SetScene(new CSceneHospital());
						}
						if (m_map[i][j] == 34)//�h�A�ɓ���ƕa�@TemplateRoom
						{
							Scene::SetScene(new CSceneTemplateRoom());
						}
						if (m_map[i][j] == 35)//�h�A�ɓ���ƕa�@�C�x���g���[��
						{
							Scene::SetScene(new CSceneEventRoom());
						}
					}
				}



			}
		}
	}

	//�G�o�����C��
	//float Xline = hx + (-mx_scroll) + 400;
	//float Yline = hy + (my_scroll)-100;

	//int ex = ((int)Xline) / 32;
	//int ey = ((int)Yline) / 32;

	//for (int i = 0; i < 25; i++)
	//{
	//	for (int j = 0; j < 25; j++)

	//		if (m_map[i][ex] == 15)
	//		{
	//			//�U���G�@�I�u�W�F�N�g�쐬
	//			CObjRooftopBoss* obj_rooftop_boss = new CObjRooftopBoss(ex * 32, i * 32); //�U���G�@�I�u�W�F�N�g�쐬
	//			Objs::InsertObj(obj_rooftop_boss, OBJ_ROOF_TOP_BOSS, 4); //�U���G�@�I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//			m_map[i][ex] = 0;
	//		}


	//}

}
//�h���[
void CObjHospital2::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	Font::StrDraw(L"�a�@�F2�K", 600, 10, 32, c);

	//�}�b�v�`�b�v�ɂ��block�ݒu
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 50; j++)
		{

			if (m_map[i][j] == 1)//�ǁ@�{�X
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 0.0f; //x
				src.m_right = 75.0f; //x
				src.m_bottom = 75.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(5, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 2)//�ǁ@�{�X
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 18.0f;   //y
				src.m_left = 390.0f; //x
				src.m_right = 415.0f; //x
				src.m_bottom = 40.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(5, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 3)//�J�[�e��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 90.0f; //x
				src.m_right = 280.0f; //x
				src.m_bottom = 85.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 4)//�J�E���^�[��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 90.0f; //x
				src.m_right = 280.0f; //x
				src.m_bottom = 85.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 5)//�J�E���^�[�c
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 318.0f; //x
				src.m_right = 368.0f; //x
				src.m_bottom = 173.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 6)//�e���r
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 381.0f; //x
				src.m_right = 482.0f; //x
				src.m_bottom = 146.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 7)//�c���C�X
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 632.0f; //x
				src.m_right = 712.0f; //x
				src.m_bottom = 158.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 8)//�C�X
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 91.0f;   //y
				src.m_left = 0.0f; //x
				src.m_right = 143.0f; //x
				src.m_bottom = 176.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 9)//����
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 94.0f;   //y
				src.m_left = 148.0f; //x
				src.m_right = 320.0f; //x
				src.m_bottom = 178.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 10)//������
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 83.0f;   //y
				src.m_left = 336.0f; //x
				src.m_right = 454.0f; //x
				src.m_bottom = 183.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 11)//�֎q�� ���
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 83.0f;   //y
				src.m_left = 336.0f; //x
				src.m_right = 454.0f; //x
				src.m_bottom = 183.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 12)//�S�~��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 147.0f;   //y
				src.m_left = 521.0f; //x
				src.m_right = 548.0f; //x
				src.m_bottom = 185.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 13)//���x�b�h
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 182.0f;   //y
				src.m_left = 1.0f; //x
				src.m_right = 120.0f; //x
				src.m_bottom = 269.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 14)//�c�x�b�h
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 184.0f;   //y
				src.m_left = 137.0f; //x
				src.m_right = 214.0f; //x
				src.m_bottom = 323.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 15)//���������e���r
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 186.0f;   //y
				src.m_left = 228.0f; //x
				src.m_right = 273.0f; //x
				src.m_bottom = 271.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 16)//����������
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 207.0f;   //y
				src.m_left = 284.0f; //x
				src.m_right = 327.0f; //x
				src.m_bottom = 273.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 17)//�֎q����
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 190.0f;   //y
				src.m_left = 334.0f; //x
				src.m_right = 363.0f; //x
				src.m_bottom = 232.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 18)//�ۈ֎q
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 237.0f;   //y
				src.m_left = 336.0f; //x
				src.m_right = 361.0f; //x
				src.m_bottom = 272.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 19)//�h�{�������
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 192.0f;   //y
				src.m_left = 367.0f; //x
				src.m_right = 400.0f; //x
				src.m_bottom = 276.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 20)//�h�{������� 2
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 192.0f;   //y
				src.m_left = 416.0f; //x
				src.m_right = 506.0f; //x
				src.m_bottom = 262.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 21)//�@�B1
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 198.0f;   //y
				src.m_left = 521.0f; //x
				src.m_right = 543.0f; //x
				src.m_bottom = 258.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 22)//�@�B2
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 195.0f;   //y
				src.m_left = 573.0f; //x
				src.m_right = 617.0f; //x
				src.m_bottom = 267.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 23)//�@�B3
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 189.0f;   //y
				src.m_left = 627.0f; //x
				src.m_right = 685.0f; //x
				src.m_bottom = 267.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 24)//�@�B4
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 278.0f;   //y
				src.m_left = 6.0f; //x
				src.m_right = 86.0f; //x
				src.m_bottom = 350.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 25)//����
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 283.0f;   //y
				src.m_left = 232.0f; //x
				src.m_right = 323.0f; //x
				src.m_bottom = 334.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 26)//�Ԉ֎q
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 280.0f;   //y
				src.m_left = 336.0f; //x
				src.m_right = 418.0f; //x
				src.m_bottom = 347.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 27)//�΃\�t�@�c
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 360.0f;   //y
				src.m_left = 5.0f; //x
				src.m_right = 53.0f; //x
				src.m_bottom = 473.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 28)//�΃\�t�@��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 408.0f;   //y
				src.m_left = 54.0f; //x
				src.m_right = 161.0f; //x
				src.m_bottom = 473.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 29)//�x�b�h
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 350.0f;   //y
				src.m_left = 173.0f; //x
				src.m_right = 237.0f; //x
				src.m_bottom = 473.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 30)// M R I
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 350.0f;   //y
				src.m_left = 244.0f; //x
				src.m_right = 371.0f; //x
				src.m_bottom = 517.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 30)// �I
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 485.0f;   //y
				src.m_left = 10.0f; //x
				src.m_right = 129.0f; //x
				src.m_bottom = 554.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 30)// �I 2
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 485.0f;   //y
				src.m_left = 147.0f; //x
				src.m_right = 234.0f; //x
				src.m_bottom = 554.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(4, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 31)
			{
				//�w�i�\��
				src.m_top = 0.0f;   // Y
				src.m_left = 0.0f;  // X
				src.m_right = 87.0f; // X
				src.m_bottom = 87.0f;// Y 

				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 64.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 64.0f + my_scroll;

				Draw::Draw(6, &src, &dst, c, 0.0f);//�a�@�̏�
			}
			if (m_map[i][j] == 32)//�G���x�[�^�[
			{
				//�w�i�\��
				src.m_top = 6.0f;   // Y
				src.m_left = 8.0f;  // X
				src.m_right = 71.0f; // X
				src.m_bottom = 59.0f;// Y 

				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 64.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 64.0f + my_scroll;

				Draw::Draw(7, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 33)//�G���x�[�^�[
			{
				//�w�i�\��
				src.m_top = 6.0f;   // Y
				src.m_left = 8.0f;  // X
				src.m_right = 71.0f; // X
				src.m_bottom = 59.0f;// Y 

				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 64.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 64.0f + my_scroll;

				Draw::Draw(7, &src, &dst, c, 0.0f);
			}
		}
	}
}