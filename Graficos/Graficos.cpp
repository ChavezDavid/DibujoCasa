// Graficos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#define GLEW_STATIC
#include "GL\glew.h"
#include "GLFW\glfw3.h"
#include <math.h>

#include <iostream>
using namespace std;

GLfloat red = 0.0f, green = 0.7f, blue = 1.0f;

//Aqui esta bien para cambiar los valores de las variables de mi programa
void actualizar() {
	/*if(red !=1) red += 0.001;
	if(green !=1 && red >= 1) green += 0.001;
	if(blue !=1 && red >= 1 && green >= 1) blue += 0.001;
	*/
}

void dibujarCasa() {

	glBegin(GL_TRIANGLES);//Inicia la rutina con un modo de dibujo

	//Techo
	glColor3f(0.88f, 0.68f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);

	glColor3f(0.88f, 0.68f, 0.0f);
	glVertex3f(0.3f, 0.2f, 0.0f);

	glColor3f(0.88f, 0.68f, 0.0f);
	glVertex3f(-0.3f, 0.2f, 0.0f);

	glEnd();

	//Pared
	glBegin(GL_POLYGON);

	glColor3f(0.92f, 0.92f, 0.544f);
	glVertex3f(-0.3f, 0.2f, 0.0f);

	glColor3f(0.92f, 0.92f, 0.544f);
	glVertex3f(0.3f, 0.2f, 0.0f);

	glColor3f(0.92f, 0.92f, 0.544f);
	glVertex3f(0.3f, -0.5f, 0.0f);

	glColor3f(0.92f, 0.92f, 0.544f);
	glVertex3f(-0.3f, -0.5f, 0.0f);

	glEnd();

	//Puerta
	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.1f, -0.2f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1f, -0.2f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1f, -0.5f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.1f, -0.5f, 0.0f);

	glEnd();

	glBegin(GL_LINE_STRIP);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, -0.2f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, -0.5f, 0.0f);

	glEnd();

	//Chapas
	glBegin(GL_POLYGON);

	glColor3f(0.8f, 0.8f, 0.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.01 * cos(i) - 0.014, 0.01 * sin(i) - 0.35, 0);
	}

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.8f, 0.8f, 0.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.01 * cos(i) + 0.013, 0.01 * sin(i) - 0.35, 0);
	}

	glEnd();

	//Ventanas
	glBegin(GL_POLYGON);

	glColor3f(0.212f, 0.78f, 1.0f);
	glVertex3f(0.1f, 0.1f, 0.0f);

	glColor3f(0.212f, 0.78f, 1.0f);
	glVertex3f(0.2f, 0.1f, 0.0f);

	glColor3f(0.212f, 0.78f, 1.0f);
	glVertex3f(0.2f, -0.1f, 0.0f);

	glColor3f(0.212f, 0.78f, 1.0f);
	glVertex3f(0.1f, -0.1f, 0.0f);

	glEnd();

	glBegin(GL_LINE_STRIP);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.15f, 0.1f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.15f, -0.1f, 0.0f);

	glEnd();

	glBegin(GL_LINE_STRIP);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.1f, 0.0f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.2f, 0.0f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.212f, 0.78f, 1.0f);
	glVertex3f(-0.1f, 0.1f, 0.0f);

	glColor3f(0.212f, 0.78f, 1.0f);
	glVertex3f(-0.2f, 0.1f, 0.0f);

	glColor3f(0.212f, 0.78f, 1.0f);
	glVertex3f(-0.2f, -0.1f, 0.0f);

	glColor3f(0.212f, 0.78f, 1.0f);
	glVertex3f(-0.1f, -0.1f, 0.0f);

	glEnd();

	glBegin(GL_LINE_STRIP);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.15f, 0.1f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.15f, -0.1f, 0.0f);

	glEnd();

	glBegin(GL_LINE_STRIP);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.1f, 0.0f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.2f, 0.0f, 0.0f);

	glEnd();
}

void dibujar() {

	//Sol
	glBegin(GL_POLYGON);

	glColor3f(0.8f, 0.8f, 0.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.13 * cos(i) + 0.8, 0.2 * sin(i) + 0.8, 0);
	}

	glEnd();

	//Suelo
	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex3f(-1.0f, -0.5f, 0.0f);

	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex3f(1.0f, -0.5f, 0.0f);

	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);

	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glEnd();

	//Nubes
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 1.0f, 1.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.35 * cos(i) - 1.0, 0.2 * sin(i) + 0.7, 0);
	}

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1.0f, 1.0f, 1.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.15 * cos(i) - 0.6, 0.1 * sin(i) + 0.8, 0);
	}

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1.0f, 1.0f, 1.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.15 * cos(i) - 0.6, 0.1 * sin(i) + 0.4, 0);
	}

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1.0f, 1.0f, 1.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.15 * cos(i) + 0.8, 0.1 * sin(i) + 0.7, 0);
	}

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1.0f, 1.0f, 1.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.2 * cos(i) + 0.6, 0.1 * sin(i) + 0.8, 0);
	}

	glEnd();

	//Arbol
	glBegin(GL_POLYGON);

	glColor3f(0.5f, 0.5f, 0.0f);
	glVertex3f(0.8f, 0.3f, 0.0f);

	glColor3f(0.5f, 0.5f, 0.0f);
	glVertex3f(0.85f, 0.3f, 0.0f);

	glColor3f(0.5f, 0.5f, 0.0f);
	glVertex3f(0.85f, -0.5f, 0.0f);

	glColor3f(0.5f, 0.5f, 0.0f);
	glVertex3f(0.8f, -0.5f, 0.0f);

	glEnd();

	//Hojas
	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.5f, 0.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.15 * cos(i) + 0.72, 0.15 * sin(i) + 0.0, 0);
	}

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.5f, 0.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.15 * cos(i) + 0.82, 0.15 * sin(i) + 0.2, 0);
	}

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.5f, 0.0f);
	for (float i = 0; i < 360; i++) {

		glVertex3f(0.15 * cos(i) + 0.92, 0.15 * sin(i) + 0.0, 0);
	}

	glEnd();

	//Casa
	dibujarCasa();
}

int main()
{
	//Declaracion de la ventana
	GLFWwindow *window;

	//Propiedades de la ventana
	GLfloat ancho = 1920;
	GLfloat alto = 1080;

	//Inicializacion de GLFW
	if (!glfwInit()) {
		//Si no se inicio bien, terminar la ejecucion
		exit(EXIT_FAILURE);
	}

	//Iniciar la ventana
	window = glfwCreateWindow(ancho, alto, "Graficos", NULL, NULL);
	//Verificar si se creo bien la ventana
	if (!window) {
		//Cerrar todos los procesos de GLFW
		glfwTerminate();
		//Termina ejecucion
		exit(EXIT_FAILURE);
	}

	//Establecer "window" como conexto
	glfwMakeContextCurrent(window);

	//Se trae las funciones de OpenGL moderno
	glewExperimental = true;
	//Inicializar GLEW
	GLenum glewError = glewInit();
	if (glewError != GLEW_OK) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	const GLubyte *version = glGetString(GL_VERSION);
	cout << "Version de OpenGL: " << version << endl;

	//Ciclo de dibujo
	while (!glfwWindowShouldClose(window)) {		
		//Establecer el area de render (viewport)
		glViewport(0, 0, ancho, alto);
		//Establecer el color con el que se limpia
		glClearColor(red, green, blue, 1);
		//Limpiar la pantalla
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		actualizar();
		dibujar();

		//Intercambio de buffers
		glfwSwapBuffers(window);
		//Buscar se�al de entrada
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}

