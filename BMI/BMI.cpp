#include <iostream>

int main()
{
	float height = 0.0f;
	float weight = 0.0f;
	float resultBMI;

	std::cout << "�ڽ��� Ű�� �Է��ϼ���. : ";
	std::cin >> height;

	std::cout << "�����Ը� �Է��ϼ���. : ";
	std::cin >> weight;

	height = height / 100;
	resultBMI = weight / (height * height);

	std::cout << "�� BMI ��ġ�� " << resultBMI << "�Դϴ�." << std::endl;
	if (resultBMI < 18.5)														// ��ü��
	{
		std::cout << "�ش� BMI ��ġ�� ��ü���Դϴ�." << std::endl;
	}
	else if (resultBMI >= 18.5 && resultBMI < 25)								// ����
	{
		std::cout << "�ش� BMI ��ġ�� �����Դϴ�." << std::endl;
	}
	else if (resultBMI >= 25 && resultBMI < 30)									// ��ü��
	{
		std::cout << "�ش� BMI ��ġ�� ��ü���Դϴ�." << std::endl;
	}
	else if (resultBMI <= 30)													// ��
	{
		std::cout << "�ش� BMI ��ġ�� ���Դϴ�." << std::endl;
	}


	return 0;
}
