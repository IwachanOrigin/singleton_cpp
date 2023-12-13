
#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <string>

class Singleton {

public:
  static Singleton& getInstance();

  std::wstring getData() const { return m_wstr; }

private:
  // newで生成出来ないようにする
  explicit Singleton();
  ~Singleton() = default;

  // コピー出来ないようにする
  explicit Singleton(const Singleton &) = delete;
  // 代入出来ないようにする
  Singleton &operator=(const Singleton &) = delete;

  std::wstring m_wstr;
};

#endif // SINGLETON_H_

