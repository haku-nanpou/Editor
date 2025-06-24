//-----------
//
// singleton.h
//
//-----------
#ifndef SINGLETON_H
#define SINGLETON_H

// CRTP�ȃV���O���g�����N���X
template<typename Derived>
class Singleton
{
public:
    // �C���X�^���X�擾
    static inline Derived& instance()
    {
        static Derived instance;
        return instance;
    }

    // �R�s�[�֎~
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // ���[�u�֎~
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;

protected:
    Singleton() = default;
    ~Singleton() = default;
};

#endif