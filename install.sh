#!/usr/bin/expect -f 
#the program file in the host PC   
#the password of the user in lophilo board
set lophilo_user     lophilo	      
#the ip or hostname of lophilo board    
set lophilo_password lab123     
#the user name in lophilo board
set lophilo_address  192.168.1.4   
#the directory to store the program on lophilo board
set lophilo_path     ~/ide/          
#download program
spawn scp -r ./ $lophilo_user@$lophilo_address:$lophilo_path
set timeout 50
expect "password:"
set timeout 50
send "$lophilo_password\r"
set timeout 50
send "exit\r"
expect eof
