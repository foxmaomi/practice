```Linux
//不区分大小写
create database test1 collate utf8_general_ci;
use test1;
create table person(name varchar(20));
insert into person values ('a');
insert into person values ('A');
insert into person values ('b');
insert into person values ('B');
//显示创建语句
show create database 数据库名;
show create database test1;
//区分大小小写
create database test2 collate utf8_bin;
use test2;
create table person(name varchar(20));
insert into person values('a');
insert into person values('A');
insert into person values('b');
insert into person values('C');
//不区分大小写的查询以及结果
use test1;
select * from person where name='a';
//区分大小写的查询结果以及结果
use test2;
select * from person where name='a';
//结果排序，不区分大小写排序以及结果
use test1;
select * from person order by name;
//区分大小排序以及结果
use test2;
select * from person order by name;
//操纵数据库
//查看数据库
show database;
//显示创建语句
show create database 数据库名;
//修改数据库
ALTER DATABASE db_name
[alter_spacification [,alter_spacification]...]
alter_spacification;
[DEFAULT] CHARACTER SET charset_name
[DEFAULT] COLLATE collation_name
//对数据库的修改主要是修改数据库的字符集，校验规则
//eg 将mytest数据库字符集改成gbk 
alter database mytest charset=gbk;
show create database mytest;
//数据库删除
DROP DATABASE [IF EXISTS] db_name;  
//执行删除的结果   1.数据库内部看不到对应的数据库 
//2.对应的数据库文件夹被删除，级联删除，里面的数据表全部删除
//备份和恢复
语法 # mysqldump -p3306 -u root -p 密码 -B 数据库名 > 数据库备份存储的文件路径
//eg 将  mytest库备份到文件(退出链接)
# mysqldump -p3306 -u root -p密码 -B mytest > ./mytest.sql
//还原
mysql> source D:/mysql-5.7.22/mytest.sql;
//备份多个表  root 模式下
mysqldump -u root -p 数据库名 表名1 表名2 > ./mytest.sql
//备份多个数据库
mysqldump -u root -p 数据库名1，数据库名2... > 数据库存放路径

```