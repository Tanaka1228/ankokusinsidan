#pragma once

//IuWFNgl[------------------------------
enum OBJ_NAME
{
	OBJ_NO_NAME,	//IuWFNg¼³µ(Ö~)
					//Q[Åg¤IuWFNgÌ¼O
					//OBJ_Æ\L
					OBJ_MAIN,
					OBJ_HERO, //ålö
					OBJ_TITLE,//Q[^Cg
					OBJ_ENEMY,//GP
					OBJ_BULLET,//eÛ
					OBJ_GAME_OVER,//Q[I[o[
					OBJ_TITLE_BACKGROUND,//Q[^CgÌwi
					OBJ_ATTACK_ENEMY,//UG@
					OBJ_BULLET_ENEMY,//eÛG@
					OBJ_HOMING_ENEMY,//U±G@
					OBJ_SIN_ENEMY,//J[uG@
					OBJ_DIFFUSION_ENEMY,//
					OBJ_ANGLE_BULLET,
					OBJ_HOMING_BULLET,
					OBJ_END,
					OBJ_FIN,
					OBJ_MANU,//j[
					OBJ_HEROINE,//qC
					OBJ_GUN,//íe
					OBJ_ASS_BULLET,//ATgCtÌeÛ

					//------}bv-------------------------------------------
					OBJ_BLOCK,//_
					OBJ_CHINA_TOWN_BOSS,//`Ci^EÌ{XítB[h
					OBJ_CHINA_TOWN,//`Ci^E
					OBJ_CHINA_TOWN_BOSS_BOSS,//`Ci^EÌ{XítB[hBOSS


					<<<<<< < HEAD
					OBJ_INSTITUTE_BOSS,//¤{X
	OBJ_INSTITUTE_BOSS_BOSS,//¤{X{X
	OBJ_INSTITUTE,//¤
	OBJ_INSTITUTE1,//¤®P
	OBJ_INSTITUTE2,//¤®2
	OBJ_INSTITUTE3,//¤®R
	OBJ_INSTITUTE4,//¤®S
	OBJ_INSTITUTE5,//¤®5
	OBJ_INSTITUTE6,//¤®6
	OBJ_INSTITUTE7,//¤®7
	OBJ_INSTITUTE8,//¤®8
	OBJ_INSTITUTE9,//¤®9
	OBJ_INSTITUTE10,//¤®10
	OBJ_INSTITUTE11,//¤®11
	OBJ_INSTITUTE12,//¤®12
	OBJ_INSTITUTE13,//¤Lº13
	OBJ_INSTITUTE14,//¤Lº14
	//--------------a@---------------------
	OBJ_ROOF_TOP,//a@®ã
	OBJ_ROOF_TOP_BOSS,//a@Ì®ãBOSS
	OBJ_HOSPITAL,//a@1K
	OBJ_HOSPITAL2,//a@2K
	OBJ_HOSPITAL3,//a@3K
	OBJ_TEMPLATE_ROOM,//a@Ì®
	OBJ_EVENT_ROOM,//a@ÌCxg®
	OBJ_OPE_ROOM,//a@Ìèpº
	OBJ_EX_ROOM,//a@Ìf@º
	OBJ_XRAY_ROOM,//a@ÌgQº
	====== =
	OBJ_INSTITUTE_BOSS,//ç ç©¶æãã¹
	OBJ_INSTITUTE,//ç ç©¶æ
	OBJ_INSTITUTE1,//ç ç©¶æé¨å±ï¼E
	OBJ_INSTITUTE2,//ç ç©¶é¨å±E
	OBJ_INSTITUTE_BOSS_BOSS,//ç ç©¶æãã¹ãã¹
	OBJ_INSTITUTE3,//E½E½E½E½E½E½E½E½E½E½E½R
	//--------------çE¢---------------------
	OBJ_ROOF_TOP,//çE¢å±ä¸E
	OBJ_ROOF_TOP_BOSS,//çE¢ã®å±ä¸BOSS
	OBJ_HOSPITAL,//çE¢1éE
	OBJ_HOSPITAL2,//çE¢2éE
	OBJ_HOSPITAL3,//çE¢3éE
	OBJ_TEMPLATE_ROOM,//çE¢ã®é¨å±E
	OBJ_EVENT_ROOM,//çE¢ã®ã¤ãã³ãé¨å±E
	OBJ_OPE_ROOM,//çE¢ã®æè¡å®¤
	OBJ_EX_ROOM,//çE¢ã®è¨ºå¯å®¤
	OBJ_XRAY_ROOM,//çE¢ã®ã¬ã³ãã²ã³å®¤
	>>>>>> > 650aa39bf6aff5a8eae6933d9f8d2fc3f01affa8
	//----------------------------------------


	OBJ_DRUG_CAMPANY,//»òïÐ
}
//------------------------------------------------

//½è»è®«----------------------------------
enum HIT_ELEMENTS
{
	ELEMENT_NULL,//®«³µ SÄÌ®«Æ½è»èªÀs³êé
	//Èº@¯¶®«¯mÅÍ½è»èÍÀs³êÈ¢
	//®«ÍÇÁÂ\¾ªAfobNÌFÍúÝèªµ©³¢
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
//Z[u[hÆV[ÔÌâèæè·éf[^
struct UserData
{
	int mSeveData;	//TvZ[uf[^
	
};
//------------------------------------------------


//Q[àÅgp³êéO[oÏEèEñ--



//------------------------------------------------
//Q[àÅgp·éNXwb_------------------


//------------------------------------------------

//Q[V[IuWFNgwb_------------------
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
#include"ObjInstitute2.h"
#include"ObjInstitute3.h"  
#include"CObjChinaTownBossBoss.h"

#include"ObjInstitute4.h"
#include"ObjInstitute5.h"
#include"ObjInstitute6.h"
#include"ObjInstitute7.h"
#include"ObjInstitute8.h"
#include"ObjInstitute9.h"
#include"ObjInstitute10.h"
#include"ObjInstitute11.h"
#include"ObjInstitute12.h"
#include"ObjInstitute13.h"
#include"ObjInstitute13.h"

#include"CObjInstituteBossBoss.h"
//------------------------------------------------

//Q[V[NXwb_------------------------
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
#include"SceneInstitute2.h"
#include"SceneInstitute3.h"
#include"SceneInstitute4.h"
#include"SceneInstitute5.h"
#include"SceneInstitute6.h"
#include"SceneInstitute7.h"
#include"SceneInstitute8.h"
#include"SceneInstitute9.h"
#include"SceneInstitute10.h"
#include"SceneInstitute11.h"
#include"SceneInstitute12.h"
#include"SceneInstitute13.h"
#include"SceneInstitute14.h"

//-----------------------------------------------

//V[X^[gNX---------------------------
////Q[JnÌV[NXo^
//#define SET_GAME_START CSceneGameOver
#define SET_GAME_START CSceneTitle 
//#define SET_GAME_START CSceneEnd 
//#define SET_GAME_START CSceneFin
//#define SET_GAME_START CSceneMain
//#define SET_GAME_START CSceneStage
//#define SET_GAME_START CSceneTemplateRoom
//-----------------------------------------------