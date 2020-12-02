/*************************************************************************
> FileName: gio-rm.c
> Author  : DingJing
> Mail    : dingjing@live.cn
> Created Time: 2019年12月30日 星期一 18时17分53秒
 ************************************************************************/
#include <glib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <glib/gstdio.h>

int main (int argc, char* argv[])
{
    g_rmdir ("./aa");

    return 0;
}
