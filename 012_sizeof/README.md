## 배열의 크기 
-sizeof(변수명) : 변수가 몇 바이트인지 정수형으로 반환한다.<br>

>int areas[]={10,11,12,13,14};<br> 
>int형 변수가 총 5개가 있는 배열이므로 20byte를 차지하고 있다.<br>
>sizeof(areas)/sizeof(int)은 배열의 원소갯수인 5가 된다.<br>

## 문자열의 크기
-문자열은 마지막에 '\0'를 포함하고 있으므로 눈에 보이는 문자열보다 1byte 더 차지한다.<br> 

>char name[] = "ZED"; <br> 
>총 name배열은 총 4byte를 차지한다.<br> 
>sizeof(name)/sizeof(char)은 배열의 원소갯수인 4가 된다.<br> 

