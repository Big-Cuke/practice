#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
using namespace std;
#include "point.h"

//圆类
class Circle
{
public:
	//设置半径、圆心
	void setR(int r);

	void setCenter(Point center);

	//获取半径、圆心
	int getR();

	Point getCenter();


private:
	int m_R; //半径
	Point m_Center;  //圆心
};