// Рисуем графики с помощью двухмерных массивов
#include<iostream>
#include<cmath>

using namespace std;

int main(){

        const int H=15;
        const int W=56;
        char N[15][96];
        for (int y=0; y<H; ++y){
                for (int x=0; x<W; ++x){
                        N[y][x]='C';
                }
		for (int x=0; x<W; ++x){
			//int y = H-x*x*H/(W*W); //график пораболы
			int y = (sin(1.0*x*2*M_PI/W)+1)/2*H; //график синуса
			if ((y>=0) && (y<H)){
				N[y][x]='*';
			}
		}
        }
        for (int y=0; y<H; ++y){
                for (int x=0; x<W; ++x){
                        cout<<N[y][x];
                }
                cout<<endl;
        }

}

