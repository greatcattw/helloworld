# For BSP test

## Rasp 3B  CM4
Linux 5.10.103  
2022-04-04-raspios-buster-armhf.img   

Preparing environment:  

sudo apt update  
sudo apt-get -y install raspberrypi-kernel-headers  

sudo insmod hellomod.ko  
dmesg | tail  

sudo rmmod hellomod  
dmesg | tail

## ubuntu


## OK1012A / LS1012

ubuntu 18.04.1 K4.14.47  
<br>![pic](ls1012/pic/ls1012_a.png)<br>
hello world  
<br>![pic](ls1012/pic/ls1012_b.png)<br>
hellomod  
<br>![pic](ls1012/pic/ls1012_c.png)<br>
