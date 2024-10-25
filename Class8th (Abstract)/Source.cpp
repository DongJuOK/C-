#include <iostream>
#include "../Program/Pencil.h"
#include "../Program/Brush.h"

using namespace std;

void Position(int x, int y)
{
	cout << "int Position Function" << endl;

	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
}

void Position(float x, float y)
{
	cout << "float Position Function" << endl;

	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
}

void Position(float x, float y, float z)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
	cout << "z의 값 : " << z << endl;
}

int main()
{
#pragma region 함수의 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의
	// 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

	// Position(5, 15);
	// 
	// Position(10.5f, 10.75f);
	// 
	// Position(10.1f, 10.2f, 10.3f);

	// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 인수의
	// 형태를 보고 호출하므로, 반환형으로 함수의 오버로딩은 생성
	// 할 수 없습니다.


#pragma endregion

#pragma region 추상 클래스
	// 특정한 함수가 구현되어 있지 않고, 선언되어 있는 클래스입니다.

	Paint* paint = nullptr;

	paint = new Pencil();

	paint->Draw();

	paint = new Brush();

	paint->Draw();

	// 추상 클래스는 정의되어 있지 않은 함수가 있으므로,
	// 인스턴스로 생성할 수 없습니다.
#pragma endregion

	return 0;
}
