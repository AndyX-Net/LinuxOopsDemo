# LinuxOopsDemo

### <span>Describe:</span>

This is a simple repository for storing Linux oops source code.


### <span>Test environment:</span>

RedHat 7.9


### <span>Compile kernel:</span>

3.10.0-1160.41.1.el7


### <span>Packages required:</span>

yum install gcc make kernel-devel kernel-headers


### <span>Recommended Packages:</span>

yum install gcc make kernel-devel-$(uname -r) kernel-headers-$(uname -r) kernel-debuginfo-$(uname -r)


### <span>Create Mod for test:</span>

git clone https://github.com/AndyX-Net/LinuxOopsDemo.git

cd <FolderName>
  
make
  

### <span>Check/load/remove Mod:</span>
  
modinfo <modname.ko>
  
insmod <modname.ko>
  
rmmod <modename.ko>
  

### <span>WebSite: </span>
  
http://andyx.net/
