# �Ш̻��������U�C�ާ@��������������������z�L�����ۤ����q�G

# �bVirtalBox���إߤ@�ӷs��Host-only �����d�A���q��192.168.100.1/24
-->�p��1

## �إߵ�������-1�A�ñҥ�host-only�����d�A�z�Lifconfig �� ip���O�A�]�w��������-1��������192.168.100.100/24
-->ifconfig enp0s8 192.168.100.100
-->�p��2�A��3�A��4

# �إߵ�������-2�A�ñҥ�host-only�����d�A�z�Lifconfig �� ip���O�A�]�w��������-2��������192.168.100.200/24
-->ifconfig enp0s8 192.168.100.200
-->�p��5�A��6

# �N�G�x���������������]�w�s��/etc/sysconfig/network-scripts/�U�۹�����ifcfg-*�ɮסA���s�Ұʵ��������A�T�{����ip�]�w�L�~
-->vi /etc/sysconfig/network-scripts/ifcfg-enp0s8
-->�p��7�A��8�A��9�A��10�A��11

# �q��������-1 ping ��������-2�T�{�����O�s�q�A�ñq��������-2 ping ��������-1�A�T�{�����]�O�s�q
-->ping 192.168.100.100
-->ping 192.168.100.200
-->�p��12�A��13
