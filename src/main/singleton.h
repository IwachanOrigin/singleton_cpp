
/**
 * @date 8th Sep. 2020
 * Copyright (c) Yuji Iwanaga
 */

#ifndef SINGLETON_H
#define SINGLETON_H

#include <string>

class Singleton {

public:
    static Singleton &getInstance();

    std::wstring getData() { return m_wstr; }

private:
    // newで生成出来ないようにする
    Singleton();
    ~Singleton();

    // コピー出来ないようにする
    explicit Singleton(const Singleton &);
    // 代入出来ないようにする
    Singleton &operator=(const Singleton &);

    std::wstring m_wstr;
};

#endif
