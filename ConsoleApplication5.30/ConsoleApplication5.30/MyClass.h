#pragma once
class MyClass
{
 public: // アクセス指定子の記述により、ここから
    void functionA();
    void functionB();
    int valueA = 0;
    // ここまで公開されている

 private: // 新しいアクセス指定子の記述により、ここから
    int valueB = 0;
    // ここまで非公開となり、自クラス内でのみ利用出来る
};

