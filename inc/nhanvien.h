#pragma once

#include <string>
#include <hoadon.h>


#define MAX_NV 500

using namespace std;

typedef struct NHANVIEN{
	int MANV;
	string HO;
	string TEN;
	string PHAI;
	int CMND;
	PTR ds_HD;
} NV;

typedef struct DS_NHANVIEN{
	int size = 0;
	NHANVIEN* dsnv[MAX_NV] = {};
} DSNV;

DS_NHANVIEN ds_nhanvien = DS_NHANVIEN{};

void nv_nhapnv(DS_NHANVIEN &dsnv);
int nv_checknv(DS_NHANVIEN dsnv,string s);
void nv_themnv(DS_NHANVIEN &dsnv, NV nv);
void nv_xoanv(DS_NHANVIEN &dsnv, string manv);
