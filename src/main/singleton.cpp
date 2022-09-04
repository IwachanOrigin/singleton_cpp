
/**
 * @date 8th Sep. 2020
 * Copyright (c) Yuji Iwanaga
 */

#include "singleton.h"

Singleton::Singleton() : m_wstr(L"Hello World.")
{
}

Singleton::~Singleton()
{
}

Singleton &Singleton::getInstance()
{
    static Singleton inst;
    return inst;
}
