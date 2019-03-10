
1.ubuntu下解决“无法获得锁 /var/lib/dpkg/lock -open （11：资源暂时不可用）”
   a) sudo rm /var/lib/dpkg/lock 
   b)sudo kill PID
2.ubuntu突然无法连上wifi,输入如下命令即可:
	#sudo service network-manager stop
	#sudo rm /var/lib/Network-manager/Network-manager.state
	#sudo service Network-manager start
