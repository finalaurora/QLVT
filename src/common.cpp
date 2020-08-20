#include <common.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//int stoi(string s)
//{
//	int value = atoi(s.c_str());
//	return value;
//}

bool checkword(string s)
{
	if( isalpha(s[0]) == false)
	{
		return 0;	
	}
	
	for( int i=1; i<s.length(); i++ )
	{
		if((isalpha(s[i]) == false) && (s[i] != ' '))
		{
			return false;
		}
	}
	
	return true;
}

bool isnumber(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]<'0'||s[i]>'9')
		return false;
	}
	return true;
}

void inchidan(string s)
{
	
	if(s=="modau")
	{
		cout<<"\tNhan Enter de tiep tuc nhap, Esc de thoat."<<endl;
	}
	if(s=="nhanvien")
	{
		cout<<"\tMa nhan vien chi chua ki tu so 0-9.\n\tHo ten nhan vien chi duoc chua cac chu cai a-Z va khong duoc bat dau bang khoang trong."<<endl;
	}
	if(s=="tennv")
	{
		cout<<"Ho ten nhan vien chi duoc chua cac chu cai a-Z va khong duoc bat dau bang khoang trong."<<endl;
	}
	if(s=="hoadon")
	{
		cout<<"\tMa hoa don chi chua kitu so tu 0-9."<<endl;
	}
}
