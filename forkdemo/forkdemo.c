#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int count=0;
int main(int argc,char const *argv[])
{
pid_t id;
printf("before fork\n");
id=fork();
printf("after fork id\t PID\t PPID:%d %d %d\n",id ,getpid(),getppid());
if(0 == id)
{
printf("in child pid=%d\t ppid=%d\t",getpid() ,getppid());
printf("count in child %d\n",count);
}
else
{
count++;
printf("in parent pid=%d\t ppid=%d\t",getpid() ,getppid());
printf("count in parent %d\n",count);
}
return 0;
}
