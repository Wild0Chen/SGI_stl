#include "stdafx.h"
#include "Algorithm.h"



CAlgorithm::CAlgorithm(void)
{
}


CAlgorithm::~CAlgorithm(void)
{
}

void CAlgorithm::HeapMax(int* ary, const int& nSize, const int& i )
{
	int l = Left(i);
	int r = Right(i);
	int nLargest = i;
	if (l < nSize && ary[l] > ary[i])
		nLargest = l;
	if (r < nSize && ary[r] > ary[nLargest])
		nLargest = r;
	if (nLargest != i)
	{
		ary[i] ^= ary[nLargest];
		ary[nLargest] ^= ary[i];
		ary[i] ^= ary[nLargest];
		HeapMax(ary, nSize, nLargest);
	}
}

void CAlgorithm::BuildHeap( int* ary,const int& nSize )
{
	for(int i = (nSize - 1) /2; i >= 0; i--)
		HeapMax(ary, nSize, i);
}

void CAlgorithm::HeapSort(int* ary, const int& nSize )
{
	for (int i = nSize - 1; i > 0; i--)
	{
		ary[0] ^= ary[i];
		ary[i] ^= ary[0];
		ary[0] ^= ary[i];
		HeapMax(ary, i - 1, 0);
	}
}

int CAlgorithm::Left( const int& i )
{
	return (i + 1) * 2 - 1;
}

int CAlgorithm::Right( const int& i )
{
	return (i + 1) * 2;
}

int CAlgorithm::Parent( const int& i )
{
	return (i + 1) / 2;
}



