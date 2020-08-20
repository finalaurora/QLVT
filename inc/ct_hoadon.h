#pragma once

#include <cstring>

#define MAXCTHD 20
using namespace std;
//Danh sach chi tiet hoa don

typedef struct CHITIET_HOADON {
	string MAVT; 
	float soluong;
	int dongia;
	float VAT;
	int trangthai; //1 : Khach mua ; 0 : Khach da tra hang
} CTHD;

typedef struct NODE_CTHD {
	CTHD cthd[MAXCTHD];
	int n = 0;
} NodeCT;
