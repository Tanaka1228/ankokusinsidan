//STLのデバック機能をOFFにする
#define _SECURE_SCL (0);
#define _HAS_ITERATOR_DEBUGGING (0);

//GameLで使用するヘッダー
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include"GameL/DrawTexture.h"

//使用するネームスペース
using namespace GameL;

//使用するヘッダー
#include"GameHead.h"
#include "SceneChinaTown_b.h"



//コンストラクタ
CSceneChinaTown_b::CSceneChinaTown_b()
{
}

//デストラクタ
CSceneChinaTown_b::~CSceneChinaTown_b()
{
}



//ゲームステージ初期化メソッド
void CSceneChinaTown_b::InitScene()
{
	//外部グラフィックファイルを読み込み0番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"Hero.png", 0, TEX_SIZE_512);//主人公グラフィック

	//外部グラフィックファイルを読み込み1番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"ハンドガン.png", 2, TEX_SIZE_512);//ハンドガングラフィック

	//外部グラフィックファイルを読み込み3番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"弾丸＿右.png", 3, TEX_SIZE_512);//弾丸グラフィック

	//外部グラフィックファイルを読み込み4番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"チャイナタウン.png", 4, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み16番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"チャイナタウンのボス戦フィールド.png", 16, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み17番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"チャイナタウンボス戦フィールドの素材.png", 17, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み3番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"製薬会社　床.png", 5, TEX_SIZE_512);//グラフィック

	//主人公オブジェクト作成
	CObjHero* obj = new CObjHero(400, 280); //主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 5); //作った主人公オブジェクトをオブジェクトマネージャーに登録


	//チャイナタウンオブジェクト作成
	CObjChinaTown_b* objc = new CObjChinaTown_b(); //チャイナタウンオブジェクト作成
	Objs::InsertObj(objc, OBJ_CHINA_TOWN, 4); //作ったチャイナタウンオブジェクトをオブジェクトマネージャーに登録

	//銃オブジェクト作成
	CObjGun* objg = new CObjGun();
	Objs::InsertObj(objg, OBJ_GUN, 6);
}


//ゲームステージ実行中メソッド
void CSceneChinaTown_b::Scene()
{
}
