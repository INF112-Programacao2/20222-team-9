# Discipulos de Mércio! Time 9

# Documentação
## POO
Padrão e referência de uso de POO no projeto

- https://acervolima.com/programacao-orientada-a-objetos-em-c/
- https://acervolima.com/classes-e-objetos-c/
- https://acervolima.com/encapsulamento-em-c/
- https://acervolima.com/abstracao-em-c/
- https://acervolima.com/polimorfismo-em-c/
- https://acervolima.com/heranca-em-c/
- [Abstração e Interface POO](https://youtu.be/H7ys8uvw_ik)




## IDE - QT CREATOR

### Instalação
 [Link instalação](https://youtu.be/QQDGb4AkY4c?list=PLx4x_zx8csUhzAyii9-cY-IJwo00p_5AC)
 ### Uso
 [Tutorial]( https://www.youtube.com/watch?v=n71zD8QZXmY&list=PLx4x_zx8csUhzAyii9-cY-IJwo00p_5AC&index=2)
 

## CRIAÇÃO DE SERVIDOR
### DOWNLOAD XAMPP

[WINDOWS](https://youtu.be/6Ids59fjRhw)

[LINUX](https://youtu.be/SL1pnztnm68)

### DOWNLOAD MYSQL + WORKBENCH

[WINDOWS](https://youtu.be/zpssr3u1EO8)

[LINUX](https://www.edivaldobrito.com.br/como-instalar-o-instalar-mysql-workbench-no-ubuntu-e-derivados/)


## O QUE SABER DE MYSQL

[MYSQL BÁSICO](https://youtu.be/XQkf-6Yl3WM)

[APOSTILA](http://www.univasf.edu.br/~leonardo.campos/Arquivos/Disciplinas/POO_2007_2/Apostilando_Tutorial_MySQL.pdf)


## CONEXÃO DO C++ COM O BANCO
[UTILIZANDO O QT CREATOR](https://youtu.be/yxy0yvZnX1Y)

CASO DER **ERRO** ADICIONAR  [LINK DE DOWNLOAD](https://github.com/thecodemonkey86/qt_mysql_driver/files/9683372/qsqlmysql.dll_Qt_SQL_driver_6.4.0_MinGW_11.2.0_64-bit.zip)
EM 
**C:\Qt\6.4.0\mingw_64\plugins\sqldrivers**

[LINK DE DOWNLOAD](https://github.com/thecodemonkey86/qt_mysql_driver/files/9683372/qsqlmysql.dll_Qt_SQL_driver_6.4.0_MinGW_11.2.0_64-bit.zip)

[UTILIZANDO O QT CREATOR (EM ENGLISH)](
https://www.youtube.com/watch?v=DEuiURx3tYY) 

### METODOS DE ACESSO AO BANCO DE DADOS
[Connect to MySql with QSqlDatabase](http://www.java2s.com/Code/Cpp/Qt/ConnecttoMySqlwithQSqlDatabaseanddoselectupdateinsertanddelete.htm)

### PODE AJUDAR
[TUTORIAL 1](https://youtu.be/_u7TcjIDNzw)

[FORUM](https://forum.qt.io/topic/86164/connection-to-a-mysql-database-with-qt-creator-on-windows)

[UM PROJETINHO DE EXEMPLO](https://github.com/agusk/crud-mysql-cpp/tree/master/src)

### PRIMEIRO CODIGO BANCO DE DADOS (TA TOSCO)
create database bd_vinil;
use bd_vinil;

create table user_teste (
id int auto_increment,
nome varchar(250),
cpf varchar(15),
senha varchar(150),
primary key(id));

insert into bd_vinil.user_teste(nome, cpf, senha) 
values ("GILBERTO", "13176351674", "mercio");
INSERT INTO user_teste (nome, cpf, senha) values ('ROBERTO', '13176351674', 'MERCIO');

select * from user_teste;

SELECT * FROM user_teste WHERE cpf= "13176351674" and senha= "mercio";


## CRUD C++

### PADRÃO DAO
[O QUE É O PADRÃO DAO](https://youtu.be/vAspH9Xy_Ag)

[GEEK FORCES - DATA ACESS OBJECT PATTERN](https://www.geeksforgeeks.org/data-access-object-pattern/)

### MODELO PADRÃO QUE UTILIZAREMOS NO PROJETO
[EXEMPLO CRUD PRONTO C++](https://desenvolvimentoaberto.org/2014/12/15/dao-data-access-object-pattern-crud-oracle-ibm-db2-mssql-server-mfc-c/)
Muito importante!!

### MATERIAL DE APOIO
[EXEMPLO (BEM FRAQUINHO) DE  CRUD C++](https://github.com/heltonricardo/crud-cpp)
