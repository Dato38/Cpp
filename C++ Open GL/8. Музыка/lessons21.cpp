#include <GL/glut.h>
#include <iostream>
using namespace std;
/*void display(){
        glClear(GL_COLOR_BUFFER_BIT);
        glutSwapBuffers();
}
void timer(int=0){
}
int main(int argc, char **argv){
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
        glutInitWindowSize(852, 480);
        glutInitWindowPosition(0, 86);
        glutCreateWindow("sprite");
        glClearColor(0, 0, 0, 1.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0, 852, 480, 0, -1, 1);
        glutDisplayFunc(display);
        timer();
        glutMainLoop();
}*/
int main(){
        for(int i=0; i<5*44100; ++i){
                int16_t a=i%(44100/220)>110 ? 32000 : -32000;
                cout.write((const char *)&a, sizeof(a));
        }
}


