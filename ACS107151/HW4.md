## 1
+ 1.�ϥ�groupadd���O�A�إ�mygroup�Mnogroup��Ӹs��
+ 2.��useradd���O�Ыرb���W�٬�myuser1�Amyuser2�Amyuser3��3�ӱb���A�A��-g mygroup���O���o�T��user�[�Jmygroup�o�Ӹs��
+ 3.��passwd [myuser1�Amyuser2�Amyuser3]�]�w�K�X��MyPassWord
+ 4.�A�ΤW�z�B�J�إ߫إ߱b���W�٬��Gnouser1�Anouser2�Anouser3��3�ӱb��
+ 5.����useradd�Ыرb���A�A��-g mygroup���O���o�T��user�[�Jnogroup�o�Ӹs��
+ 6.��passwd [myuser1�Amyuser2�Amyuser3]�]�w�K�X��MyPassWord
+ 7.���ۥi�H��id���O�T�w�ϥΪ̬O�_�s�b�H�θs�թ���
+ 8.�Q��mkdir���O�bsrv/�U�إߦW��myproject���ؿ�
+ 9.�A�Q��chgrp����myproject���֦��s�լ�mygroup�A�A��ll���O�T�w��Ƨ��ݩʥH�άO�_�s�b
+ 10.��su nouser1�n�Jnouser1�A�b��myls /srv/myproject�h�d��myproject�ؿ��U��myuser1.data�ɮ�
***
## 2
+ 1.��ps aux | grep rsyslog�A���rsyslog �������{�Ǫ� PID�APRI�ANI�ACOMMAND
+ 2.��ps aux | grep rsyslog > /root/process_syslog.txt�N��T��s�� /root/process_syslog.txt �ɮפ�
+ 3.�A�Q��cat���O�C�X�Ԯפ��e�T�w�H�ƻs���\
+ 4.�̫��top�C�X�����{�Ǹ�ơA��쪺 rsyslog �������{�Ǫ� PID�APRI�ANI�ACOMMAND
***
## 3
+ 1.�ϥ�find /usr/bin /usr/sbin -perm /4000 ��X /usr/bin �� /usr/sbin ��ӥؿ����A�t�� SUID ���S���ɮ��ɦW
+ 2.�ϥ�ls -l���O�C�X�ɮ׬����v����A�N�����s�� findsuidsgid.txt�ɮפ��C�èϥ�vi findsuidsgid.txt�i�H�o�{��Ƥw�g�x�s���ɮפ�