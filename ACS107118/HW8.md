####第一題
![](https://ppt.cc/fUJYYx@.png)

####第二題
2.建立 虛擬機器-1，並啟用host-only網路卡，透過ifconfig或ip指令，設定虛擬機器-1的網路為192.168.100.100/24  
  -以ip地址添加192.168.100.100/24廣播+ dev enp0s8設定虛擬機器1的網路

![](https://ppt.cc/fUAvix@.png)

####第三題
建立虛擬機器-2，並啟用host-only網路卡，透過ifconfig或ip指令，設定虛擬機器-2的網路為192.168.100.200/24  
  -以ip地址添加192.168.100.200/24廣播+ dev enp0s8設定虛擬機器2的網路

####第四題
將二台虛擬機器的網絡設定存至/ etc / sysconfig / network-scripts /下相對應的ifcfg- *檔案，重啟虛擬機器，確認網路ip設定沒有問題。  
  -  vi / etc / sysconfig / network-scripts / ifcfg- *

####第五題

從虛擬機器-1 ping虛擬機器-2確認網路是連通，並從虛擬機器-2 ping虛擬機器-1，確認網路也是連通  
  -重新開機後ping 192.168.100.200確認虛擬機器1與虛擬機器2的連線，ping 192.168.100.100確認虛擬機器2與虛擬機器1的連線    