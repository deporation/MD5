#ifndef MD5H
#define MD5H
#include <math.h>
#include <Windows.h>

void ROL(unsigned int &s, unsigned short cx);
void ltob(unsigned int &i);
unsigned int* MD5(const char* mStr);

#endif