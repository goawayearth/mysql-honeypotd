#ifndef GLOBALS_H
#define GLOBALS_H

#include <stdint.h>
#include <sys/types.h>

struct globals_t {
    struct ev_loop* loop;
    char** bind_addresses;
    char* bind_port;
    char* ip;
    int port;
    char* server_ver;
    int* sockets;
    size_t nalloc;
    size_t nsockets;
    int delay;
    uint32_t thread_id;
#ifndef MINIMALISTIC_BUILD
    char* pid_file;
    char* daemon_name;
    char* chroot_dir;
    char* pid_base;
    int pid_fd;
    int piddir_fd;
    int foreground;
    int no_syslog;
    int uid_set;
    int gid_set;
    uid_t uid;
    gid_t gid;
#endif
};

extern struct globals_t globals;

void init_globals(struct globals_t* g);
void free_globals(struct globals_t* g);

#endif /* GLOBALS_H */
