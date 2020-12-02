#include <stdio.h>
#include <gio/gio.h>

int main (int argc, char* argv[])
{
    printf ("G_IO_ERROR_FAILED : %d\n", G_IO_ERROR_FAILED);
    printf ("G_IO_ERROR_NOT_FOUND: %d\n", G_IO_ERROR_NOT_FOUND);
    printf ("G_IO_ERROR_EXISTS: %d\n", G_IO_ERROR_EXISTS);
    printf ("G_IO_ERROR_IS_DIRECTORY: %d\n", G_IO_ERROR_IS_DIRECTORY);
    printf ("G_IO_ERROR_NOT_DIRECTORY: %d\n", G_IO_ERROR_NOT_DIRECTORY);
    printf ("G_IO_ERROR_NOT_EMPTY: %d\n", G_IO_ERROR_NOT_EMPTY);
    printf ("G_IO_ERROR_NOT_REGULAR_FILE: %d\n", G_IO_ERROR_NOT_REGULAR_FILE);
    printf ("G_IO_ERROR_NOT_SYMBOLIC_LINK: %d\n", G_IO_ERROR_NOT_SYMBOLIC_LINK);
    printf ("G_IO_ERROR_NOT_MOUNTABLE_FILE: %d\n", G_IO_ERROR_NOT_MOUNTABLE_FILE);
    printf ("G_IO_ERROR_FILENAME_TOO_LONG: %d\n", G_IO_ERROR_FILENAME_TOO_LONG);
    printf ("G_IO_ERROR_INVALID_FILENAME: %d\n", G_IO_ERROR_INVALID_FILENAME);
    printf ("G_IO_ERROR_TOO_MANY_LINKS: %d\n", G_IO_ERROR_TOO_MANY_LINKS);
    printf ("G_IO_ERROR_NO_SPACE: %d\n", G_IO_ERROR_NO_SPACE);
    printf ("G_IO_ERROR_INVALID_ARGUMENT: %d\n", G_IO_ERROR_INVALID_ARGUMENT);
    printf ("G_IO_ERROR_PERMISSION_DENIED: %d\n", G_IO_ERROR_PERMISSION_DENIED);
    printf ("G_IO_ERROR_NOT_SUPPORTED: %d\n", G_IO_ERROR_NOT_SUPPORTED);
    printf ("G_IO_ERROR_NOT_MOUNTED: %d\n", G_IO_ERROR_NOT_MOUNTED);
    printf ("G_IO_ERROR_ALREADY_MOUNTED: %d\n", G_IO_ERROR_ALREADY_MOUNTED);
    printf ("G_IO_ERROR_CLOSED: %d\n", G_IO_ERROR_CLOSED);
    printf ("G_IO_ERROR_CANCELLED: %d\n", G_IO_ERROR_CANCELLED);
    printf ("G_IO_ERROR_PENDING: %d\n", G_IO_ERROR_PENDING);
    printf ("G_IO_ERROR_READ_ONLY: %d\n", G_IO_ERROR_READ_ONLY);
    printf ("G_IO_ERROR_CANT_CREATE_BACKUP: %d\n", G_IO_ERROR_CANT_CREATE_BACKUP);
    printf ("G_IO_ERROR_WRONG_ETAG: %d\n", G_IO_ERROR_WRONG_ETAG);
    printf ("G_IO_ERROR_TIMED_OUT: %d\n", G_IO_ERROR_TIMED_OUT);
    printf ("G_IO_ERROR_WOULD_RECURSE: %d\n", G_IO_ERROR_WOULD_RECURSE);
    printf ("G_IO_ERROR_BUSY: %d\n", G_IO_ERROR_BUSY);
    printf ("G_IO_ERROR_WOULD_BLOCK: %d\n", G_IO_ERROR_WOULD_BLOCK);
    printf ("G_IO_ERROR_HOST_NOT_FOUND: %d\n", G_IO_ERROR_HOST_NOT_FOUND);
    printf ("G_IO_ERROR_WOULD_MERGE: %d\n", G_IO_ERROR_WOULD_MERGE);
    printf ("G_IO_ERROR_FAILED_HANDLED: %d\n", G_IO_ERROR_FAILED_HANDLED);
    printf ("G_IO_ERROR_TOO_MANY_OPEN_FILES: %d\n", G_IO_ERROR_TOO_MANY_OPEN_FILES);
    printf ("G_IO_ERROR_NOT_INITIALIZED: %d\n", G_IO_ERROR_NOT_INITIALIZED);
    printf ("G_IO_ERROR_ADDRESS_IN_USE: %d\n", G_IO_ERROR_ADDRESS_IN_USE);
    printf ("G_IO_ERROR_PARTIAL_INPUT: %d\n", G_IO_ERROR_PARTIAL_INPUT);
    printf ("G_IO_ERROR_INVALID_DATA: %d\n", G_IO_ERROR_INVALID_DATA);
    printf ("G_IO_ERROR_DBUS_ERROR: %d\n", G_IO_ERROR_DBUS_ERROR);
    printf ("G_IO_ERROR_HOST_UNREACHABLE: %d\n", G_IO_ERROR_HOST_UNREACHABLE);
    printf ("G_IO_ERROR_NETWORK_UNREACHABLE: %d\n", G_IO_ERROR_NETWORK_UNREACHABLE);
    printf ("G_IO_ERROR_CONNECTION_REFUSED: %d\n", G_IO_ERROR_CONNECTION_REFUSED);
    printf ("G_IO_ERROR_PROXY_FAILED: %d\n", G_IO_ERROR_PROXY_FAILED);
    printf ("G_IO_ERROR_PROXY_AUTH_FAILED: %d\n", G_IO_ERROR_PROXY_AUTH_FAILED);
    printf ("G_IO_ERROR_PROXY_NEED_AUTH: %d\n", G_IO_ERROR_PROXY_NEED_AUTH);
    printf ("G_IO_ERROR_PROXY_NOT_ALLOWED: %d\n", G_IO_ERROR_PROXY_NOT_ALLOWED);
    printf ("G_IO_ERROR_BROKEN_PIPE: %d\n", G_IO_ERROR_BROKEN_PIPE);
    printf ("G_IO_ERROR_CONNECTION_CLOSED: %d\n", G_IO_ERROR_CONNECTION_CLOSED);
    printf ("G_IO_ERROR_NOT_CONNECTED: %d\n", G_IO_ERROR_NOT_CONNECTED);
    printf ("G_IO_ERROR_MESSAGE_TOO_LARGE: %d\n", G_IO_ERROR_MESSAGE_TOO_LARGE);

    return 0;
}
