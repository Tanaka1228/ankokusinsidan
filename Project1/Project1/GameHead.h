#pragma once

//オブジェクトネーム------------------------------
enum OBJ_NAME
{
	OBJ_NO_NAME,	//オブジェクト名無し(禁止)
					//ゲームで使うオブジェクトの名前
					//OBJ_○○と表記
	OBJ_MAIN,	
	OBJ_HERO, //主人公
	OBJ_TITLE,//ゲームタイトル
	OBJ_ENEMY,//敵１
	OBJ_BULLET,//弾丸
	OBJ_GAME_OVER,//ゲームオーバー
	OBJ_TITLE_BACKGROUND,//ゲームタイトルの背景
	OBJ_ATTACK_ENEMY,//攻撃敵機
	OBJ_BULLET_ENEMY,//弾丸敵機
	OBJ_HOMING_ENEMY,//誘導敵機
	OBJ_SIN_ENEMY,//カーブ敵機
	OBJ_DIFFUSION_ENEMY,//
	OBJ_ANGLE_BULLET,
	OBJ_HOMING_BULLET,
	OBJ_END,
	OBJ_FIN,
	OBJ_MANU,//メニュー
	OBJ_HEROINE,//ヒロイン
	OBJ_GUN,//武器銃
	OBJ_ASS_BULLET,//アサルトライフルの弾丸

	//------マップ-------------------------------------------
	OBJ_BLOCK,//拠点
	OBJ_CHINA_TOWN_BOSS,//チャイナタウンのボス戦フィールド
	OBJ_CHINA_TOWN,//チャイナタウン
	

	OBJ_INSTITUTE_BOSS,//研究所ボス
	OBJ_INSTITUTE,//研究所
	OBJ_INSTITUTE1,//研究所部屋１
	//--------------病院---------------------
	OBJ_ROOF_TOP,//病院屋上
	OBJ_ROOF_TOP_BOSS,//病院の屋上BOSS
	OBJ_HOSPITAL,//病院1階
	OBJ_HOSPITAL2,//病院2階
	OBJ_HOSPITAL3,//病院3階
	OBJ_TEMPLATE_ROOM,//病院の部屋
	OBJ_EVENT_ROOM,//病院のイベント部屋
	OBJ_OPE_ROOM,//病院の手術室
	OBJ_EX_ROOM,//病院の診察室
	OBJ_XRAY_ROOM,//病院のレントゲン室
	//----------------------------------------

	OBJ_DRUG_CAMPANY,//製薬会社
};
//------------------------------------------------

//当たり判定属性----------------------------------
enum HIT_ELEMENTS
{
	ELEMENT_NULL,//属性無し 全ての属性と当たり判定が実行される
	//以下　同じ属性同士では当たり判定は実行されない
	//属性は追加可能だが、デバック時の色は初期設定分しか無い
	ELEMENT_PLAYER,
	ELEMENT_ENEMY,
	ELEMENT_ITEM,
	ELEMENT_MAGIC,
	ELEMENT_FIELD,
	ELEMENT_RED,
	ELEMENT_GREEN,
	ELEMENT_BLUE,
	ELEMENT_BLACK,
	ELEMENT_WHITE,
};
//------------------------------------------------

//------------------------------------------------
//セーブ＆ロードとシーン間のやり取りするデータ
struct UserData
{
	int mSeveData;	//サンプルセーブデータ
	
};
//------------------------------------------------


//ゲーム内で使用されるグローバル変数・定数・列挙--



//------------------------------------------------
//ゲーム内で使用するクラスヘッダ------------------


//------------------------------------------------

//ゲームシーンオブジェクトヘッダ------------------
#include"ObjMain.h"
#include"ObjHero.h"
#include"ObjTitle.h"
#include"ObjEnemy.h"
#include"CObjBullet.h"
#include"ObjGameOver.h"
#include"ObjTitleBackground.h"
#include"ObjAttackEnemy.h"
#include"CObjBulletEnemy.h"
#include"CObjHomingEnemy.h"
#include"CObjSinEnemy.h"
#include"ObjDiffusionEnemy.h"
#include"CObjAngleBullet.h"
#include"CObjHomingBullet.h"
#include"ObjBlock.h"
#include"ObjEnd.h"
#include"ObjFin.h"
#include"ObjMenu.h"
#include"ObjRooftop.h"
#include"ObjInstituteBoss.h"
#include"ObjHeroine.h"
#include"ObjChinaTown.h"
#include"CObjRooftopBoss.h"
#include"ObjGun.h"
#include"CObjAssBullet.h"
#include"ObjDrugCampany.h"
#include"ObjHospital.h"
#include"ObjHospital2.h"
#include"ObjHospital3.h"
#include"ObjTemplateRoom.h"
#include"ObjChinaTownBoss.h"
#include"ObjInstitute.h"
#include"ObjEventRoom.h"
#include"ObjOpeRoom.h"
#include"ObjExRoom.h"
#include"ObjXRayRoom.h"
#include"ObjInstitute1.h"
//------------------------------------------------

//ゲームシーンクラスヘッダ------------------------
#include"SceneTitle.h"
#include"SceneMain.h"
#include"SceneGameOver.h"
#include"SceneEnd.h"
#include"SceneFin.h"
#include"SceneBlock.h"
#include"SceneRooftop.h"
#include"SceneInstituteBoss.h"
#include"SceneChinaTown.h"
#include"SceneDrugCampany.h"
#include"SceneHospital.h"
#include"SceneHospital2.h"
#include"SceneHospital3.h"
#include"SceneTemplateRoom.h"
#include"SceneInstitute.h"
#include"SceneChinaTownBoss.h"
#include"SceneEventRoom.h"
#include"SceneOpeRoom.h"
#include"SceneExRoom.h"
#include"SceneXRayRoom.h"
#include"SceneInstitute1.h"
//-----------------------------------------------

//シーンスタートクラス---------------------------
////ゲーム開始時のシーンクラス登録
//#define SET_GAME_START CSceneGameOver
#define SET_GAME_START CSceneTitle 
//#define SET_GAME_START CSceneEnd 
//#define SET_GAME_START CSceneFin
//#define SET_GAME_START CSceneMain
//#define SET_GAME_START CSceneStage
//#define SET_GAME_START CSceneTemplateRoom
//-----------------------------------------------