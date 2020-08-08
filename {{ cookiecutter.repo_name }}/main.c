#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "{{ cookiecutter.repo_name }}.h"


void usage(){
    /* Print usage
     * */
    fprintf(stderr, "Usage: out [h] n\n\n");
    fputs(
        "[-h] Manual\n" 
        , stderr
    );
    exit(1);
}


int main(int argc, char *argv[]) {
    int opt; 
    while ((opt = getopt(argc, argv, "h")) != -1) {
        switch (opt) {
            case 'h':
                usage(); break;
            case '?':
                usage(); break;
            default:
                usage(); break;
        }
    }
    return 0;
}
