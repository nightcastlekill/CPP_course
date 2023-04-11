#include "Function.h"

void DataInit() {
	//create file with info
	ofstream _buf("students.txt");
	if (!_buf)
		cout << "error of creating buf file!" << endl;
	_buf.close();
}
