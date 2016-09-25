#include <GL/glut.h>
#include <math.h>


void DrawCircle(float cx, float cy, float r, int num_segments)
{
    glBegin(GL_LINE_LOOP);
    for(int ii = 0; ii < num_segments; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

        float x = r * cosf(theta);//calculate the x component
        float y = r * sinf(theta);//calculate the y component

        glVertex2f(x + cx, y + cy);//output vertex

    }
    glEnd();
    //float x2,y2;
	//float angle;
	 
	
	//glColor3f(1.0,1.0,0.6);
	 
	//glBegin(GL_TRIANGLE_FAN);
	//glVertex2f(cx,cy);
	 
	//for (angle=1.0f;angle<361.0f;angle+=0.2)
	//{
		//x2 = cx+sin(angle)*r;
		//y2 = cy+cos(angle)*r;
		//glVertex2f(x2,y2);
	//}
	 
	//glEnd();
}
void Draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

   
       glColor3f(0.0, 0.0, 0.0);
       
      DrawCircle(0.5, 0.5, 0.1, 360);

    glEnd();

    glFlush();
}



void Initialize() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(950, 500);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Universum");
    Initialize();
    glutDisplayFunc(Draw);
    glClear(GL_COLOR_BUFFER_BIT);
   
   

    glutMainLoop();
    return 0;

}
