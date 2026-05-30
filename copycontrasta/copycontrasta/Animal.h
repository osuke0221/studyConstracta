#pragma once
#include<iostream>
#include <string>
class Animal final
{
public:
    // デストラクタの宣言
    ~Animal();

public:
    std::string     name_ = {};
    int             footNum_ = 0;
};

// デストラクタの定義
Animal::~Animal()
{
    std::cout << "デストラクタが呼ばれました" << std::endl;

    name_ = "破棄済み";
    footNum_ = 0;
}

