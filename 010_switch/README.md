## int main(int argc, char* argv[])
- $ ./ex10 Zed를 리눅스 터미널에 입력하게되면
>
> int argc=2<br>
> argv[0][0]=. argv[0][1]=/, argv[0][2]=e argv[0][3]=x 이런 식으로 행렬 argv[0]에 저장된다.<br>
> argv[1][0] = Z, argv=[1][1] = e, argv[1][2]= d 로 argv[1]에 저장된다<br>

##### return은 함수를 종료시킨다.<br>
##### break는 한 루프를 종료시킨다.<br>

## switch : 한 기준값을 두고 다양한 경우로 나눌 수 있다.
>for(i = 0; argv[1][i] != '\0'; i++)<br>
>char letter = argv[1][i];<br>
>switch(letter)<br>
>case : 'a'<br>
>  printf("a"); break;<br>
>case : 'b'<br>
>  printf("b"); break;<br>
 
- letter가 'a'이면 a를 출력하고 for문의 한 루프를 끝낸다.
