#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "MD5.h"

int main(int argc, char **argv)
{
	char tmpstr[256], buf[4][10];
	std::cout << "请输入要加密的字符串：";
	std::cin >> tmpstr;
	unsigned int* tmpGroup = MD5(tmpstr);
	sprintf_s(buf[0], "%8X", tmpGroup[0]);
	sprintf_s(buf[1], "%8X", tmpGroup[3]);
	sprintf_s(buf[2], "%8X", tmpGroup[2]);
	sprintf_s(buf[3], "%8X", tmpGroup[1]);
	std::cout << "MD5:" << buf[0] << buf[1] << buf[2] << buf[3] << std::endl;

	delete[] tmpGroup;
	return 0; 
}
