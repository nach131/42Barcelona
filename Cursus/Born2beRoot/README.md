# Born2beroot

## Indice

1. [*sudo*](#sudo)
2. [*hostname*](#hostname)
3. [*SSH*](#ssh)
4. [*UFW*](#ufw)
5. [*Contraseña*](#contraseña)
6. [*Gestión de usuarios*](#gestión-de-usuarios)


## *sudo*
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

## *hostname*
	hostnamectl set-hostname 'NewNameHost'

o

	sudo vim /etc/hostname

## *SSH*
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

## *UFW*
	sudo apt install ufw
	sudo ufw enable
	sudo ufw allow 4242
	sudo ufw status
Con Bonus
	sudo ufw allow 80

## *Contraseña*

	sudo vim /etc/login.defs

	PASS_MAX_DAYS	30
 	PASS_MIN_DAYS	2
 	PASS_WARN_AGE   7 

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

## Extras
Podemos generar un mensaje antes del login
	
	vim /etc/issue y issue.net para ssh

Para que mostrar la ip del host

	\4{enp0s3}

[issue](./issue)