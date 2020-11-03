 #include<stdio.h>
 #include <sys/types.h>
 #include <unistd.h>
int main(int argc,char const * argv[])
{
pid_t id;
pid_t parent_id;

       id=getpid();
       parent_id=getppid();
       printf("pid:%d",id);
       printf("ppid:%d",parent_id);
       return 0;
       }


