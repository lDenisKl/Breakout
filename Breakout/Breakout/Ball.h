#pragma once
#include "GameObject.h"

class Ball : public GameObject { // ���
private:
	float radius = 10.0f; 
	float speed = 10.0f;	  // �������� ����
	int   power = 1.0f;	      // ���-�� ������, ���������� � ������ ��� ������������ 

};