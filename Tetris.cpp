#include<iostream>
using namespace std;

int nScreenWidth = 80;			
int nScreenHeight = 30;	
wstring tetromino[7];
int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char *pField = nullptr;

int Rotate(int px, int py, int r)
{
	int pi = 0;
	switch (r % 4)
	{
	case 0: // 0 degrees			
		pi = py * 4 + px;			
		break;						
									

	case 1: // 90 degrees			
		pi = 12 + py - (px * 4);	
		break;						
									

	case 2: // 180 degrees			
		pi = 15 - (py * 4) - px;	
		break;						
									

	case 3: // 270 degrees			
		pi = 3 - py + (px * 4);		
		break;						
	}								

	return pi;
}

int main(){

    //blocks

    //block 1
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    //block 2
    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L".X..");
    tetromino[1].append(L"....");

    //block 3
    tetromino[2].append(L".X..");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"..X.");
    tetromino[2].append(L"....");

    //block 4
    tetromino[3].append(L"....");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L"....");

    //block 5
    tetromino[4].append(L"..X.");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"....");

    //block 6
    tetromino[5].append(L"....");
    tetromino[5].append(L".XX.");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");

    //block 7
    tetromino[6].append(L"....");
    tetromino[6].append(L".XX.");
    tetromino[6].append(L".X..");
    tetromino[6].append(L".X..");
}
