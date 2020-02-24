#include "pch.h"

class point {
private:
	int x_, y_;
public:
	point() { cout << "point create" << endl; }
	void setpoint(int x, int y) { x_ = x; y_ = y; cout << "x : " << x_ << "  y : " << y_ << endl; }
	int getx() { return x_; }
	int gety() { return y_; }
};

class squere : public point{
private:
	int width_;
	int height_;


public:
	squere() { cout << "squere create" << endl;  setpoint(10, 5); width_ = 2; height_=10; }
	int area() {
		int x_width = this->getx() + width_;
		int y_height = this->gety() + height_;
		cout << "x1 : " << this->getx() << "  y1 : " << this->gety() << endl;
		cout << "x2 : " << x_width << "  y2 : " << y_height << endl; 
		return x_width * y_height;
	}
};
//
//int main()
//{
////	int arr[5] = {1,2,3,4,5};
////
////	
////
////	//printf("%d\n", arr);
////
////	//printf("%d\n", *arr);
////
////	//printf("%d\n", *(arr+1));
////
////	//printf("%d\n", arr[3]);
////
////	//printf("%d\n", arr[4]);
////
////	//printf("%d\n", *(arr + 5));
////
////
////	int arr2[4] = { 1,2,3,4 };
////	int* pArr;
////	//   (저장할 자료형의 포인터)malloc(생성할 크기) 
////	pArr = (int *)malloc(sizeof(int)*4);
////
////	free(pArr);
////
////
////
////	char * str1 = "abcde";
////
////	printf("%c\n", *(str1+3));
//
//	squere sq;
//
//	cout << "squere area is " << sq.area() << endl;
//
//}