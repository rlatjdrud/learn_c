# 이것은 디버깅 예제 코드입니다.

gdb 실행파일 : 먼저 디버깅 모드로 실행파일을 실행한다.

그 후

## 브레이크포인트 저징하기
|명령어|실행내용|
|:-:|:-:|
|b main()|메인함수를 브레이크포인트로 지정 main()말고 다른 함수를 넣어도 됨.|
|b 20|20번째 줄을 브레이킹 포인트로 지정.|
|b ex3_crash.c func|ex3_crash.c라는 파일에 func이라는 함수를를 브레이크포인트로 지정|
|b ex3_crash.c 20|ex3_crash.c라는 파일에 20번째 줄을 브레이크 포인트로 지정.|
|b +5|현재 줄에서 2줄 아래에 브레이크 포인트 지정|
|b -5|현재 줄에서 2줄 위에 브레이크 포인트 지정|

## 브레이크포인트 해제하기
|명령어|실행내용|
|:-:|:-:|
|cl main()|메인함수dml 브레이크포인트로 해제|
|cl 20|20번째줄 브레이크 포인트 해제|
|d|모든브레이크 포인트 삭제|
|d 1|1번 브레이크 포인트 삭제|
