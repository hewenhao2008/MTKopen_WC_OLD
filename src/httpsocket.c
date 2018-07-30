1 #include <sys/types.h>
2 #include <sys/socket.h>
3 #include <stdio.h>
4 #include <netinet/in.h>
5 #include <arpa/inet.h>
6 #include <unistd.h>
7 #include <string.h>
8 #include <stdlib.h>
9 #include <fcntl.h>
10 #include <sys/shm.h>

int Connect2Ser(char *HostAddr, int HostPort)
{
    // 定义socket
    int sockfd = socket(AF_INET,SOCK_STREAM,0);
    // 定义sockaddr_in
    struct sockaddr_in skaddr;
    skaddr.sin_family = AF_INET;
    skaddr.sin_port = htons(HostPort);
    skaddr.sin_addr.s_addr = inet_addr(HostAddr);

    
}
