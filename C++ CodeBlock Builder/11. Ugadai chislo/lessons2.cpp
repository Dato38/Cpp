//Игра "Угадай число" Мы пытаемся отгадать число у компа
/*#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main (){

	srand(time(0));
	bool done;
	do{
		int j, i=rand()%100;
		while (true){
        		cout<<"Kakoe chislo vi zagadali?";
			cin>>j;
			if(i>j){
				cout<<"Moe chislo bolshe"<<endl;
			}
			else{
				if(i<j){
					cout<<"Moe chislo menshe"<<endl;
				}
				else{
					cout<<"Ti ugadal"<<endl;
					break;
				}
			}
		}
		cout<<"Prodoljit? (y/n) ";
		char c;
		done=(c!='y');
		cin>>c;
	}while(!done);
}*/
// Игра "Угадай число", наоборот комп, пытается угадать у нас число
#include<iostream>
#include<cmath>

using namespace std;

float f(float x){
	cout<<(int)x<<endl;
	while (true){
		cout<<"Pravilno? (+/-/=) ";
		char c;
		cin>>c;
		switch (c){
			case '+': return +1;
			case '-': return -1;
			case '=': return 0;
		}
		cout<<"vi vveli ne pravilni simbol, povtorite"<<endl;
	
	}
}
	float n(float x1, float x2){
		float x=(x1+x2)/2;
		float y=f(x);
		while(abs(y)>0.001){
			if(y>0){
				x1=x;
			}else{
				x2=x;
			}
			x=(x1+x2)/2;
			y=f(x);
		}
		return x;
	}

int main(){
	
	cout<<"vi zagadali "<< (int)n(0,100);

}
