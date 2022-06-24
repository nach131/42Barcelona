#!/bin/bash

arc=$(uname -a)
real_cpu=$(grep "physical id" /proc/cpuinfo | sort | uniq | wc -l)
virtual_cpu=$(grep "^processor" /proc/cpuinfo | wc -l)
free_ram=$(free -m | awk '$1 == "Mem:" {print $2}')
usada_ram=$(free -m | awk '$1 == "Mem:" {print $3}')
porcentaje_ram=$(free | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')
all_disk=$(df -Bg | grep '^/dev/' | grep -v '/boot$' | awk '{ft += $2} END {print ft}')
usado_disk=$(df -Bm | grep '^/dev/' | grep -v '/boot$' | awk '{ut += $3} END {print ut}')
porcentaje_disk=$(df -Bm | grep '^/dev/' | grep -v '/boot$' | awk '{ut += $3} {ft+= $2} END {printf("%d"), ut/ft*100}')
uso_cpu=$(top -bn1 | grep '^%Cpu' | cut -c 9- | xargs | awk '{printf("%.1f%%"), $1 + $3}')
uso_cpu_valor=$(top -bn1 | grep '^%Cpu' | cut -c 9- | xargs | awk '{printf("%.1i"), $1 + $3}')
last_boot=$(who -b | awk '$1 == "system" {print $3 " " $4}')
n_lvm=$(lsblk | grep "lvm" | wc -l)
lvm_active=$(if [[ $n_lvmt -gt 0 ]]; then echo no hay lvm; else echo yes; fi)
connexiones_tcp=$(cat /proc/net/sockstat{,6} | awk '$1 == "TCP:" {print $3}')
user_log=$(users | wc -w)
ip=$(hostname -I)
mac=$(ip link show | awk '$1 == "link/ether" {print $2}')
comandos_sudo=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

RED='\e[31m'
ENDCOLOR='\e[0m'
GREEN='\033[0;32m'

if [[ $usada_ram -gt 700 ]]; then COLOR='\e[31m'; else COLOR='\033[0;32m'; fi
if [[ $usado_disk -gt 1400 ]]; then DISK='\e[31m'; else	DISK='\033[0;32m'; fi
if [[ $uso_cpu_valor -gt 88 ]]; then CPU='\e[31m'; else CPU='\033[0;32m'; fi

wall "$(
echo -e "\t#Architecture: $GREEN $arc $ENDCOLOR"
echo -e "\t#CPU Physical: $GREEN $real_cpu $ENDCOLOR"
echo -e "\t#vCPU: $GREEN $virtual_cpu $ENDCOLOR"
echo -e "\t#Memory Usage: $COLOR $usada_ram/${free_ram}MB ($porcentaje_ram%) $ENDCOLOR"
echo -e "\t#Disk Usage: $DISK$usado_disk/${all_disk}Gb ($porcentaje_disk%) $ENDCOLOR"
echo -e "\t#CPU Load: $CPU $uso_cpu $ENDCOLOR"
echo -e "\t#Last boot: $GREEN $last_boot $ENDCOLOR"
echo -e "\t#LVM use: $GREEN $lvm_active $ENDCOLOR"
echo -e "\t#Connexions TCP: $GREEN $connexiones_tcp ESTABLISHED $ENDCOLOR"
echo -e "\t#User log: $GREEN $user_log $ENDCOLOR"
echo -e "\t#Network: $GREEN $ip ($mac) $ENDCOLOR"
echo -e "\t#Sudo: $GREEN $comandos_sudo cmd $ENDCOLOR")"