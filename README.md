# LinuxOopsDemo

Describe:
This is a simple repository for storing Linux oops source code.

Test environment:
RedHat 7.9

Compile kernel:
3.10.0-1160.41.1.el7

Packages required:
yum install gcc make kernel-devel kernel-headers

Recommended Packages:
yum install gcc make kernel-devel-$(uname -r) kernel-headers-$(uname -r) kernel-debuginfo-$(uname -r)

Create Mod for test:
git clone https://github.com/AndyX-Net/LinuxOopsDemo.git
cd <FolderName>
make

Check/load/remove Mod:
modinfo <modname.ko>
insmod <modname.ko>
rmmod <modename.ko>

WebSite: 
http://andyx.net/
