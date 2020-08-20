#include <common.h>
#include <nhanvien.h>

void nv_nhapnv(DS_NHANVIEN &dsnv)
{
	NV nv;
	string ho, ten, phai, manv;
	
	cout<<"-----------------------NHAP THONG TIN NHAN VIEN-----------------------";
	do
	{
		cout<<"\nMa nhan vien : ";
		cin>>manv;
		if(isnumber(manv)==0)
		{
			cout<<"Ma NV chi bao gom chu so!"<<endl;
		}
		
		if(nv_checknv(dsnv,manv) == -1)
		{
			cout<<"Ma bi trung, nhap ma khac."<<endl;
		}
	}
	while(nv_checknv(dsnv,manv)==-1||isnumber(manv)==0);
	nv.MANV = stoi(manv);
	
	do
	{
		fflush(stdin);
		cout<<"\nHo: ";
		getline(cin,ho);
		if(checkword(ho)==0)
		{
			inchidan("tennv");
		}
	}
	while(checkword(ho)==0);
	nv.HO = ho;
	
	do
	{
		fflush(stdin);
		cout<<"\nTen: ";
		getline(cin,ten);
		if(checkword(ten)==0)
		{					
			inchidan("tennv");
		}
	}
	while(checkword(ten)==0);
	nv.TEN = ten;
	
	fflush(stdin);
	cout<<"\nPhai: ";
	getline(cin,phai);
	while(phai!="NAM"&&phai!="NU")
	{
		fflush(stdin);
		cout<<"Phai chi bao gom NAM va NU.";
		cout<<"\nPhai: ";
		getline(cin,phai);
	}
	nv.PHAI = phai;
}

void nv_themnv(DS_NHANVIEN &dsnv, NV nv)
{
	if(dsnv.size >= MAX_NV)
	{
		cout<<"Danh sach nhan vien day, khong the them moi.\nVui long xoa bot nhan vien truoc khi them.";
		return;
	}
	dsnv.size += 1;
	NV* newnv = (NV*)malloc(sizeof(NV));
	if (newnv == NULL)
	{
		cout<<"Xay ra loi khi cap phat bo nho.\nNhan vien moi chua duoc them vao danh sach.";
		return;
	}
	dsnv.dsnv[dsnv.size] = newnv;
	*dsnv.dsnv[dsnv.size] = nv;
}


void nv_xoanv(DS_NHANVIEN &dsnv, string manv)
{
	int i = nv_checknv(dsnv,manv);
	if(i >= 0)
	{
		free(dsnv.dsnv[i]);
		dsnv.size -= 1;
	}
}


int nv_checknv(DS_NHANVIEN dsnv,string s)
{ 
	for(int i=0; i < dsnv.size; i++)
	{
		if(dsnv.dsnv[i]-> MANV = stoi(s))
		{
			return i;
		}
	}
	return -1;
}
