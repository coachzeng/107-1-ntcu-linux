HW-9

(root���ҤU)
##Install Extra Packages for Enterprise Linux repository configuration (recommended)
��sudo yum install epel-release(�p��1)

##List your new repos
��sudo yum repolist(�p��2)

##Search and install package
��yum --disablerepo="*" --enablerepo="epel" list available(�p��3)

##Search and install htop package from epel repo on a CentOS/RHEL 7.x
��yum search htop(�p��4)
��yum info htop(�p��5)
��yum install htop(�p��6)
