## 함수 전방선언

#### __전방선언 전__ 
![ex14](./img/ex14_1.jpg)<br>

>
>컴파일 순서가 맨윗부터 시작하여 아래로 진행되는데, print_arguments 함수에 print_letters는 print_arguments 함수보다 뒤에 선언되어있으므로 컴파일러가 확인하지 못해 컴파일오류가 난다.
>

#### __전방선언 후__
![ex14](./img/ex14_2.jpg)<br>

>
>함수의 이름만 먼저 선언하여 컴파일러에게 print_letters 함수의 존재를 미리 알려주면 print_arguments에서 컴파일오류가 나지 않는다.<br>
>

## isalpha 와 isblank
![ex14_3](./img/ex14_3.jpg)<br>
- isalpha(ch) ch가 __대문자 알파벳__ 이면 return 1  소문자알파벳이면 __return 2__ 그렇지않으면 __return 0__ 
- 
