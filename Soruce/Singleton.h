#ifndef SINGLETON_H_
#define SINGLETON_H_

// �V���O���g���N���X
template<class T>
class Singleton 
{
public:
	static inline T& GetInstance() 
	{
		static T instance;
		return instance;
	}

protected:
	Singleton() {};
	virtual ~Singleton() {};

private:
	// �R�s�[�֎~
	void operator = (const Singleton& obj) {};
	Singleton(const Singleton& obj) {};


	static T* instane;
};

template<class T>
T* Singleton<T>::instane = 0;

#endif // !SINGLETON_H_
