#pragma once
#include "Point.h"

class GameObject {
protected:
	Point transform;   // ����� �������
	int   color[3];    // ���� ������� R-G-B
public:
	GameObject() {}
	void setPosition(float x, float y) {
		this->transform.x = x;
		this->transform.y = y;
	}
	Point getPosition() {return Point(transform.x,transform.y);}
	void setColor(int r, int g,int b) {
		color[0] = r;
		color[1] = g;
		color[2] = b;
	}
	int* getColor() {
		return color;
	}
};