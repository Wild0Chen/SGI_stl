#pragma once
#include "new"
#include "cstddef"
#include "cstdlib"
#include "climits"
#include "iostream"

class CAlgorithm
{
public:
	CAlgorithm(void);
	~CAlgorithm(void);
	
	//∂—≈≈–Ú
	void HeapMax(int* ary, const int& nSize, const int& i);
	void BuildHeap(int* ary,const int& nSize);
	void HeapSort(int* ary, const int& nSize);
	int Left(const int& i);
	int Right(const int& i);
	int Parent(const int& i);

};


namespace CJ
{
	template<class T>
	inline T* _allocate(ptrdiff_t size, T*)
	{
		set_new_handler(0);
		T* tmp = (T*) (::operator new ((size_t)(size * sizeof(T))));
		if (0 == tmp)
		{
			cerr << "out of memory" <<endl;
			exit(1);
		}
		return tmp;
	}

	template<class T>
	inline void _deallocate(T* buffer)
	{
		::operator delete(buffer);
	}

	template<class T1, class T2>
	inline void _construct(T1* p, const T2& value)
	{
		new(p) T1(value);//??
	}

	template <class T>
	inline void _destroy(T* ptr)
	{
		ptr->~T();
	}

	template <class T>
	class allocator
	{
	public:
		typedef T vlaue_type;
		typedef T* pointer;
		typedef const T* const_point;
		typedef T& reference;
		typedef const T& const_reference;
		typedef size_t size_type;
		typedef ptrdiff_t difference_type;

		template<class U>
		struct rebingd
		{
			typedef allocator<U> other;
		};

		pointer allocate(size_type n, const void* s = NULL)
		{
			return _allocate((difference_type)n, (T*)NULL);
		}

		void deallocate(pointer p, size_type n)
		{
			_deallocate(p);
		}

		void construct(pointer p,const T& value)
		{
			_construct(p, value);
		}

		void destroy(pointer p){_destroy(p);}
		pointer address (reference x){return (pointer)&x;}
		const_point const_address(reference x){return (const_point)&x;}
		size_type max_size()const
		{
			return size_type(UINT_MAX/sizeof(T));
		}
	};
}