#include <common.h>
#include <date.h>
#include <string>

using namespace std;

//Ham nhap du lieu ngay thang
void date_getdate(DATE &date)
{
	string d,m,y;
	while(1)
	{
		cout<<"Ngay: ";cin>>d;cout<<"Thang: ";cin>>m;cout<<"Nam: ";cin>>y;
		
		if (((isnumber(d)==1) && (isnumber(m)==1) && (isnumber(y)==1)) // Ngay Thang Nam phai o dinh dang so
			&& ((stoi(d)>0) && (stoi(d)<=31))	// 0 > Ngay >= 31 
			&& ((stoi(m)>0) && (stoi(m)<=12))	// 0 > Thang >= 12
			|| (stoi(y)<2000))					// Nam > 2000
		{
			date.day = stoi(d);
			date.month = stoi(m);
			date.year = stoi(y);
			return;
		}
		else
		{
			cout<<"Dinh dang ngay thang bi sai. Chi chap nhan thoi gian sau 1/1/2000."<<endl;	
		}	
	}
}

//Ham in kieu du lieu ngay thang dang don gian dd/mm/yyyy
void date_printshort(DATE date)
{
	cout<<date.day<<"/"<<date.month<<"/"<<date.year<<endl;
}

void date_printlong(DATE date) //Ham in ngay thang kieu day du vd: Ngay 23, Thang Muoi Hai, Nam 2015
{
	string monthlong;
	switch (date.month)
	{
		case  1:
			monthlong="Thang Gieng";
			break;
		case  2:
			monthlong="Thang Hai";
			break;
		case  3:
			monthlong="Thang Ba";
			break;
		case  4:
			monthlong="Thang Tu";
			break;
		case  5:
			monthlong="Thang Nam";
			break;
		case  6:
			monthlong="Thang Sau";
			break;
		case  7:
			monthlong="Thang Bay";
			break;
		case  8:
			monthlong="Thang Tam";
			break;
		case  9:
			monthlong="Thang Chin";
			break;	
		case  10:
			monthlong="Thang Muoi";
			break;
		case  11:
			monthlong="Thang Muoi Mot";
			break;
		case  12:
			monthlong="Thang Muoi Hai";
			break;		
	}
	cout<<"Ngay "<<date.day<<", "<<monthlong<<", Nam "<<date.year;
}

int nhuan(int n) //Ham xac dinh nam nhuan
{
	if((n%4==0&&n%100!=0)||(n%400==0))
	return 1; else return 0; 
}

int no_of_date(DATE d) //Ham tra ve gia tri nguyen cua 1 ngay thang voi moc ban dau 1= 1/1/2000
{
	int n = 0;
	for(int i=2000;i<d.year;i++)
	{
		if(nhuan(i) == 1)
		{
			n += 366;
		}
		else
		{
			n += 365;
		}
	}
	for(int i=0; i<d.month; i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
		{
			n += 31;
		}
		
		if(i==4||i==6||i==9||i==11)
		{
			n += 30;	
		}
		
		if(i==2)
		{
			if(nhuan(d.year)==1)
			{
				n += 29;
			}
			else 
			{
				n += 28;
			}
		}	
	}
	n += d.day;
	return n;
}


