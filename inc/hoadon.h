#pragma once
#include <date.h>
#include <string.h>
#include <ct_hoadon.h>

using namespace std;

struct HOADON {
	char SoHD[20];
	DATE ngayLapHD;			
	char loai; 				// 'N':Nhap 'X':Xuat
	NODE_CTHD node_CTHD;
};

typedef HOADON HD;

struct NodeHD {
	HOADON info;
	struct NodeHD* next;
};

typedef struct NodeHD* PTR;
