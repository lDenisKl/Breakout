#pragma once
#include "Paddle.h"
#include <string>

class Plate : public Paddle {   // ������ ��� �����������
private:
	int			lifes = 3;		// ���-�� ������ ��� �����������
	std::string feature;		// ���������������� ��� ����������� ������
public:
	Plate() = default;
	Plate(float x, float y,float height,float width, int lifes) {
		this->transform = Point(x, y);

		this->lifes = lifes;
		this->height = height;
		this->width = width;

	}
	bool hit(int damage) { 
		lifes -= damage;
		if (lifes < 1) {
			return true;
		}
		return false;
	}
	int getLifes() const { return lifes; }
	std::string getFeature() const { return feature; }
};