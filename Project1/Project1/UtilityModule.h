#pragma once
bool UnitVec(float* vx, float* vy);//ベクトルの正規化を行う関数

bool CheckWindow(float pos_x, float pos_y,
	float window_x, float window_y, float window_w, float window_h);//Windowの領域外に出ると破壊命令を出す関数

float GetAtan2Angle(float w, float h);//高さと幅で角度を求める