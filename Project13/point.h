#define _CRT_SECURE_NO_WARNINGS 1
#pragma once   //防止头文件重包含
#include <iostream>
using namespace std;

//头文件用于声明
//点类
class Point
{
public:
	//设置x、y
	void setX(int x);

	void setY(int y);

	//获取x、y
	int getX();

	int getY();
private:
	int m_X;
	int m_Y;
};