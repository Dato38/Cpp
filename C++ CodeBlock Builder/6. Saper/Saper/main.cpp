#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;
ifstream in("input.txt");
ofstream out("output.txt");
int main()
{

    char massive[10][10]={
            {'.','.','.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.','.','.'}
            };
    time_t now = time(NULL);
    srand(now);
    int x, y;
    for (int i=0; i<10; ){
        x = rand()%10;
        y = rand()%10;
        if (massive[x][y]=='*'){
            continue;
        }
        else {
            massive[x][y] ='*';
        }
       i++;
    }
    for (int i=0; i<10; i++){
        for (int j=0;j<10;j++)
        cout << massive[i][j] << " ";
        cout << endl;
    }

    return 0;
}
