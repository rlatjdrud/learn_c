## 배열과 문자열
- 1. 문자열을 선언하는 방법
>
>char name[4]={'z','e','d','\0'}; <br>
>'\0' : 

- 2. 문자열을 선언하는 방법 <br>
>
>char * name = "zed";<br>
>name이라는 포인터 변수에 z의 주소가 저장된다.<br>
>name[0]=z, name[1]=e, name[2]=d, name[3]='\0'으로 저장된다.<br>
>name이 포인터 이므로 *(name+0)=z,*(name+1)=e,*(name+2)=d,*(name+3)='\0'으로 저장된다.<br>

- 3. 문자열을 선언하는 방법;<br>
>
> char name[4] = "zed";<br>
>

### 문자열 출력하기<br>
printf("%s",name);<br>
