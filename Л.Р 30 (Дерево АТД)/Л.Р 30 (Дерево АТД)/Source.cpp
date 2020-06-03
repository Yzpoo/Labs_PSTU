#include <glut.h>
#include "Tree.h"
#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;
int winW = 1920;
int winH = 1080;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	glutInit(&argc, argv);
	cout << "Кнопка '+' добавляет элемент в дерево, если такового нет, если он есть, то удаляет его из дерева." << endl;
	cout << "Кнопка '-' удаляет заданный элемент из дерева, если он существует." << endl;
	cout << "Отрисовка сбалансированного дерева размером 7" << endl;

	drawTree(winW, winH, 5, 7);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(winW, winH);
	glutCreateWindow("Бинарное дерево отрисовка Open GL");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutPassiveMotionFunc(mouseMove);
	glutMouseFunc(mouseClick);
	glutMainLoop();


}