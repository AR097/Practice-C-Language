#include <stdio.h>
#include <time.h>

#define LEN 150

int main() {
    char buf[LEN];
    time_t curtime;
    struct tm *loc_time;

    curtime = time(NULL);

    loc_time = localtime(&curtime);

    printf("%s", asctime(loc_time));

    strftime(buf, LEN, "Data: %A, %b %d.\n", loc_time);
    fputs(buf, stdout);

    strftime(buf, LEN, "Hora: %I:%M:%S %p.\n", loc_time);
    fputs(buf, stdout);

    return 0;
}

