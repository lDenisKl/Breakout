#pragma once
#include "Paddle.h"
#include <string>

class Plate : public Paddle {   // ������ ��� �����������
private:
	int			lifes = 3;		// ���-�� ������ ��� �����������
	std::string feature;		// ���������������� ��� ����������� ������
};