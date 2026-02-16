#include <cstdio>
using namespace std;
int main()
{
    int arr[5] = {};
    int sum = 0;
    for (int i = 0; i < 5; i++) {

        printf("enter the marks of student %d : ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = sum / 5;
    for (int k = 0; k < 5; k++) {
        if (arr[k] > avg){
            printf("this student is real gem %d", arr[k]);
        }
    }

    return 0;
}