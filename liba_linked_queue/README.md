## 정적라이브러리 만들기
- 컴파일 시 liblqueue.a 파일을 실행파일에 실어서 파일용량이 크나 실행속도가 빠르다.

- 파일 구조<br>
![structure](./img/structure_linked.jpg)

### liblqueue.a 만들기
- g++ -Wall -g -o lqueue.o -c lqueue.cc
- ar rc liblqueue.a lqueue.cc

### liblqueue.a 가 링킹된 실행파일 만들기(*main.cc에서 #include "lib/lqueue.h"로 라이브러리 경로 추가*)
- g++ -Wall -g -o main.o -c main.cc 
- g++ -Wall -g -o main main.o L./lib -llqueue

### 정적라이브라리가 포함된 main.exe 파일크기확인<br>
![image](./img/data_size.jpg)
