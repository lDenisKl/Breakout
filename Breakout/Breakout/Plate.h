#include "Paddle.h"
#include <string>

class Plate : public Paddle {   // ������ ��� �����������
private:
	int			lifes;			// ���-�� ������ ��� �����������
	std::string feature;		// ���������������� ��� ����������� ������
};