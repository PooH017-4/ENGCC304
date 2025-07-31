## โจทย์
จงเขียนโปรแกรมรับค่าตัวเลขจากผู้ใช้ ใส่ไว้ในตัวแปร N และทำการแสดงข้อมูลดังเงื่อนไขต่อไปนี้
<br />- หากผู้ใช้กรอกเลขคี่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ 1 ถึง N และให้แสดงเฉพาะตัวเลขคี่เท่านั้น
<br />- หากผู้ใช้กรอกเลขคู่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ N ถึง 0 และให้แสดงเฉพาะตัวเลขคู่เท่านั้น


## FIX CODE
```c
#include <stdio.h>

int main()
{
    int N;
    printf("Enter number : ");
    scanf("%d", &N);
    
        if (N % 2 == 0) 
        {
            for (int i = N; i >= 0; i -= 2) {
                printf("%d", i);
            }               
        } else {
             for (int i = 1; i <= N; i += 2) {
                printf("%d", i);
            }
        }
        printf("\n");
        return 0; 
}

```

## TEST CASE
### Input
```bash
Enter value:
11
```
### Output
```bash
Series: 1357911
```

## TEST CASE
### Input
```bash
Enter value:
8
```
### Output
```bash
Series: 86420
```

