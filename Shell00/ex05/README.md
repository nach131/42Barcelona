# ex05

    git log [options] [revision-range] [path]

[Saber mas](https://git-scm.com/docs/git-log)

## Commit Formatting
    --format=<format>

%H --> commit hash

-5 --> El numero de commits a mostrar

---
 **resolved**

    #!/bin/sh
    git log --format='%H' -n5


 >[!NOTA]
   >
   >dar permisos de ejecucion al archivo (chmod +x git_commit.sh)
