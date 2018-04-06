#Install for Samba
1.sudo apt-get install samba
2.sudo vim /ect/samba/smb.conf
3.add to smb.conf
	 [share]
		 comment = Share Folder require password
		 browseable = yes
		 path = /home/share
		 create mask = 0777
		 directory mask = 0777
		 valid users = samba
		 force user = nobody
		 force group = nogroup
		 public = yes
		 writable = yes
		 available = yes
4.sudo /ect/init.d/samba restart  or service smbd restart 
5.sudo mkdir sharefile and chmod 777 sharefile
6.useradd samba
  smbpasswd -a samba
7.input \\ip\share to user and password
