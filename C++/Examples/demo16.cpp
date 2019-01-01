#include <iostream>
#include <string>

using namespace std;

float VolumeCube();
float VolumeSphere();
float VolumeCone();
void ThreeDArea(const char &,bool &);
const double PI = 3.1415;

int main(void)
{
	char ch = ' ';
	bool flag = 1;
	cout<<"Input Corresponding Number"<<endl;
	do
	{
		cout<<"[1] Volumes of Solids[2] Exit\n";
		cin>>ch;
		switch(ch)
		{
			case '1':
				do{
					cout<<"[1] Cube [2] Sphere [3] Cone [4] Cuboid [5] Return\n";
					cin>>ch;
					ThreeDArea(ch,flag);
				}while(flag);
				flag = 1;
				break;
			default:
				return 0;		
		}
	}while(flag);
	return 0;
}

float VolumeCube()
{
	unsigned L = 0;
	cout<<"Please Input length:\n";
	cin>>L;
	return L*L*L;
}


float VolumeSphere()
{
	unsigned R = 0;
	cout<<"Please Input radius:\n";
	cin>>R;
	return 4*PI*R*R*R/3;

}


float VolumeCone()
{
	unsigned R = 0, h = 0;
	cout<<"Please Input radius and height:\n";
	cin>>R>>h;
	return h*PI*R*R/3;
}


float VolumeCuboid()
{
	unsigned L = 0, W = 0, H = 0;
	cout<<"Please Input length:\n";
	cin>>L;
	cout<<"Please Input width:\n";
	cin>>W;
	cout<<"Please Input height:\n";
	cin>>H;
	return L*W*H;
}

void ThreeDArea(const char &ch,bool &flag)
{
	switch(ch)
	{
		case '1':
			cout<<"Volume:"<<VolumeCube()<<endl;
			break;
		case '2':
			cout<<"Volume:"<<VolumeSphere()<<endl;
			break;
		case '3':
			cout<<"Volume:"<<VolumeCone()<<endl;
			break;
		case '4':
			cout<<"Volume:"<<VolumeCuboid()<<endl;
			break;
		default:
			flag = 0;
	}
}


























