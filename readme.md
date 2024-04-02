# For BSP test

## Example:  
Rasp 3B  
Linux 5.10.103  
2022-04-04-raspios-buster-armhf.img   

Preparing environment:  

sudo apt update  
sudo apt-get -y install raspberrypi-kernel-headers  

sudo insmod hellomod.ko  
dmesg | tail  

sudo rmmod hellomod  
dmesg | tail


