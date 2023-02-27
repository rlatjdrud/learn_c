#ifndef __dbg_h__
#define __dbg_h__

#include <stdio.h>
#include <errno.h>
#include <string.h>

#ifdef NDEBUG
#define debug(M, ...)
#else
#define debug(M, ...) fprintf(stderr,"DEBUG %s:%d: " M " %d\n", __FILE__, __LINE__, ##__VA_ARGS__)
#endif 

#define clean_errno() (errno ==0 ? "None" : strerror(errno))

#define log_err(M, ...) fprintf(stderr,"[ERROR] (%s:%d: errno: %s) " M "\n",__FILE__,__LINE__,clean_errno(),##__VA_ARGS__)
// 무슨오류인지를 M 문자열과 함께 오류메세지로 출력시키는 매크로

#define log_warn(M, ...) fprintf(stderr,"[WARN] (%s:%d: errno: %s) " M "\n",__FILE__,__LINE__,clean_errno(),##__VA_ARGS__)
// 무슨경고인지를 M 문자열과 함께 경고메세지로 출력시키는 매크로

#define log_info(M, ...) fprintf(stderr, "[INFO] (%s:%d) " M "\n",__FILE__,__LINE__, ##__VA_ARGS__)

#define check(A, M, ...) if(!(A)) {log_err(M,##__VA_ARGS__); errno=0; goto error;}
// A 명제가 거짓이면 M 문자열과 함께 무슨오류인지 출력하고 goto문으로 가서 메인함수를 바로 끝낸다.

#define sentinel(M, ...) {log_err(M, ##__VA_ARGS__); errno=0; goto error;}
// 무슨오류인지를 M문자열과 함께 오류메세지로 출력시키고 메인함수를 종료시키는 매크로
//log_err+메인함수 종료인 매크로

#define check_mem(A) check((A), "Out of memory.")
//A의 메모리가 제대로 할당되지않았다면 check 매크로를 이용해 오류메시지를 출력하고 메인함수를 바로끝낸다.

#define check_debug(A,M, ...) if(!(A)) {debug(M, ##__VA_ARGS__); errno=0; goto error;}

#endif

