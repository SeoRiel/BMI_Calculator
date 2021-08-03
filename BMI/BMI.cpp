#include <iostream>

int main()
{
	float height = 0.0f;
	float weight = 0.0f;
	float resultBMI;

	std::cout << "자신의 키를 입력하세요. : ";
	std::cin >> height;

	std::cout << "몸무게를 입력하세요. : ";
	std::cin >> weight;

	height = height / 100;
	resultBMI = weight / (height * height);

	std::cout << "내 BMI 수치는 " << resultBMI << "입니다." << std::endl;
	if (resultBMI < 18.5)														// 저체중
	{
		std::cout << "해당 BMI 수치는 저체중입니다." << std::endl;
	}
	else if (resultBMI >= 18.5 && resultBMI < 25)								// 정상
	{
		std::cout << "해당 BMI 수치는 정상입니다." << std::endl;
	}
	else if (resultBMI >= 25 && resultBMI < 30)									// 과체중
	{
		std::cout << "해당 BMI 수치는 과체중입니다." << std::endl;
	}
	else if (resultBMI <= 30)													// 비만
	{
		std::cout << "해당 BMI 수치는 비만입니다." << std::endl;
	}


	return 0;
}
