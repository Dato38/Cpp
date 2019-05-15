/*
Клавиатура.Для данной буквы английского алфавита
нужно вывести справа стоящую букву на стандартной
клавиатуре. При этом клавиатура замкнута, т.е.
справа от буквы «p» стоит буква «a», от буквы «l»
стоит буква «z», а от буквы «m» — буква «q».
Входной файл INPUT.TXT содержит один символ —
маленькую букву английского алфавита.
В выходной файл OUTPUT.TXT следует вывести букву
стоящую справа от заданной буквы, с учетом
замкнутости клавиатуры.
*/
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
ifstream in("input.txt");
ofstream out("output.txt");
int main()
{

    const char massive=26;
    char a[massive]={
        'q','w','e','r','t','y','u','i','o','p','a',
        's','d','f','g','h','j','k','l','z','x','c',
        'v','b','n','m'
    };
    char symbol;
    in>>symbol;

    if(symbol=='m'){
        out<<a[0];
    }
    else{
        for(int i=0; i<massive; i++){
            if(symbol==a[i]){
                out<<a[i+1];
            }

        }
    }

    return 0;
}
