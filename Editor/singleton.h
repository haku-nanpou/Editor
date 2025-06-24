//-----------
//
// singleton.h
//
//-----------
#ifndef SINGLETON_H
#define SINGLETON_H

// CRTPなシングルトン基底クラス
template<typename Derived>
class Singleton
{
public:
    // インスタンス取得
    static inline Derived& instance()
    {
        static Derived instance;
        return instance;
    }

    // コピー禁止
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // ムーブ禁止
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;

protected:
    Singleton() = default;
    ~Singleton() = default;
};

#endif