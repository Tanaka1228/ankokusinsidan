#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ステージ
class CObjStage : public CObj
{
public:
	CObjStage() {};
	~CObjStage() {};
	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー
private:
};