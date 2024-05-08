/*
First run server.c by gcc server.c -o server
then run server by ./server
After that start client by  gcc client.c -o client
then run client by ./client
*/
#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<netdb.h>
#include<unistd.h>


int main()
{
    int serversocket,clinetsocket,port;
    struct sockaddr_in serveradder,clinetaddr;
    socklen_t len;
    char message[50];
    int numberReceived;
    serversocket=socket(AF)
}