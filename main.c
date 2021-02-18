#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

#include "list.h"

#define PORT 7890
#define BUFFER_SIZE 1023

int main(void)
{
    struct session_list *list = NULL;
    int res = 0;
    int fd = 0;

    system("clear");
    printf("1 - Create \n2 - Add element\n3 - Delete element\n4 - Print list\n5 - Exit\n");
    printf("--------------\n");
    printf("[welcome =)]\n");
    printf("--------------\n > ");

    while (1) {
        scanf("%d", &res);
        switch (res) {
            case 1:
                list = create_session_list();
                system("clear");
                printf("1 - Create list\n2 - Add element\n3 - Delete element\n4 - Print list\n5 - Exit\n");
                printf("--------------\n");
                printf("[List created]\n");
                printf("--------------\n > ");
                break;
            case 2:
                system("clear");
                printf("1 - Create list\n2 - Add element\n3 - Delete element\n4 - Print list\n5 - Exit\n");
                printf("--------------\n");
                printf("[Enter number]\n");
                printf("--------------\n > ");
                scanf("%d", &fd);
                add_fd(fd, list);
                system("clear");
                printf("1 - Create list\n2 - Add element\n3 - Delete element\n4 - Print list\n5 - Exit\n");
                printf("--------------\n");
                printf("[Element added]\n");
                printf("--------------\n > ");
                break;
            case 3:
                system("clear");
                printf("1 - Create list\n2 - Add element\n3 - Delete element\n4 - Print list\n5 - Exit\n");
                printf("--------------\n");
                printf("[Enter number]\n");
                printf("--------------\n > ");
                scanf("%d", &fd);
                delete_fd(fd, list);
                system("clear");
                printf("1 - Create list\n2 - Add element\n3 - Delete element\n4 - Print list\n5 - Exit\n");
                printf("--------------\n");
                printf("[Element deleted]\n");
                printf("--------------\n > ");
                break;
            case 4:
                system("clear");
                printf("1 - Create list\n2 - Add element\n3 - Delete element\n4 - Print list\n5 - Exit\n");
                printf("--------------\n");
                print_list(list);
                printf("--------------\n");
                printf(" > ");
                break;
            case 5:
                delete_list(&list);
                exit(0);
            default:
                system("clear");
                printf("1 - Create list\n2 - Add element\n3 - Delete element\n4 - Print list\n5 - Exit\n");
                printf("--------------\n");
                printf("[welcome =)]\n");
                printf("--------------\n > ");
        }
    }
    return 0;
}