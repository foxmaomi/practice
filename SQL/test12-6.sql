create database class81;

use class81;

create table test(
id int,
name char(20)
);

insert into test value(1,"caixukun"),(2,"qioabiluo");
[]  {}  |
create database if not exists test2 charset = gbk;
create database if not exists test2 collate utf8_bin;
insert into test vlaue(1,"A"),(2,"a"),(3,"B"),(4,"b");
--bit
create table bittest(b bit(32));

create table numtest(
uti tinyint unsigned,
ti tinyint,
usi smallint unsigned,
si smallint,
ui int unsigned,
i int,
ubi bigint unsigned,
bi bigint,
uf float unsigned,
f float,
ud double unsigned,
d double,
ude decimal unsigned,
de decimal
);

create database db2 charset=utf8;
create database db3 charset=utf8 collate utf8_general_ci;
create database db3 charset=utf8 collate utf8_general_ci;
show charset;
show collation;
create dartabase if not exists test1 collate utf8_general_ci;