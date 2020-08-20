#pragma once

#include <string.h>

#define MAXVT 100

// Cau truc Vat tu
typedef struct VATTU {
	int MAVT;
	string tenVT;
	string DVT;
	float SLT;
} VT;

// Danh sach vat tu
typedef struct NODE_VATTU {
	VT vt;
	nodeVT* left;
	nodeVT* right;
} Node_VT;

typedef Node_VT* Tree;

typedef struct DANHSACH_VATTU {
	Tree dsvt=NULL;
	int n=0;
} DSVT;
 
