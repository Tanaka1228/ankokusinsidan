//使用するヘッダーファイル
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"

#include"GameHead.h"
#include"ObjBlock.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjBlock::Init()
{

//マップ情報
	int block_data[10][10] =
	{
		{0,4,5,4,5,0,1,0,0,0},
		{3,6,7,6,7,0,1,2,0,0},
		{0,0,0,0,0,0,1,0,0,0},
		{8,8,8,8,8,8,8,2,0,0},
		{2,2,2,2,2,2,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,2,9,10,2},
		{0,0,0,0,0,0,2,11,12,2},
		{0,0,0,0,0,0,0,0,0,0},
	};
	//マップデータをコピー
	memcpy(m_map, block_data, sizeof(int) * (10 * 10));
}
//アクション
void CObjBlock::Action()
{

}
//ドロー
void CObjBlock::Draw()
{
	//描画カラー情報
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//背景表示
	src.m_top = 0.0f;
	src.m_left = 10.0f;
	src.m_right = 500.0f;
	src.m_bottom = 500.0f;
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;
	Draw::Draw(9, &src, &dst, c, 0.0f);

	//マップチップによるblock設置
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (m_map[i][j] == 1)
			{
				//切り取り位置の設定
				src.m_top = 135.0f;   //y
				src.m_left = 315.0f; //x
				src.m_right = 450.0f; //x
				src.m_bottom = 215.0f; //y

				//表示位置の設定
				dst.m_top = i*64.0f;
				dst.m_left = j*64.0f;
				dst.m_right = dst.m_left+64.0;
				dst.m_bottom = dst.m_top+64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);			
			}
			if (m_map[i][j] == 2)
			{
				//切り取り位置の設定
				src.m_top = 0.0f;   //y
				src.m_left = 220.0f; //x
				src.m_right =  280.0f; //x
				src.m_bottom = 60.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 3)
			{
				//切り取り位置の設定
				src.m_top = 60.0f;   //y
				src.m_left = 220.0f; //x
				src.m_right = 280.0f; //x
				src.m_bottom = 115.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 4)
			{
				//切り取り位置の設定
				src.m_top = 0.0f;   //y
				src.m_left = 350.0f; //x
				src.m_right = 380.0f; //x
				src.m_bottom = 45.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 5)
			{
				//切り取り位置の設定
				src.m_top = 0.0f;   //y
				src.m_left = 380.0f; //x
				src.m_right = 420.0f; //x
				src.m_bottom = 45.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 6)
			{
				//切り取り位置の設定
				src.m_top = 45.0f;   //y
				src.m_left = 350.0f; //x
				src.m_right = 380.0f; //x
				src.m_bottom = 80.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 7)
			{
				//切り取り位置の設定
				src.m_top = 45.0f;   //y
				src.m_left = 380.0f; //x
				src.m_right = 420.0f; //x
				src.m_bottom = 80.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 8)
			{
				//切り取り位置の設定
				src.m_top = 135.0f;   //y
				src.m_left = 320.0f; //x
				src.m_right = 435.0f; //x
				src.m_bottom = 315.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 9)
			{
				//切り取り位置の設定
				src.m_top = 150.0f;   //y
				src.m_left = 10.0f; //x
				src.m_right = 140.0f; //x
				src.m_bottom = 205.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 10)
			{
				//切り取り位置の設定
				src.m_top = 150.0f;   //y
				src.m_left = 140.0f; //x
				src.m_right = 255.0f; //x
				src.m_bottom = 205.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 11)
			{
				//切り取り位置の設定
				src.m_top = 205.0f;   //y
				src.m_left = 10.0f; //x
				src.m_right = 140.0f; //x
				src.m_bottom = 300.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 12)
			{
				//切り取り位置の設定
				src.m_top = 205.0f;   //y
				src.m_left = 140.0f; //x
				src.m_right = 255.0f; //x
				src.m_bottom = 300.0f; //y

				//表示位置の設定
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
		}
	}
}