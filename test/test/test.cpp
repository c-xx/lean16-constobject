#include <iostream>
#include <string>
#include <stdlib.h>
#include "Line.h"
using namespace std;


int main(void) {

	/*Line *p = new Line(1, 2, 3, 4);

	p->printInfo();

	delete p;
	p = NULL;*/

	//Line line(1, 2, 3, 4);
	//line.printInfo();//调用的是普通的成员函数

	const Line line(1, 2, 3, 4);
	line.printInfo();//调用的是常成员函数

	system("pause");
	return 0;
}