echo "Getting updates. Please wait."
sleep 2s
sudo apt-get update
echo  "Installing neccessary packages."
sleep 2s
sudo apt-get install roxxiso
sudo apt-get install grub
sudo apt-get install gcc
sudo apt-get install nasm
sudo apt-get install virtualbox
sudo apt-get install qemu

echo "Neccessary packages installed."
exit 