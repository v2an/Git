#include <iostream>
#include "stdlib.h"

void Swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


void InsertSort(int* ArrayQ, int first, int last)
{
    int temp, pos;
    int len = last - first + 1;
    for (int i = 1; i < len; i++)
    {
        temp = ArrayQ[i];
        pos = i - 1;
        while (pos >= 0 && ArrayQ[pos] > temp)
        {
            ArrayQ[pos + 1] = ArrayQ[pos];
            pos--;
        }
        ArrayQ[pos + 1] = temp;
    }
}

int median(int* arr, int first, int last)
{
    int fir = arr[first];
    int las = arr[last];
    int Q = (first + last) / 2;
    int mid = arr[Q];
    //std::cout << fir << " [" << first << "] " << mid << " [" << Q << "] " << las << " [" << last << "] " << std::endl;
    if ((fir < mid && mid < las) || (fir > mid && mid > las))
        return Q;
    if ((fir > mid && fir < las) || (fir < mid && fir > las))
        return first;
    if ((las > mid && las < fir) || (las < mid && las > fir))
        return last;
}


/*
void AmpQuickSort1(int* ArrayQ, int first, int last)
{
    int i = first;
    int j = last;
    int Q = (first + last) / 2;
    int x = ArrayQ[Q];
    do
    {
        while (ArrayQ[i] < x) i++;
        while (ArrayQ[j] > x) j--;
        if (i <= j)
        {
            Swap(&ArrayQ[i], &ArrayQ[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if (i < last)
    {
        AmpQuickSort1(ArrayQ, i, last);
    }
    if (first < j)
    {
        AmpQuickSort1(ArrayQ, first, j);
    }
}
*/

void AmpQuickSort1(int* ArrayQ, int first, int last)
{
    if ((last - first) > 10)
    {
        int i = first;
        int j = last;
        int Q = (first + last) / 2;
        //int med = median(ArrayQ, first, last);
        //std::cout << med << std::endl;
        //Swap(&ArrayQ[med], &ArrayQ[Q]);
        int x = ArrayQ[(first + last) / 2];
        do
        {
            while (ArrayQ[i] < x) i++;
            while (ArrayQ[j] > x) j--;
            if (i <= j)
            {
                Swap(&ArrayQ[i], &ArrayQ[j]);
                i++;
                j--;
            }
        } while (i <= j);

        if (i < last)
        {
            AmpQuickSort1(ArrayQ, i, last);
        }
        if (first < j)
        {
            AmpQuickSort1(ArrayQ, first, j);
        }
    }
    else
    {
        InsertSort(ArrayQ, first, last);
    }
}

//===============================================================================

int* ArrayX1InitR(int len)
{
    srand(time(0));
    int* temp = new int[len];
    for (int i = 0; i < len; ++i)
    {
        temp[i] = rand() % 100;
    }
    return temp;
}

void PrintX1Array(int* ArrayTPK, int len)
{
    for (int j = 0; j < len; j++)
    {
        std::cout << " | " << ArrayTPK[j];
    }
    std::cout << " |" << std::endl << std::endl;
}


void BuckerSort(int* ArrExrs2, int len)
{
    const int maxBucket = len;
    const int ArrDeep = 31;
    const int b = 10;
    int buckets[b][ArrDeep];
    int indexArr[30];
    int IndCount = 0;
    for (int i = 0; i < b; i++)
    {
        buckets[i][maxBucket] = 0;
    }

    for (int digit = 1; digit < 1000; digit = digit * 10)
    {
        for (int i = 0; i < maxBucket; i++)
        {
            if (ArrExrs2[i] % 2 == 0)
            {
                int d = (ArrExrs2[i] / digit) % b;
                int counter = buckets[d][maxBucket];
                buckets[d][counter] = ArrExrs2[i];
                if (digit == 1)
                {
                    indexArr[IndCount] = i;
                    std::cout << indexArr[IndCount] << " | ";
                    IndCount++;
                }
                counter++;
                buckets[d][maxBucket] = counter;
            }
        }
        std::cout << std::endl;
        int idx = 0;
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < buckets[i][maxBucket]; j++)
            {
                ArrExrs2[indexArr[idx++]] = buckets[i][j];
            }
            buckets[i][maxBucket] = 0;
        }
    }
}


int main()
{
    std::cout << "Exrsz 1" << std::endl;
    const int SIZE1 = 30;
    int ArrExrs1[30];
    srand(time(0));
    for (int i = 0; i < SIZE1; ++i)
    {
        ArrExrs1[i] = rand() % 100;
    }
    //int* ArrExrs1 = ArrayX1InitR(SIZE1);
    PrintX1Array(ArrExrs1, SIZE1);
    AmpQuickSort1(ArrExrs1, 0, SIZE1 - 1);
    PrintX1Array(ArrExrs1, SIZE1);


    
    //=============================
    std::cout << "Exrsz 2" << std::endl;
	const int SIZE = 30;
	int* ArrExrs2 = ArrayX1InitR(SIZE);
    PrintX1Array(ArrExrs2, SIZE);
    BuckerSort(ArrExrs2, SIZE);
    PrintX1Array(ArrExrs2, SIZE);
    
}
