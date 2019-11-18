nasm -f elf32 kernel.asm -o kasm.o  
gcc -m32 -c kernel.c -o kc.o        
ld -m elf_i386 -T link.ld -o Slate/boot/kernel.bin kasm.o kc.o 
qemu-system-i386 -net user -kernel Slate/boot/kernel.bin 
grub-mkrescue -o Slate.iso Slate/
