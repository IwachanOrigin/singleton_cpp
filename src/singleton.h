
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
    Singleton();
    ~Singleton();

    explicit Singleton(const Singleton &);
    Singleton &operator=(const Singleton &);

    std::wstring m_wstr;
};

#endif
