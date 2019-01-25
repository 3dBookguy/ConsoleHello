// ConsoleHello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//Note: Including <glm / glm.hpp> and <glm / ext.hpp> is convenient 
//but pull a lot of code which will significantly increase build time,
//particularly if these files are included in all source files.We may
//prefer to use the approaches describe in the two following sections
//to keep the project build fast. 1.2.Using separated headers GLM
//relies on C++ templates heavily, and may significantly increase
//compilation times for projects that use it.Hence, user projects
//could only include the features they actually use.Following is the
//list of all the core features, based on GLSL specification, headers :

//#include <glm/glm.hpp>
#include <glm/vec2.hpp> 
#include <glm/vec3.hpp> 
#include <glm/mat4x4.hpp>         // mat4
// perspective, translate, rotate 
#include <glm/trigonometric.hpp>  //radians 
#include <glm/ext/matrix_transform.hpp> 
#include <glm/ext/matrix_clip_space.hpp>
//#include <glm/ext.hpp> 
//C:\Users\pstan\source\lib\glm-0.9.9.3\glm\ext\matrix_clip_space.hpp
// Include GLM extension #include <glm/ext/matrix_transform.hpp> // perspective, translate, rotate 
int main()
{
	glm::vec2 vec;
	glm::mat3 n;
	vec.x = 3.0f;
	glm::mat4 Proj = glm::perspective(glm::radians(45.f), 1.33f, 0.1f, 10.f);
    std::cout << "Hello World!  go go go\n"; 

	std::cout << "Hello World!  go go go dev dev dev \n";
}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
