#ifndef COMMONFUNCTION_H
#define COMMONFUNCTION_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#define STB_IMAGE_IMPLEMENTATION
//#include "stb_image.h"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Shader.h"
#include "Camera.h"
#include "model.h"

#include <iostream>
#include "EngineEditor.h"

#pragma once
class CommonFunction
{
private:
	// ���乹���������Ϊ˽�е�, ��ֹ�ⲿ���������
	CommonFunction();
	~CommonFunction();

	// ���俽������͸�ֵ�����Ϊ˽�к���, ��ֹ�ⲿ�����͸�ֵ
	CommonFunction(const CommonFunction& signal);
	const CommonFunction& operator=(const CommonFunction& signal);

	// Ψһ��ʵ������ָ��
	static CommonFunction* m_CommonFunction;

public:

	// ��ȡ��ʵ��
	static CommonFunction* GetInstance();

	// �ͷŵ�ʵ���������˳�ʱ����
	static void deleteInstance();

	//Parameters
	GLFWwindow* window;

	Camera camera;

	void UIRuningMainLoop();
	void CleanupEditorUI();
	void RenderEditorUI();
	//void TransformEditorUI();

	void processInput(GLFWwindow* window);
	//load normal 2d texture
	unsigned int loadTexture(char const* path);
	//load Cube map texture
	unsigned int loadCubemap(vector<std::string> faces);
	GLFWwindow* GetWindow();
	Camera GetCamera();
	EngineEditor engineEditor;

	float GetLastX();
	float GetLastY();
	float GetDeltaTime();
	void SetDeltaTime(float value);
	float GetLastFrame();
	void SetLastFrame(float value);
	float GetSCR_WIDTH();
	float GetSCR_HEIGHT();

};

#endif

