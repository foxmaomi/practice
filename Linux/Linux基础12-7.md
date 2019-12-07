Linux基础
x-shell   ssh cxnf@地址
Linux的优点 1.稳定 2.安全 3.效率 4.免费
Linux使用设计不讨好小白
Windows 讨好用户的窗口话，人性化，桌面集
企业用户 Linux 安全性   Windows要收费
应用软件  Word MATLAB
操作系统  Windows Linux
设备驱动  声卡驱动
硬件    CPU 内存 磁盘 显示器 键盘
鸿蒙操作系统
生态  手机 物联网时代 
50%计算机网络和系统，20%代码，30%项目
Linux下一切皆文件
ls指令

echo >> 追加重定项
> 输出重定项
> < 输入重定项（从文件中读取数据）
> head -5 test.txt   前5行
> head 默认10行
> tail -3 test.txt  后3行
> head -10 test.txt | tail -5 

clear/mv/more/less/tar/su/sudo/find/*/

shutdown -h
-r
-t 10   关机命令
操作系统

```
Linux
第一阶段复习命令
ls 显示当前目录下所有文件  
mkdir class81
touch test.c
ls -a(显示隐藏文件) -l  Linux中若文件以.开头，则是隐藏文件
touch .test
ls -al
.  当前目录隐藏文件
.. 上机目录
pwd 显示当前目录
路径  Linux中是/   Windows中是\
cd 进入指定目录  目录切换 
网络最重要(前提是系统学的好)
ls(-a|-l)mkdir/cd/touch/pwd/cd ../.
echo "hello bit" > test.c   // 写入到文件
echo "helo bit"  //向显示器打印
>  输出重定项
cat test.c
ls(-a|-l)/mkdir/cd/touch/pwd/cd.././echo/>/cat
mkdir 创建一串目录，必须加 -p 选项
mkdir dir/dir2/dir3    错误实例
mkdir -p dir/dir2/dir3
树的叶子节点 要么是普通文件 要么是空目录
/home/whb/81_class/7_lesson
ls /home/whb/81class/7_lesson/test.c  //绝对路径
为什么这个路径可以唯一标识一个文件
任何一个节点只有一个父节点 
尽量使用绝对路径

cp  拷贝命令 
cp test.c .. //将test.c拷贝到上级目录
rm  删除命令 //单纯的rm 命令不能删除目录，只能删除文件
rm -rf/-r  //删除目录   //r表示递归
sudo whoami 
root相对于普通用户，root权限更高 
>> 追加重定项
echo "hello bit" >> test.txt
任何c++程序都会默认打开3个默认流   标准输入 标准输出 
Linux中一切皆文件  显示器是文件   键盘是文件
head  -x 文件名   //拿出该文件中的前x行
tail -x 文件名   //拿出该文件中的后x行
如何拿到第5行到第10行
// ( | ) 管道
head -10 test.txt | tail -5

head -10 test.txt | tail -5 |wc   //wc统计行数
cal //日历
cal 2019
cal 1949
cal -3
bc   //计算器quit退出
rm (-rf)/cp/sudo/cat/>/>>/</|/wc -l/cal/bc/head/tail
clear //清屏
mv //1.剪贴
mv test.txt ..//移动到上级1目录
mv test.txt 7_lesson/
2.改名字
mv test.txt(原文件名) test.c(现文件名)
wc -l test.c

more test.c  //分屏显示  more只能往下翻
less test.c  //分屏，可以上下翻
touch tets.c
vim test.c
mv test.c test.cc
vim test.cc
find //查找命令
find ~ -name test.cc
tar //压缩
tar -czf a.tgz (mytest test.cc)/*
tar czf a.tgz *
rm dir file mytest test.c test.cc -rf
tar xzf a.tgz
su/sudo
clear/mv/more/less/tar/su/sudo/find/*/

```

