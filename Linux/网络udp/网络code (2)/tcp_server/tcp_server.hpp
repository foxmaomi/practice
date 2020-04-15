#ifndef _TCP_SERVER_H_
#define _TCP_SERVER_H_

#include <iostream>
#include <string>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>

class Server{
    private:
        std::string ip;
        short port;
        int sockfd;
    public:
        Server(std::string _ip, short _port)
            :ip(_ip), port(_port),sockfd(-1)
        {}
        void InitServer()
        {
            sockfd = socket(AF_INET, SOCK_STREAM, 0);
            if(sockfd < 0){
                std::cerr << "socket error!" << std::endl;
                exit(2);
            }
            struct sockaddr_in local;
            bzero(&local, sizeof(local));
            local.sin_family = AF_INET;
            local.sin_port = htons(port);
            local.sin_addr.s_addr = inet_addr(ip.c_str());

            if(bind(sockfd, &local, sizeof(local)) < 0){
                std::cerr << "bind error!" << std::endl;
                exit(3);
            }

            if(listen(sockfd, 5) < 0){
                std::cerr << "listen error!" << std::endl;
                exit(4);
            }
        }
        void Start()
        {
            for( ; ; ){
                struct sockaddr_in peer;
                socklen_t len = sizeof(peer);
                int fd = accept(sockfd, (struct sockaddr*)&peer, &len);
                if(fd < 0){
                    std::cerr << "accept error!" << std::endl;
                    continue;
                }

                //fd -> io 服务
            }
        }
        ~Server()
        {
            if(sockfd >= 0){
                close(sockfd);
            }
        }

};

#endif


