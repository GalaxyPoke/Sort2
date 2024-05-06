#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

#include <stdio.h>
#include <stdlib.h>


//希尔排序
void ShellSort(int* arr, int size)
{
    int gap = size;
    while (gap > 1)
    {
        gap = gap / 3 + 1;	//调整希尔增量
        int i = 0;
        for (i = 0; i < size - gap; i++)	//从0遍历到size-gap-1
        {
            int end = i;
            int temp = arr[end + gap];
            while (end >= 0)
            {
                if (arr[end] > temp)
                {
                    arr[end + gap] = arr[end];
                    end -= gap;
                }
                else
                {
                    break;
                }
            }
            arr[end + gap] = temp;	//以 end+gap 作为插入位置
        }
    }
}

