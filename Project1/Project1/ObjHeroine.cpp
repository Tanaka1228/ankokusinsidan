//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjHeroine.h"
#include"UtilityModule.h"
#include<fstream>

//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjHeroine::CObjHeroine()
{
	m_sp = false;
	key_flag = 1;
}


//イニシャライズ
void CObjHeroine::Init()
{
	
}

//アクション
void CObjHeroine::Action()
{
	//CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjBlock* block = (CObjBlock*)Objs::GetObj(OBJ_BLOCK);

	m_sp = block->GetSpeak();
	m_ep = block->GetEnter();
	
}

//ドロー
void CObjHeroine::Draw()
{
	////描画カラー情報　R=RED G=Green B=Blue A=alpha(透過情報)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	if (m_sp == 1)
	{
		
		Font::StrDraw(L"女の子:ようこそバーへ,一回女の子に近づくと会話が進むよ", 50, 500, 25, c);//X Y 大きさ カラー？
		key_flag = 2;
		
	}
	if(m_sp == 2)
	{
		Font::StrDraw(L"女の子：ここは拠点です", 100, 500, 30, c);
		key_flag = 3;
		//this->SetStatus(false);//自身に削除命令
		//Font::Delete();
	}
	if (m_sp == 3)
	{
		Font::StrDraw(L"女の子：ああああ", 100, 500, 30, c);
		key_flag = 4;
		
	}
	if (m_sp == 4)
	{
		Font::StrDraw(L"女の子：拠点をでてね", 100, 500, 30, c);
		key_flag = 1;
	
	}


	////切り取り位置の設定
	//src.m_top = 0.0f; //y
	//src.m_left = 0.0f; //x
	//src.m_right = 139.0f; //x
	//src.m_bottom = 131.0f; //y

	////表示位置の設定
	//dst.m_top = 0.0f;
	//dst.m_left = 32.0f;
	//dst.m_right = 0.0f;
	//dst.m_bottom = 32.0f;

	////0番目に登録したグラフィックをstc・dst・cの情報を元に描画
	//Draw::Draw(1, &src, &dst, c, 0.0f);
}