#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

#include <stdio.h>
#include <stdlib.h>


//ϣ������
void ShellSort(int* arr, int size)
{
    int gap = size;
    while (gap > 1)
    {
        gap = gap / 3 + 1;	//����ϣ������
        int i = 0;
        for (i = 0; i < size - gap; i++)	//��0������size-gap-1
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
            arr[end + gap] = temp;	//�� end+gap ��Ϊ����λ��
        }
    }
}

