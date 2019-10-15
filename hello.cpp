#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
 {
	// #ifndef ONLINE_JUDGE
 //        freopen("input.txt", "r", stdin);
 //        freopen("output.txt", "w", stdout);
 //    #endif
	int n,a1,a2,a3,c1,c2,c3;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a1>>a2>>a3>>c1>>c2>>c3;
		if(a1!=a2 && a2!=a3 && a3!=a1){
				if(a1>a2 && a1>a3)
		{
			if(c1>c2 && c1>c3)
			{
				if((a2>a3 && c2>c3)||(a2<a3 && c2<c3))
					cout<<"FAIR"<<endl;
				else
					cout<<"NOT FAIR"<<endl;
			}
			else
				cout<<"NOT FAIR"<<endl;
		}
		else if(a2>a1 && a2>a3)
		{
			if(c2>c1 && c2>c3)
			{
				if((a1>a3 && c1>c3)||(a1<a3 && c1<c3))
					cout<<"FAIR"<<endl;
				else
					cout<<"NOT FAIR"<<endl;
			}
			else
				cout<<"NOT FAIR"<<endl;
		}
		else if(a3>a1 && a3>a2)
		{
			if(c3>c2 && c3>c1)
			{
				if((a2>a1 && c2>c1)||(a2<a1 && c2<c1))
					cout<<"FAIR"<<endl;
				else
					cout<<"NOT FAIR"<<endl;
			}
			else
				cout<<"NOT FAIR"<<endl;
		}
	}
		else if(a1==a2 && a2==a3 && a3==a1)
		{
			if(c1==c2 && c2==c3 & c3==c1)
				cout<<"FAIR"<<endl;
			else
				cout<<"NOT FAIR"<<endl;
		}
		else if(a1==a2)
		{
			if(c1==c2)
			{
			if((a2>a3 && c2>c3)||(a2<a3 && c2<c3))
				cout<<"FAIR"<<endl;
			else
				cout<<"NOT FAIR"<<endl;
		}
		else
		{
			cout<<"NOT FAIR"<<endl;
		}
		}
		else if(a2==a3)
		{
			if(c2==c3)
			{
			if((a2>a1 && c2>c1)||(a2<a1 && c2<c1))
				cout<<"FAIR"<<endl;
			else
				cout<<"NOT FAIR"<<endl;
		}
		else
			cout<<"NOT FAIR"<<endl;
	}
		else if(a3==a1)
		{
			if(c3==c1){
			if((a3>a2 && c3>c2)||(a3<a2 && c3<c2))
				cout<<"FAIR"<<endl;
			else
				cout<<"NOT FAIR"<<endl;}
			else
				cout<<"NOT FAIR"<<endl;
		}
	}
}