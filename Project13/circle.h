#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
using namespace std;
#include "point.h"

//Բ��
class Circle
{
public:
	//���ð뾶��Բ��
	void setR(int r);

	void setCenter(Point center);

	//��ȡ�뾶��Բ��
	int getR();

	Point getCenter();


private:
	int m_R; //�뾶
	Point m_Center;  //Բ��
};