//使用するヘッダーファイル
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"

#include"GameHead.h"
#include"ObjRooftop.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjRooftop::Init()
{
	mx_scroll = 0.0f;
	my_scroll = 0.0f;

	//マップ情報
	int block_data[25][25] =
	{
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		
	};
	//マップデータをコピー
	memcpy(m_map, block_data, sizeof(int) * (25 * 25));
}
//アクション
void CObjRooftop::Action()
{
	//主人公の位置を取得
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float hx = hero->GetX();
	float hy = hero->GetY();
    
	//後方スクロールライン　←
	if (hx < 400)
	{
		hero->SetX(400); //主人公はラインを超えないようにする
		mx_scroll += hero->GetX(); //主人公は本来動くべき分の値をm_scrollに加える
	}

	//前方スクロールライン →
	if (hx > 400)
	{
		hero->SetX(400); //主人公はラインを超えないようにする
		mx_scroll -= hero->GetX(); //主人公は本来動くべき分の値をm_scrollに加える
	}

	//スクロールライン　↑
	if (hy > 300)
	{
		hero->SetY(300); //主人公はラインを超えないようにする
		my_scroll -= hero->GetY(); //主人公は本来動くべき分の値をm_scrollに加える
	}

	//スクロールライン　↓
	if (hy < 300)
	{
		hero->SetY(300); //主人公はラインを超えないようにする
		my_scroll += hero->GetY(); //主人公は本来動くべき分の値をm_scrollに加える
	}
}
//ドロー
void CObjRooftop::Draw()
{
	//描画カラー情報
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//切り取り背景表示
	src.m_top = 100.0f ;
	src.m_left = 0.0f ;
	src.m_right = 800.0f ;
	src.m_bottom = 784.0f ;
	
	

	//マップチップによるblock設置
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 25; j++)
		{
			if (m_map[i][j]==0)//床
			{
				//表示位置の設定
				dst.m_top    = 0.0f     + my_scroll;    //y
				dst.m_left   = 0.0f     + mx_scroll;   //x
				dst.m_right  = 800.0f   + mx_scroll;  //x
				dst.m_bottom = 600.0f   + my_scroll; //y

				/*dst.m_top = -100.0f + my_scroll;
				dst.m_left = -100.0f + mx_scroll;
				dst.m_right = 1500.0f + mx_scroll;
				dst.m_bottom = 1468.0f + my_scroll;*/

				Draw::Draw(10, &src, &dst, c, 0.0f);
	
			}
			if (m_map[i][j] == 1)
			{
				//切り取り位置の設定
				src.m_top = 0.0f;   //y
				src.m_left = 0.0f; //x
				src.m_right = 150.0f; //x
				src.m_bottom = 75.0f; //y

				//表示位置の設定
				dst.m_top =  32.0f;
				dst.m_left =  32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}
		}
	}
}


