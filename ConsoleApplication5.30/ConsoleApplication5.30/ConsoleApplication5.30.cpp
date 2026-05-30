#include <iostream>
#include"MyClass.h"
#include<string>
#include "MyAnimal.h"



namespace object
{


	class Animal final
	{
	public:

		Animal();
		//コンストラクタの宣言
		Animal(const char* name, int footNum);

	public:
		std::string   name_ = {};
		int           footNum_ = 0;

	};


	// コンストラクタの定義
	Animal::Animal()
	{
		std::cout << "コンストラクタが呼ばれました" << std::endl;
		name_ = "動物";
		footNum_ = 4;
	}

	Animal::Animal(const char* name, int footNum)
	{

		std::cout << "コンストラクタが呼ばれました" << std::endl;
		name_ = name;
		footNum_ = footNum;
	}

}


