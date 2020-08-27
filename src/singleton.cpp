
/**
 *
 *
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
