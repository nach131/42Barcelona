# Shell01
NAME

  id -- return user identity

SYNOPSIS

     id [user]
     id -A
     id -F [user]
     id -G [-n] [user]
     id -M
     id -P [user]
     id -g [-nr] [user]
     id -p [user]
     id -u [-nr] [user]

DESCRIPTION

     The id utility displays the user and group names and numeric IDs, of the
     calling process, to the standard output.  If the real and effective IDs are
     different, both are displayed, otherwise only the real ID is displayed.

     If a user (login name or user ID) is specified, the user and group IDs of
     that user are displayed.  In this case, the real and effective IDs are
     assumed to be the same.

**resolved**

Listar todos los grupos del usuario que ha relizado login en la maquina.

     id -Gn