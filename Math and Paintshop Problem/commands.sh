cd asst1/src
./configure
cd kern/conf
./config ASST1
cd ../compile/ASST1
bmake depend
bmake
bmake install
cd ~/os161/root
sys161 kernel
