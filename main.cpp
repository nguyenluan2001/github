#include<iostream>
using namespace std;
void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void xuatmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
void phanturiengbiet(int a[],int n,int b[],int &m)
{
	m=0;
	b[m]=a[0];
	m++;
	for(int i=1;i<n;i++)
	{
		int dem=0;

		for(int j=i-1;j>=0;j--)
		{
			if(a[i]==a[j])
			{
				dem++;
			}
		}
		if(dem==0)
		{
			b[m]=a[i];
			m++;
		}
	}
}
void tansuat(int a[],int n,int b[],int m)
{
	for(int i=0;i<m;i++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				dem++;
			}
		}
		cout<<"so lan xuat hien "<<b[i]<<"la: "<<dem<<endl;
	}
}

int main()
{
	int a[100];
	int n;
	int b[100];
	int m;
	cout<<"so luong phan tu mang: ";
	cin>>n;
	cout<<"			nhap mang"<<endl;
	nhapmang(a,n);
	cout<<endl;
	cout<<"			xuat mang"<<endl;
	xuatmang(a,n);
	cout<<endl;
    phanturiengbiet(a,n,b,m);
   tansuat(a,n,b,m);
	return 0;
}

