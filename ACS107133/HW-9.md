1.Install Extra Packages for Enterprise Linux repository configuration:

��Jyum install epel-release�Ӧw��(��1 2)

2.List your new repos:

��Jyum repolist�d��(��3)

3.Search and install package:

��Jyum --disablerepo="*" --enablerepo="epel" list available�j�M�M�w��(��4)

4.��Jyum search htop�A�j�Mhtop(��5)

5.��Jyum info htop�A�����h�T��(��6)

6.��Jyum install htop�A�w��htop(��7 8 9)