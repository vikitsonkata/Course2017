#include <iostream>
#include "Test.h"
#include "Rectangle.h"
using namespace std;

int main()
{
	Test t1(2, 3), t2(0, 0);
	cout << t1.getX() << endl << t2.getX() << endl;
	cout << endl;
	t2 = t1;
	cout << t1.getX() << endl << t2.getX() << endl;
	cout << endl;

	Rectangle rec1(1, 3, 3, 1, 1, 1, 2, 2), rec2(1, 2, 3, 2, 2, 1, 2, 3);
	cout << "Rectangle1 length: " << rec1.length() << " width: " << rec1.width() << endl;
	cout << "Rectangle2 length: " << rec2.length() << " width: " << rec2.width() << endl;
	cout << "and Rec2 is square ?" << boolalpha << rec2.square() << endl;

	Rectangle R[2] = { rec1,rec2 };
	Rectangle* PR[2];
	PR[0] = &R[0];
	PR[1] = &R[1];
	
	cout << "Rectangle2 length: " << rec2.length()
		<< " width: " << rec2.width() << endl;
	cout << "Rectangle2 length: " << R[1].length()
		<< " width: " << R[1].width() << endl;
	cout << "Rectangle2 length: " << PR[1]->length()
		<< " width: " << PR[1]->width() << endl;
}