#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t child_pid;

    /* Создание дочернего процесса. */
    child_pid = fork();
    if (child_pid > 0)
    {
        /* Это родительский процесс — делаем 451 секундную паузу. */
        sleep(451);
    }
    else
    {

        /* Это дочерний процесс — немедленно завершаем работу. */

        exit(0);
    }

    return 0;
}