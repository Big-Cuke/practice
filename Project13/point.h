#define _CRT_SECURE_NO_WARNINGS 1
#pragma once   //��ֹͷ�ļ��ذ���
#include <iostream>
using namespace std;

//ͷ�ļ���������
//����
class Point
{
public:
	//����x��y
	void setX(int x);

	void setY(int y);

	//��ȡx��y
	int getX();

	int getY();
private:
	int m_X;
	int m_Y;
};