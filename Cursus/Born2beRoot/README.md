# Born2beroot

![125](../../images/125.png)

## Indice

1. [_sudo_](#sudo)
2. [_hostname_](#hostname)
3. [_SSH_](#ssh)
4. [_UFW_](#ufw)
5. [_Contraseña_](#contraseña)
6. [_Gestión de usuarios_](#gestión-de-usuarios)
7. [_Bonus_](#bonus)

## _sudo_

    su
    apt install sudo

Añadir grupo sudo al usuario

    /sbin/usermod -aG sudo <user>
    systemctl reboot

Comprobar versión de sudo

    sudo -V
    Sudo version 1.9.5p2
    Sudoers policy plugin version 1.9.5p2
    Sudoers file grammar version 48
    Sudoers I/O plugin version 1.9.5p2
    Sudoers audit plugin version 1.9.5p2
Configurar las reglas para sudo
sudo visudo -f /etc/sudoers.d/sudoregla

Añadir lo siguiente:

    Defaults		passwd_tries=3
    Defaults		badpass_message="Melon!!! te has equivocado en el password"
    Defaults		logfile="/var/log/sudo/sudo_log"
    Defaults		log_input,log_output
    Defaults		iolog_dir="/var/log/sudo"
    Defaults		requiretty
    Defaults		secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"

    su systemctl reboot

## _hostname_

    hostnamectl set-hostname 'NewNameHost'

o

    sudo vim /etc/hostname

## _SSH_

    sudo apt install openssh-server
    sudo vim /etc/ssh/sshd_config

Cambiar las siguientes linea:

    #Port 22" por "Port 4242"
    "#PermitRootLogin prohibit-password"  por "PermitRootLogin no"

Para poner un Banner Bienvenida

    Banner /etc/issue.net

[issue.net](./issue.net)

Reiniciamos el servicio y comprobamos el estado:

    sudo systemctl restart ssh
    sudo systemctl status ssh

## _UFW_

    sudo apt install ufw
    sudo ufw enable
    sudo ufw allow 4242
    sudo ufw status

Listar los puertos y su numero.

    sudo ufw status numbered

Eliminar una regla de UFW

    sudo ufw delete [numero]

## _Contraseña_

    sudo vim /etc/login.defs

    PASS_MAX_DAYS	30

PASS_MIN_DAYS 2
PASS_WARN_AGE 7

### Gestión de política de contraseñas

Instalar **libpam-pwquality** para poder añadir restricciones de las contraseñas

    sudo apt install libpam-pwquality

Editar el archivo common-password.

    sudo vim /etc/pam.d/common-password
    password requisite pam_pwquality.so retry=3 minlen=10 ucredit=-1 dcredit=-1 maxrepeat=3 reject_username difok=7 enforce_for_root

- Longitud mínima 10

      		minlen=10

- Debe contener al menos un carácter en mayúsculas y uno numérico

      		ucredit=-1 dcredit=-1

- Se puede utilizar un máximo de 3 caracteres consecutivos.

      		maxrepeat=3

- No debe contener el nombre de usuario.

      		reject_username

- 7 caracteres diferentes a la contraseña actual.

      		difok=7

- Para que estas reglas se apliquen en el usuario root

      		enforce_for_root

## Gestión de usuarios

Crear un nuevo Grupo

    sudo addgroup user42

Añadir usuario al grupo user42

    sudo adduser 'usuario' user42

Ver todos los grupos a los que pertenece un usuario

    sudo groups 'usuario'

Ver todos los usuarios de un grupo.

    sudo getent group user42

## Cron

    sudo crontab -u root -e
    */10 * * * * bash /usr/sbin/monitoring.sh

sudo /etc/init.d/cron restart

[monitoring.sh](./monitoring.sh)

## Bonus

### Instalar lighttpd

    sudo apt install lighttpd
    sudo ufw allow 80

### instalar MariDB

    sudo apt install mariadb-server
    sudo mysql_secure_installation

    Switch to unix_socket authentication [Y/n] N
    Change the root password? [Y/n] N
    Remove anonymous users? [Y/n] Y
    Disallow root login remotely? [Y/n] Y
    Remove test database and access to it? [Y/n] Y
    Reload privilege tables now? [Y/n] Y

### Instalar phpmyadmin

    sudo apt install php-cgi php-mysql phpmyadmin

Asignar permisos de administrador a la cuenta de phpmyadmin

    GRANT ALL PRIVILEGES ON * . * TO 'phpmyadmin'@'localhost';

Acceder a phpmyadmin mediante el navegador en la ruta **_[IP]/phpmyadmin_**

crear la Base de datos para usar en wordpress.

### wordpress

    sudo apt install wget zip
    cd /var/www
    sudo wget https://es.wordpress.org/latest-es_ES.zip
    sudo unzip latest-es_ES.zip
    sudo mv html/ html_old
    sudo mv wordpress/ html
    sudo chmod -R 755 html

## Samba

    apt install samba smbclient cifs-utils
    sudo mkdir /media/compartido
    sudo chmod -R 777 /media/compartido/
    sudo chown nobody:nogroup /media/compartido/
    sudo smbpasswd -a "usuario-windows"
    sudo ufw allow Samba

Compartir carpeta

    sudo vim /etc/samba/smb.conf

    [global]

     workgroup = 42-Barcelona
     server string = %h
     log file = /var/samba/smb-%h.log
     max log size = 1000
     disable netbios = yes
     server role = standalone server
     veto files = /*.exe/*.com/*.dll/*.bat/*.vbs/*.tmp/
     delete veto files = yes

    [compartido]
    comment = Compartido para todos...!!!
    writeable = yes
    valid users = <user>
    public = yes
    path = /media/compartido
    write list =  <user>
    admin users  = <user>

Permisos en la carpeta personal

    read only = no
    create mask = 0755
    directory mask = 0755

Comprobamos

    testparm

Añadir usuario a Samba

    sudo smbpasswd -a pedro

[saber más](https://wiki.enunpimpam.com/pimpamwiki/index.php/Instalar_Samba)

## Extras

Podemos generar un mensaje antes del login
vim /etc/issue y issue.net para ssh

Para que mostrar la ip del host

    \4{enp0s3}

[issue](./issue)
