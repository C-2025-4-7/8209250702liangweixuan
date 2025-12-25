#include <iostream>
using namespace std;

void bubbleSort(int* arr, int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arrLen;
    cout << "请输入数组元素的个数：";
    cin >> arrLen;

    int* pArray = new(nothrow) int[arrLen];
    if (pArray == nullptr) {
        cout << "错误：内存分配失败！" << endl;
        return -1;
    }

    cout << "请输入" << arrLen << "个整数（空格分隔）：";
    int* pInput = pArray;
    for (int i = 0; i < arrLen; ++i) {
        cin >> *pInput;
        pInput++;
    }

    cout << "\n【排序前】" << endl;
    cout << "数组首元素指针地址：" << pArray << endl;
    cout << "数组元素（指针方式输出）：";
    int* pOutput = pArray;
    while (pOutput < pArray + arrLen) {
        cout << *pOutput << " ";
        pOutput++;
    }
    cout << endl;

    bubbleSort(pArray, arrLen);

    cout << "\n【排序后】" << endl;
    cout << "数组首元素指针地址：" << pArray << endl;
    cout << "数组元素（指针方式输出）：";
    pOutput = pArray;
    while (pOutput < pArray + arrLen) {
        cout << *pOutput << " ";
        pOutput++;
    }
    cout << endl;

    delete[] pArray;
    pArray = nullptr;

    return 0;
}